//
//  EbikeStore.h
//  Pods
//
//  Created by caoyy on 17/7/31.
//
//

#import <Foundation/Foundation.h>

@interface EbikeStore : NSObject

@property (assign, nonatomic) int id;
@property (strong, nonatomic) NSString* name;
@property (strong, nonatomic) NSString* contact;
@property (strong, nonatomic) NSString* address;
@property (assign, nonatomic) double lat;
@property (assign, nonatomic) double lon;
@property (strong, nonatomic) NSString* brands;
//1:骑士之家 2：美团 3：饿了么
@property (assign, nonatomic) int type;
@property (strong, nonatomic) NSString* status;
@property (strong, nonatomic) NSString* userId;
@property (assign, nonatomic) int rentCount;
@property (assign, nonatomic) int totalRentCount;
@property (strong, nonatomic) NSString* linkman;

@end