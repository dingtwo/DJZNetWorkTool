//
//  DJZNetWorkTool.h
//  WeiXin
//
//  Created by 丁建忠 on 16/2/25.
//  Copyright © 2016年 丁建忠. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AFNetworking.h"

typedef void(^ProgressBlock)(NSProgress *progress);
typedef void(^SuccessBlock)(id result);
typedef void(^FailureBlcok)(NSError *error);

//返回值类型
typedef NS_ENUM(NSUInteger, ResponseType) {
    ResponseTypeDATA,
    ResponseTypeJSON,
    ResponseTypeXML,
};

//body体的类型
typedef NS_ENUM(NSUInteger, BodyType) {
    BodyTypeJSONString,
    BodyTypeNormal,
};



@interface DJZNetWorkTool : NSObject
@property (nonatomic, assign) ResponseType currentType;

/**
 *  GET请求
 *
 *  @param url          url
 *  @param parameter    参数
 *  @param header       请求头
 *  @param responseType 返回值类型
 *  @param progress     进度
 *  @param success      成功
 *  @param failure      失败
 */
+ (void)getWithURL:(NSString *)url parameter:(NSDictionary *)parameter httpHeader:(NSDictionary<NSString *, NSString *> *)header responseType:(ResponseType)responseType progress:(ProgressBlock)progress success:(SuccessBlock)success failure:(FailureBlcok)failure;


/**
 *  post请求
 *
 *  @param url          url
 *  @param body         body
 *  @param bodyType     body类型
 *  @param header       请求头
 *  @param responseType 返回值类型
 *  @param progress     进度
 *  @param success      成功
 *  @param failure      失败
 */
+ (void)postWithURL:(NSString *)url body:(id)body bodyType:(BodyType)bodyType httpHeader:(NSDictionary<NSString *, NSString *> *)header responseType:(ResponseType)responseType progress:(ProgressBlock)progress success:(SuccessBlock)success failure:(FailureBlcok)failure;

@end













