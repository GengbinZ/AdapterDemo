//
//  Model.h
//  AdapterDemo
//
//  Created by James on 2017/12/9.
//  Copyright © 2017年 TZ. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface Model : NSObject
@property (nonatomic, strong) UIColor *smallViewColor; /**< 颜色 */
@property (nonatomic, copy) NSString *userName; /**< 用户名 */
@property (nonatomic, copy) NSString *password; /**< 密码 */
@end
