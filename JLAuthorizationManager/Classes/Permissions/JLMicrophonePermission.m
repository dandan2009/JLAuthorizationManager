//
//  JLMicrophonePermission.m
//  JLAuthorizationDemo
//
//  Created by Jacklin on 2019/1/24.
//  Copyright © 2019年 com.jack.lin. All rights reserved.
//

@import AVFoundation;
#import "JLMicrophonePermission.h"

@implementation JLMicrophonePermission

- (JLAuthorizationType)type {
    return JLAuthorizationTypeMicrophone;
}

- (JLAuthorizationStatus)authorizationStatus {
    AVAuthorizationStatus authStatus = [AVCaptureDevice authorizationStatusForMediaType: AVMediaTypeAudio];
    switch (authStatus) {
        case AVAuthorizationStatusAuthorized:
            return JLAuthorizationStatusAuthorized;
            break;
        case AVAuthorizationStatusRestricted:
        case AVAuthorizationStatusDenied:
            return JLAuthorizationStatusUnAuthorized;
            break;
        case AVAuthorizationStatusNotDetermined:
            return JLAuthorizationStatusNotDetermined;
            break;
    }
}

- (BOOL)hasSpecificPermissionKeyFromInfoPlist {
    return [[NSBundle mainBundle] objectForInfoDictionaryKey:self.permissionDescriptionKey];
}

- (void)requestAuthorizationWithCompletion:(JLAuthorizationCompletion)completion {
    NSString *desc = [NSString stringWithFormat:@"%@ not found in Info.plist.", self.permissionDescriptionKey];
    NSAssert([self hasSpecificPermissionKeyFromInfoPlist], desc);
    
    JLAuthorizationStatus status = [self authorizationStatus];
    if (status == JLAuthorizationStatusNotDetermined) {
        [AVCaptureDevice requestAccessForMediaType:AVMediaTypeAudio completionHandler:^(BOOL granted) {
            [self safeAsyncWithCompletion:^{
                if (completion) {
                    completion(granted);
                }
            }];
        }];
        
    } else {
        if (completion) {
            completion(status == JLAuthorizationStatusAuthorized);
        }
    }
}

@end
