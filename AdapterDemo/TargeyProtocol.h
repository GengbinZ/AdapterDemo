//
//  TargeyProtocol.h
//  AdapterDemo
//
//  Created by James on 2017/12/9.
//  Copyright © 2017年 TZ. All rights reserved.
//

#import <Foundation/Foundation.h>

// 目标接口
@protocol TargeyProtocol <NSObject>

- (UIColor *)smallViewColor; /**< 颜色 */

- (NSString *)userName; /**< 用户名 */

- (NSString *)password; /**< 密码 */

@end
