//
//  Status.h
//  Runtime字典转模型
//
//  Created by JiangfanZhan on 2017/2/8.
//  Copyright © 2017年 JiangfanZhan. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "NSObject+JFExtension.h"

@class User;

@interface Status : NSObject<ModelDelegate>

@property (nonatomic, strong) NSString *source;

@property (nonatomic, assign) int reposts_count;

@property (nonatomic, strong) NSArray *pic_urls;

@property (nonatomic, strong) NSString *created_at;

@property (nonatomic, assign) int attitudes_count;

@property (nonatomic, strong) NSString *idstr;

@property (nonatomic, strong) NSString *text;

@property (nonatomic, assign) int comments_count;

@property (nonatomic, strong) User *user;

//+ (instancetype)statusWithDict:(NSDictionary *)dict;

@end
