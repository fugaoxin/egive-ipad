//
//  EGAgreeStatementViewController.h
//  Egive-ipad
//
//  Created by kevin on 15/12/23.
//  Copyright © 2015年 Sino. All rights reserved.
//

#import "EGBaseViewController.h"

@interface EGAgreeStatementViewController : EGBaseViewController

@property (copy,nonatomic)void(^agreeStatement)(EGAgreeStatementViewController *vc);//agreeStatement声明

@end
