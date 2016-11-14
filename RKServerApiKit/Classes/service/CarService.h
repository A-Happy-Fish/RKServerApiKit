//
//  CarService.h
//  Pods
//
//  Created by Yuan ZhiJian on 2016/11/8.
//
//

#import <Foundation/Foundation.h>
#import "CarApi.h"

@interface CarService : NSObject
/**
 1.1	App数据上传
 @param ueSn
 @param UploadParam
 @param block
 @return
 */
+(NSURLSessionDataTask *)dataUpload:(UploadParam*)_UploadParam block:(void (^)(BaseResponse *_BaseResponse, NSError *error)) block;

/**
 设置服务开启状态
 @param ueSn
 @param imei
 @param serviceStatus  0:开启 1：未开启
 @param block
 @return
 */
+(NSURLSessionDataTask *)setServiceStatus:(NSString*)ueSn imei :(NSString*)imei  serviceStatus :(NSString*)serviceStatus  block:(void (^)(BaseResponse *_BaseResponse, NSError *error)) block;


/**
 1.1	获取服务开启状态
 
 @param ueSn
 @param block
 @return  GPSDetailResponse GPSDetail serviceStatus
 */
+(NSURLSessionDataTask *)getServiceStatus:(NSString*)ueSn block:(void (^)(GPSDetailResponse *_BaseResponse, NSError *error)) block;
@end
