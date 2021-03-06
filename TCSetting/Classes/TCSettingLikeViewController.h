//
//  TCSettingLikeViewController.h
//  TCSetting
//
//  Created by 陈 胜 on 16/7/13.
//  Copyright © 2016年 陈胜. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 *  屏幕宽高
 */
#ifndef kScreenWidth
    #define kScreenWidth [UIScreen mainScreen].bounds.size.width
#endif
#ifndef kScreenHeight
    #define kScreenHeight [UIScreen mainScreen].bounds.size.height
#endif

static const CGFloat kFirstSectionHeaderHeight = 15.0f; // 第一个section header高度
static const CGFloat kOtherSectionHeaderHeight = 20.0f; // 其它section header高度
static const CGFloat kSectionFooterHeight = 0.01f;      // section footer高度

@interface TCSettingLikeViewController : UITableViewController

@end
