//
//  BaseResponse.h
//  RKServerApi-iOS
//
//  Created by caoyy on 16/7/21.
//  Copyright © 2016年 roky. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BaseResponse : NSObject

@property (assign, nonatomic) int state;
@property (strong, nonatomic) NSString* message;

@end