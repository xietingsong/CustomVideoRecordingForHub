//
//  CVRUtilsAttributedLabel.h
//  CustomVideoRecording
//
//  Created by xiets on 14-2-19.
//  Copyright (c) 2014年 xietingsong. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreText/CoreText.h>
#import <QuartzCore/QuartzCore.h>

@interface CVRUtilsAttributedLabel : UILabel{
    NSMutableAttributedString          *_attString;
}


// 设置某段字的颜色
- (void)setColor:(UIColor *)color fromIndex:(NSInteger)location length:(NSInteger)length;

// 设置某段字的字体
- (void)setFont:(UIFont *)font fromIndex:(NSInteger)location length:(NSInteger)length;

// 设置某段字的风格
- (void)setStyle:(CTUnderlineStyle)style fromIndex:(NSInteger)location length:(NSInteger)length;

@end
