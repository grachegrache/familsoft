//
//  ttsHelper.m
//  ttsobjc
//
//  Created by MacTouch on 2017. 7. 14..
//  Copyright © 2017년 MacTouch. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>
void ttsInitialize(){
    AVSpeechSynthesizer * synthesizer = [[AVSpeechSynthesizer alloc]init];
    AVSpeechUtterance * utterance = [[AVSpeechUtterance alloc]initWithString:@" "];
    utterance.voice = [AVSpeechSynthesisVoice voiceWithLanguage:@"en-US"];
    utterance.rate = 0.5f;
    
    [synthesizer speakUtterance:utterance];
}
void ttsSpeak(const char* text){
    AVSpeechSynthesizer * synthesizer = [[AVSpeechSynthesizer alloc]init];
    AVSpeechUtterance * utterance = [[AVSpeechUtterance alloc]initWithString:[NSString stringWithUTF8String:text]];
    utterance.voice = [AVSpeechSynthesisVoice voiceWithLanguage:@"en-US"];
    utterance.rate = 0.5f;
    
    [synthesizer speakUtterance:utterance];
}
