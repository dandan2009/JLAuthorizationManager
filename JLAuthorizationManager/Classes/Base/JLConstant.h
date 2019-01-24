//
//  JLConstant.h
//  JLAuthorizationManager<https://github.com/123sunxiaolin/JLAuthorizationManager.git>
//
//  <Wechat Public:iOSDevSkills>
//  Created by Jacklin on 2019/1/17.
//  Copyright © 2019年 com.jack.lin. All rights reserved.
//
//  This source code is licensed under the MIT-style license found in the
//  LICENSE file in the root directory of this source tree.
//

#ifndef JLConstant_h
#define JLConstant_h

typedef NS_ENUM(NSInteger, JLAuthorizationType) {
    /**
     *  相册/PhotoLibrary
     */
    JLAuthorizationTypePhotoLibrary = 0,
    /**
     *  网络/Cellular Network
     */
    JLAuthorizationTypeNetWork,
    /**
     *  相机/Camera
     */
    JLAuthorizationTypeCamera,
    /**
     *  麦克风/Microphone
     */
    JLAuthorizationTypeMicrophone,
    /**
     *  通讯录/AddressBook
     */
    JLAuthorizationTypeAddressBook,
    /**
     *  日历/Calendar
     */
    JLAuthorizationTypeCalendar,
    /**
     *  提醒事项/Reminder
     */
    JLAuthorizationTypeReminder,
    /**
     *  通知/Notification
     */
    JLAuthorizationTypeNotification,
    /**
     *  一直请求定位权限/AlwaysAuthorization
     */
    JLAuthorizationTypeMapAlways,
    /**
     *  使用时请求定位权限/WhenInUseAuthorization
     */
    JLAuthorizationTypeMapWhenInUse,
    /**
     *  媒体资料库/AppleMusic
     */
    JLAuthorizationTypeAppleMusic,
    /**
     *  语音识别/SpeechRecognizer
     */
    JLAuthorizationTypeSpeechRecognizer,
    /**
     *  Siri(must in iOS10 or later)
     */
    JLAuthorizationTypeSiri,
    /**
     *  蓝牙共享/Bluetooth
     */
    JLAuthorizationTypeBluetooth,
    /**
     *  推特/Twitter
     */
    JLAuthorizationTypeTwitter,
    /**
     *  脸书/Facebook
     */
    JLAuthorizationTypeFacebook,
    /**
     *  新浪微博/SinaWeibo
     */
    JLAuthorizationTypeSinaWeibo,
    /**
     *  腾讯微博/TencentWeibo
     */
    JLAuthorizationTypeTencentWeibo,
    
};

/**
 AuthorizedStatus
 */
typedef NS_ENUM(NSInteger, JLAuthorizationStatus) {
    JLAuthorizationStatusNotDetermined = 0,
    JLAuthorizationStatusAuthorized,
    JLAuthorizationStatusUnAuthorized,
    JLAuthorizationStatusLocationDisabled,
};

#pragma mark - Constant Key



#endif /* JLConstant_h */