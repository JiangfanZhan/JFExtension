//
//  User.h
//  Runtime字典转模型
//
//  Created by JiangfanZhan on 2017/2/8.
//  Copyright © 2017年 JiangfanZhan. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface User : NSObject

@property (nonatomic, strong) NSString *profile_image_url;

@property (nonatomic, assign) BOOL vip;

@property (nonatomic, strong) NSString *name;

@property (nonatomic, assign) int mbrank;

@property (nonatomic, assign) int mbtype;

@end
