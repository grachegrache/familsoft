//
//  sttHelper.m
//  ttsobjc
//
//  Created by MacTouch on 2017. 7. 20..
//  Copyright © 2017년 MacTouch. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ProductName-Swift.h"
#import "sttHelper.h"
SttHelper *sttHelper;

void sttInit(const char* text){
    if(sttHelper == nil){
        sttHelper = [SttHelper new];
        [sttHelper initializeWithStr:[[NSString alloc] initWithUTF8String:text]];
    }
}
void sttRec(){
    [sttHelper rec];
}
void sttSoundBack(){
    [sttHelper soundBack];
}
void sttDestroy(){
    [sttHelper destroy];
}
void UnitySend(const char* obj, const char* method, const char* msg){
    UnitySendMessage(obj, method, msg);
}
