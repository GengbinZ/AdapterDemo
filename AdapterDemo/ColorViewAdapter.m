//
//  ColorViewAdapter.m
//  AdapterDemo
//
//  Created by James on 2017/12/9.
//  Copyright © 2017年 TZ. All rights reserved.
//

#import "ColorViewAdapter.h"

@implementation ColorViewAdapter

- (instancetype)initWithModel:(id)model {
    self = [super init];
    if (self) {
        self.model = model;
    }
    return self;
}

- (UIColor *)smallViewColor {
    return nil;
}

- (NSString *)userName {
    return nil;
}

- (NSString *)password {
    return nil;
}

@end
