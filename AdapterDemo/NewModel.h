//
//  NewModel.h
//  AdapterDemo
//
//  Created by James on 2017/12/9.
//  Copyright © 2017年 TZ. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NewModel : NSObject
@property (nonatomic, strong) NSString *smallViewColor; /**< 颜色 */
@property (nonatomic, copy) NSString *userName; /**< 用户名 */
@property (nonatomic, copy) NSString *password; /**< 密码 */
@end
