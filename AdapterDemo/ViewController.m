//
//  ViewController.m
//  AdapterDemo
//
//  Created by James on 2017/12/9.
//  Copyright © 2017年 TZ. All rights reserved.
//  view  数据

#import "ViewController.h"
#import "ColorView.h"
#import "NewModel.h"
#import "NewModelAdapter.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    ColorView *colorView = [[ColorView alloc] initWithFrame:self.view.bounds];
    
    // 赋值模型
    NewModel *model = [[NewModel alloc] init];
    model.smallViewColor = @"blue";
    model.userName = @"张三";
    model.password = @"1-1-1-1";
    
    NewModelAdapter *newModelAdapter = [[NewModelAdapter alloc] initWithModel:model];
    [colorView loadModel:newModelAdapter];

    // 添加
    [self.view addSubview:colorView];
}


@end
