//
//  ViewController.m
//  Runtime字典转模型
//
//  Created by JiangfanZhan on 2017/2/8.
//  Copyright © 2017年 JiangfanZhan. All rights reserved.
//

#import "ViewController.h"
#import "Status.h"
#import "NSObject+JFExtension.h"

@interface ViewController ()

@property (nonnull, nonatomic, strong) NSMutableArray *statuses;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    // 解析Plist文件
    [self parsePlist];
}


// 解析Plist文件
- (void)parsePlist{
    
    NSString * filePath = [[NSBundle mainBundle] pathForResource:@"status.plist" ofType:nil];
    NSDictionary *statusDic = [NSDictionary dictionaryWithContentsOfFile:filePath];
    
    // 获取字典数组
    NSArray *dicArr = statusDic[@"statuses"];
    
    _statuses = [NSMutableArray array];
    
    // 遍历字典数组
    for (NSDictionary *dic in dicArr) {
        
        Status * status = [Status modelWithDic:dic];
        [_statuses addObject:status];
    }
    
    NSLog(@"%@ %@",_statuses,[_statuses[0] user]);
}

@end
