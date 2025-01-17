//
//  UIBarButtonItem+addtion.h
//  zw_shop
//
//  Created by Vincent on 15/5/7.
//  Copyright (c) 2015年 zw. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIBarButtonItem (addtion)


/**
 *  快速创建一个item对象（内部包装一个按钮UIButton）
 *
 *  @param image           按钮图片
 *  @param higlightedImage 按钮高亮图片
 *  @param target          按钮的监听器
 *  @param action          按钮的监听器的回调方法
 *
 *  @return 创建好的item对象
 */
+ (UIBarButtonItem *)itemWithImage:(NSString *)image higlightedImage:(NSString *)higlightedImage target:(id)target action:(SEL)action;




@end
