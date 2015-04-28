//
//  RKDropdownAlert.h
//  SlingshotDropdownAlert
//
//  Created by Richard Kim on 8/26/14.
//  Copyright (c) 2014 Richard Kim. All rights reserved.
//

/*
 
 Copyright (c) 2014 Choong-Won Richard Kim <cwrichardkim@gmail.com>
 
 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is furnished
 to do so, subject to the following conditions:
 
 The above copyright notice and this permission notice shall be included in all
 copies or substantial portions of the Software.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
 
 */

#import <UIKit/UIKit.h>
@class RKDropdownAlert;
extern NSString *const RKDropdownAlertDismissAllNotification;

@protocol RKDropdownAlertDelegate <NSObject>
-(BOOL)dropdownAlertWasTapped:(RKDropdownAlert*)alert;
-(BOOL)dropdownAlertWasDismissed;
@end

@interface RKDropdownAlert : UIButton


//%%% Additions: title, message, time, background color, text color

+(void)show;
+(void)title:(NSString*)title;
+(void)title:(NSString*)title time:(NSInteger)seconds;
+(void)title:(NSString*)title backgroundColor:(UIColor*)backgroundColor textColor:(UIColor*)textColor;
+(void)title:(NSString*)title backgroundColor:(UIColor*)backgroundColor textColor:(UIColor*)textColor time:(NSInteger)seconds;

+(void)title:(NSString*)title message:(NSString*)message;
+(void)title:(NSString*)title message:(NSString*)message time:(NSInteger)seconds;
+(void)title:(NSString*)title message:(NSString*)message backgroundColor:(UIColor*)backgroundColor textColor:(UIColor*)textColor;
+(void)title:(NSString*)title message:(NSString*)message backgroundColor:(UIColor*)backgroundColor textColor:(UIColor*)textColor time:(NSInteger)seconds;

+(void)showWithDelegate:(id<RKDropdownAlertDelegate>)delegate;
+(void)title:(NSString*)title delegate:(id<RKDropdownAlertDelegate>)delegate;
+(void)title:(NSString*)title time:(NSInteger)seconds delegate:(id<RKDropdownAlertDelegate>)delegate;
+(void)title:(NSString*)title backgroundColor:(UIColor*)backgroundColor textColor:(UIColor*)textColor delegate:(id<RKDropdownAlertDelegate>)delegate;
+(void)title:(NSString*)title backgroundColor:(UIColor*)backgroundColor textColor:(UIColor*)textColor time:(NSInteger)seconds delegate:(id<RKDropdownAlertDelegate>)delegate;

+(void)title:(NSString*)title message:(NSString*)message delegate:(id<RKDropdownAlertDelegate>)delegate;
+(void)title:(NSString*)title message:(NSString*)message time:(NSInteger)seconds delegate:(id<RKDropdownAlertDelegate>)delegate;
+(void)title:(NSString*)title message:(NSString*)message backgroundColor:(UIColor*)backgroundColor textColor:(UIColor*)textColor delegate:(id<RKDropdownAlertDelegate>)delegate;
+(void)title:(NSString*)title message:(NSString*)message backgroundColor:(UIColor*)backgroundColor textColor:(UIColor*)textColor time:(NSInteger)seconds delegate:(id<RKDropdownAlertDelegate>)delegate;

+(void)dismissAllAlert;

@property UIColor *defaultViewColor;
@property UIColor *defaultTextColor;
@property BOOL isShowing;
@property id<RKDropdownAlertDelegate> delegate;

-(void)title:(NSString*)title message:(NSString*)message backgroundColor:(UIColor*)backgroundColor textColor:(UIColor*)textColor time:(NSInteger)seconds;

@end
