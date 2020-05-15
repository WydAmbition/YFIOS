//
//  YFAuthorityCenter.h
//  jsyf_user
//
//  Created by wangyadong on 2019/9/26.
//  Copyright © 2019 YF. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface YFAuthorityCenter : NSObject
///检测麦克风状态
+(void)authorityDetectionMicrophoneState:(void(^)(BOOL isAvalible))authorizedBlock;
///检测相册访问权限
+(void)authorityDetectionPhotoState:(void(^)(BOOL isAvalible))authorizedBlock;

///检测相机访问权限
+(void)authorityDetectionCameraState:(void(^)(BOOL isAvalible))authorizedBlock;

///检测通知权限
+(void)authorityDetectionNotificationState:(void(^)(BOOL isAvalible))authorizedBlock;
///检测定位是否可用
+(void)authorityDetectionLocationState:(void(^)(BOOL isAvalible))authorizedBlock;


@end

NS_ASSUME_NONNULL_END
