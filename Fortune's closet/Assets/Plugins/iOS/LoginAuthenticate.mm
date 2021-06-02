//
//  LoginAuthenticate.mm
//  Unity-iPhone
//
//  Created by 한호빈 on 2018. 3. 9..
//  Finished by 한호빈 on 2018. 3. 12..
//
#import <GameKit/GameKit.h>
#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>
extern "C"{
    void ttsSpeak(const char* code, const char* text){
        AVSpeechSynthesizer * synthesizer = [[AVSpeechSynthesizer alloc]init];
        AVSpeechUtterance * utterance = [[AVSpeechUtterance alloc]initWithString:[NSString stringWithUTF8String:text]];
        utterance.voice = [AVSpeechSynthesisVoice voiceWithLanguage:[NSString stringWithUTF8String:code]];
        utterance.rate = 0.5f;
        
        [synthesizer speakUtterance:utterance];
    }
    void _Authenticate(){
        NSLog(@"function:authenticate!!");
        __weak GKLocalPlayer *localPlayer = [GKLocalPlayer localPlayer];
        localPlayer.authenticateHandler = ^(UIViewController *viewController, NSError *error)
        {
            if(viewController)
            {
                [[[UIApplication sharedApplication] keyWindow].rootViewController presentViewController:viewController animated:YES completion:nil];
            }
            else if(localPlayer.isAuthenticated == YES)
            {
                [localPlayer generateIdentityVerificationSignatureWithCompletionHandler:^(NSURL *publicKeyUrl, NSData *signature, NSData *salt, uint64_t timestamp, NSError *error) {
                    
                    if(error != nil)
                    {
                        UnitySendMessage("LoginManager","XCodeToError",[error.localizedDescription UTF8String]);
                        return; //some sort of error, can't authenticate right now
                    }
                    
                    //Create JSON data!!
                    NSDictionary *data = [NSDictionary
                                          dictionaryWithObjectsAndKeys:
                                          publicKeyUrl.absoluteString, @"publicKeyUrl",
                                          [signature base64EncodedStringWithOptions:0], @"signature",
                                          [salt base64EncodedStringWithOptions:0], @"salt",
                                          [NSString stringWithFormat:@"%llu", timestamp], @"timestamp",
                                          localPlayer.playerID, @"playerId",
                                          localPlayer.displayName, @"displayName",
                                          [[NSBundle mainBundle] bundleIdentifier], @"bundleId",
                                          nil];
                    NSData *jsonData = [NSJSONSerialization dataWithJSONObject:data options:NSJSONWritingPrettyPrinted error:&error];//NSDictionary to NSData(JSON)
                    if( !jsonData){
                        UnitySendMessage("LoginManager","XCodeToError",[error.localizedDescription UTF8String]);
                    }else{
                        // TODO : send data to Server or Unity
                        NSString *jsonString = [[NSString alloc] initWithData:jsonData encoding:NSUTF8StringEncoding]; //NSData(JSON) to NSString
                        UnitySendMessage("LoginManager","XCodeToServer",[jsonString UTF8String]);//NSString to const char* and send it to unity
                    }
                }];
                
            }
            else
            {
                UnitySendMessage("LoginManager","XCodeToError",[@"game center disabled" UTF8String]);
            }
        };
    }
}


