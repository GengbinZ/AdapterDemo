//
//  ColorViewAdapter.h
//  AdapterDemo
//
//  Created by James on 2017/12/9.
//  Copyright © 2017年 TZ. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TargeyProtocol.h"

@interface ColorViewAdapter : NSObject <TargeyProtocol>

@property (nonatomic, strong) id model; /**< 输入的模型数据 */

- (instancetype)initWithModel:(id)model; /**< 初始化的一个方法 */

@end
