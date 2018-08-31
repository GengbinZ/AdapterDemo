//
//  ColorView.h
//  AdapterDemo
//
//  Created by James on 2017/12/9.
//  Copyright © 2017年 TZ. All rights reserved.
//  1.目标    2.适配者   3.适配器

#import <UIKit/UIKit.h>
#import "Model.h"
#import "TargeyProtocol.h"

@interface ColorView : UIView

// 加载数据, 已经实现了TargeyProtocol里面的要求
- (void)loadModel:(id <TargeyProtocol>)model;

@end
