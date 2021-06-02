//
//  SttHelper.swift
//  Unity-iPhone
//
//  Created by MacTouch on 2017. 7. 21..
//
//

import Foundation
import Speech
@objc class SttHelper : NSObject , SFSpeechRecognizerDelegate {
    private let speechRecognizer = SFSpeechRecognizer(locale: Locale.init(identifier: "en-US"))
    private var recognitionRequest: SFSpeechAudioBufferRecognitionRequest?
    private var recognitionTask: SFSpeechRecognitionTask?
    private let audioEngine = AVAudioEngine()
    private var isEnabled = false
    private var isListening = false
    var audioRecorder:AVAudioRecorder!
    private var sceneName:String?
    
    @objc func initialize(str: String) {
        self.sceneName = str;
        speechRecognizer?.delegate = self  //3
        SFSpeechRecognizer.requestAuthorization { (authStatus) in  //4
            switch authStatus {  //5
            case .authorized:
                self.isEnabled = true
            case .denied:
                self.isEnabled = false
                print("User denied access to speech recognition")
            case .restricted:
                self.isEnabled = false
                print("Speech recognition restricted on this device")
            case .notDetermined:
                self.isEnabled = false
                print("Speech recognition not yet authorized")
            }
//            OperationQueue.main.addOperation() {
//                self.microphoneButton.isEnabled = isButtonEnabled
//            }
        }
    }
    func directoryURL() -> URL? {
        let fileManager = FileManager.default
        let urls = fileManager.urls(for: .documentDirectory, in: .userDomainMask)
        let documentDirectory = urls[0] as URL
        let soundURL = documentDirectory.appendingPathComponent("sound.m4a")
        return soundURL
    }
    @objc func rec() {
        if isEnabled {
            if recognitionTask != nil {
                recognitionTask?.cancel()
                recognitionTask = nil
            }

            let recordSettings = [
                AVSampleRateKey : NSNumber(value: Float(44100.0)),
                AVFormatIDKey : NSNumber(value:Int32(kAudioFormatMPEG4AAC)),
                AVNumberOfChannelsKey : NSNumber(value: Int32(1)),
                AVEncoderAudioQualityKey :
                    NSNumber(value: Int32(AVAudioQuality.medium.rawValue))]
            let audioSession = AVAudioSession.sharedInstance()
            do {
                //try audioSession.setCategory(AVAudioSessionCategoryRecord)
                try audioSession.setCategory(AVAudioSessionCategoryPlayAndRecord, with: AVAudioSessionCategoryOptions.defaultToSpeaker)
                try audioSession.setMode(AVAudioSessionModeMeasurement)
                try audioSession.setActive(true, with: .notifyOthersOnDeactivation)
                try audioRecorder = AVAudioRecorder(url: directoryURL()!,
                                                    settings: recordSettings)
                audioRecorder.prepareToRecord()
                audioRecorder.isMeteringEnabled = true
                audioRecorder.record()
            } catch {
                print("audioSession properties weren't set because of an error.")
            }
            
            recognitionRequest = SFSpeechAudioBufferRecognitionRequest()
            
            guard let inputNode = audioEngine.inputNode else {
                fatalError("Audio engine has no input node")
            }
            
            guard let recognitionRequest = recognitionRequest else {
                fatalError("Unable to create an SFSpeechAudioBufferRecognitionRequest object")
            }
            
            recognitionRequest.shouldReportPartialResults = true
            
            recognitionTask = speechRecognizer?.recognitionTask(with: recognitionRequest, resultHandler: { (result, error) in
                
                var isFinal = false
                if result != nil {
                    
                    //self.textView.text = result?.bestTranscription.formattedString
                    
                    isFinal = (result?.isFinal)!
                }
                self.recognitionRequest?.endAudio()
                if error != nil || isFinal {
                    self.isListening = false
                    UnitySend(self.sceneName!, "STTvolume", "0.0")
                    if result == nil || result?.transcriptions.count == 0 {
                        UnitySend(self.sceneName!, "STTresult", "_error")
                    } else {
                        var json = [String]();
                        for t in (result?.transcriptions)! {
                            print(t.formattedString)
                            json.append(t.formattedString)
                        }
                        if let objectData = try? JSONSerialization.data(withJSONObject: json, options: JSONSerialization.WritingOptions(rawValue: 0)) {
                            let objectString = String(data: objectData, encoding: .utf8)
                            UnitySend(self.sceneName!, "STTresult", objectString)
                        } else {
                            UnitySend(self.sceneName!, "STTresult", "_error")
                        }
                    }
                    self.audioRecorder.stop()
                    self.audioEngine.stop()
                    inputNode.removeTap(onBus: 0)
                    self.recognitionRequest = nil
                    self.recognitionTask = nil
                }
            })
            self.isListening = true
            let recordingFormat = inputNode.outputFormat(forBus: 0)
            inputNode.installTap(onBus: 0, bufferSize: 1024, format: recordingFormat) { (buffer, when) in
                self.recognitionRequest?.append(buffer)
                self.audioRecorder.updateMeters()
                let vol = self.audioRecorder.peakPower(forChannel: 0)
                print("peak" + String(vol))
                if self.isListening {
                    UnitySend(self.sceneName!, "STTvolume", String(vol+40))
                }
            }
            audioEngine.prepare()
            do {
                try audioEngine.start()
            } catch {
                print("audioEngine couldn't start because of an error.")
            }
        }
    }
    @objc func soundBack() {
        let audioSession = AVAudioSession.sharedInstance()
        do {
            try audioSession.setMode(AVAudioSessionModeDefault)
        } catch {
            print("audioSession properties sound back weren't set because of an error.")
        }

    }
    @objc func destroy() {
        if self.recognitionRequest != nil {
            self.recognitionRequest?.endAudio()
            self.recognitionRequest = nil
        }
        if recognitionTask != nil {
            recognitionTask?.cancel()
            recognitionTask = nil
        }
        audioRecorder.stop()
        guard let inputNode = audioEngine.inputNode else {
            fatalError("Audio engine has no input node")
        }
        self.audioEngine.stop()
        inputNode.removeTap(onBus: 0)
    }
    
    func speechRecognizer(_ speechRecognizer: SFSpeechRecognizer, availabilityDidChange available: Bool) {
        if available {
            self.isEnabled = true
        } else {
            self.isEnabled = false
        }
        print(available)
    }

}
