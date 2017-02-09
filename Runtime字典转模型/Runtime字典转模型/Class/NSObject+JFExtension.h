//
//  NSObject+JFExtension.h
//  Runtime字典转模型
//
//  Created by JiangfanZhan on 2017/2/8.
//  Copyright © 2017年 JiangfanZhan. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol ModelDelegate <NSObject>

@optional

// 提供一个协议，只要准备这个协议的类，都能把数组中的字典转模型
+ (NSDictionary *)arrayContainModelClass;

@end

@interface NSObject (JFExtension)

+ (instancetype)modelWithDic:(NSDictionary *)dic;

@end
