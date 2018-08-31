//
//  NewModelAdapter.m
//  AdapterDemo
//
//  Created by James on 2017/12/9.
//  Copyright © 2017年 TZ. All rights reserved.
//

#import "NewModelAdapter.h"
#import "NewModel.h"

@implementation NewModelAdapter

- (UIColor *)smallViewColor {
    NewModel *model = self.model;
    
    // 如果传入的数据, 是二进制的. 这边就需要判断
    if ([model.smallViewColor isEqualToString:@"blue"]) {
        return [UIColor  blueColor];
    } else {
        return [UIColor redColor];
    }
}

- (NSString *)userName {
    NewModel *model = self.model;
    return model.userName;
}

- (NSString *)password {
    NewModel *model = self.model;
    return model.password;
}


@end
