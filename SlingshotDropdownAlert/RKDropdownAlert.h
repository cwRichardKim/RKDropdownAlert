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

/*!
 Notification posted when the alert is dismissed.
 */
extern NSString *const RKDropdownAlertDismissAllNotification;

/*!
 The dropdown alert delegate.
 */
@protocol RKDropdownAlertDelegate <NSObject>

/*!
 Fires when the alert was tapped by the user.
 @param The instance of <RKDropdownAlert> that was tapped.
 */
-(BOOL)dropdownAlertWasTapped:(RKDropdownAlert*)alert;

/*!
 Fires when the alert was dismissed.
 */
-(BOOL)dropdownAlertWasDismissed;

@end

/*!
 The dropdown alert.
 */
@interface RKDropdownAlert : UIButton


//%%% Additions: title, message, time, background color, text color

/*!
 Shows the default alert.
 You should extend RKDropdownAlert to set the appropriate params like title, message, color, etc.
 */
+(void)show;

/*!
 Shows an alert with the specified title.
 @param title The title to show.
 */
+(void)title:(NSString*)title;

/*!
 Shows an alert with the specified title for a specific duration.
 @param title The title to show.
 @param seconds Number of seconds that the alert should remain visible.
 */
+(void)title:(NSString*)title time:(NSInteger)seconds;

/*!
 Shows an alert with the specified title and colors.
 @param title The title to show.
 @param backgroundColor Background color.
 @param textColor Text color.
 */
+(void)title:(NSString*)title backgroundColor:(UIColor*)backgroundColor textColor:(UIColor*)textColor;

/*!
 Shows an alert with the specified title and colors for a specific duration.
 @param title The title to show.
 @param backgroundColor Background color.
 @param textColor Text color.
 @param seconds Number of seconds that the alert should remain visible.
 */
+(void)title:(NSString*)title backgroundColor:(UIColor*)backgroundColor textColor:(UIColor*)textColor time:(NSInteger)seconds;


/*!
 Shows an alert with the specified title and message.
 @param title The title to show.
 @param message The message to show.
 */
+(void)title:(NSString*)title message:(NSString*)message;

/*!
 Shows an alert with the specified title and message for a specific duration.
 @param title The title to show.
 @param message The message to show.
 @param seconds Number of seconds that the alert should remain visible.
 */
+(void)title:(NSString*)title message:(NSString*)message time:(NSInteger)seconds;

/*!
 Shows an alert with the specified title, message, and colors.
 @param title The title to show.
 @param message The message to show.
 @param backgroundColor Background color.
 @param textColor Text color.
 */
+(void)title:(NSString*)title message:(NSString*)message backgroundColor:(UIColor*)backgroundColor textColor:(UIColor*)textColor;

/*!
 Shows an alert with the specified title, message, and colors for a specific duration.
 @param title The title to show.
 @param message The message to show.
 @param backgroundColor Background color.
 @param textColor Text color.
 @param seconds Number of seconds that the alert should remain visible.
 */
+(void)title:(NSString*)title message:(NSString*)message backgroundColor:(UIColor*)backgroundColor textColor:(UIColor*)textColor time:(NSInteger)seconds;


/*!
 Shows the default alert with a delegate.
 You should extend RKDropdownAlert to set the appropriate params like title, message, color, etc.
 @param delegate An instance implementing <RKDropdownAlertDelegate>
 */
+(void)showWithDelegate:(id<RKDropdownAlertDelegate>)delegate;

/*!
 Shows an alert with the specified title.
 @param title The title to show.
 @param delegate An instance implementing <RKDropdownAlertDelegate>
 */
+(void)title:(NSString*)title delegate:(id<RKDropdownAlertDelegate>)delegate;

/*!
 Shows an alert with the specified title for a specific duration.
 @param title The title to show.
 @param seconds Number of seconds that the alert should remain visible.
 @param delegate An instance implementing <RKDropdownAlertDelegate>
 */
+(void)title:(NSString*)title time:(NSInteger)seconds delegate:(id<RKDropdownAlertDelegate>)delegate;

/*!
 Shows an alert with the specified title and colors.
 @param title The title to show.
 @param backgroundColor Background color.
 @param textColor Text color.
 @param delegate An instance implementing <RKDropdownAlertDelegate>
 */
+(void)title:(NSString*)title backgroundColor:(UIColor*)backgroundColor textColor:(UIColor*)textColor delegate:(id<RKDropdownAlertDelegate>)delegate;

/*!
 Shows an alert with the specified title and colors for a specific duration.
 @param title The title to show.
 @param backgroundColor Background color.
 @param textColor Text color.
 @param seconds Number of seconds that the alert should remain visible.
 @param delegate An instance implementing <RKDropdownAlertDelegate>
 */
+(void)title:(NSString*)title backgroundColor:(UIColor*)backgroundColor textColor:(UIColor*)textColor time:(NSInteger)seconds delegate:(id<RKDropdownAlertDelegate>)delegate;


/*!
 Shows an alert with the specified title and message.
 @param title The title to show.
 @param message The message to show.
 @param delegate An instance implementing <RKDropdownAlertDelegate>
 */
+(void)title:(NSString*)title message:(NSString*)message delegate:(id<RKDropdownAlertDelegate>)delegate;

/*!
 Shows an alert with the specified title and message for a specific duration.
 @param title The title to show.
 @param message The message to show.
 @param seconds Number of seconds that the alert should remain visible.
 @param delegate An instance implementing <RKDropdownAlertDelegate>
 */
+(void)title:(NSString*)title message:(NSString*)message time:(NSInteger)seconds delegate:(id<RKDropdownAlertDelegate>)delegate;

/*!
 Shows an alert with the specified title, message, and colors.
 @param title The title to show.
 @param message The message to show.
 @param backgroundColor Background color.
 @param textColor Text color.
 @param delegate An instance implementing <RKDropdownAlertDelegate>
 */
+(void)title:(NSString*)title message:(NSString*)message backgroundColor:(UIColor*)backgroundColor textColor:(UIColor*)textColor delegate:(id<RKDropdownAlertDelegate>)delegate;

/*!
 Shows an alert with the specified title, message, and colors for a specific duration.
 @param title The title to show.
 @param message The message to show.
 @param backgroundColor Background color.
 @param textColor Text color.
 @param seconds Number of seconds that the alert should remain visible.
 @param delegate An instance implementing <RKDropdownAlertDelegate>
 */
+(void)title:(NSString*)title message:(NSString*)message backgroundColor:(UIColor*)backgroundColor textColor:(UIColor*)textColor time:(NSInteger)seconds delegate:(id<RKDropdownAlertDelegate>)delegate;

/*!
 Dismisses the displayed alert.
 */
+(void)dismissAllAlert;

/*!
 Default background color.
 */
@property UIColor *defaultViewColor;

/*!
 Default text color.
 */
@property UIColor *defaultTextColor;

/*!
 Returns TRUE if the alert is currently displayed to the user.
 */
@property BOOL isShowing;

/*!
 The alert delegate.
 */
@property id<RKDropdownAlertDelegate> delegate;


/*!
 Shows the instantiated alert with the specified title, message, and colors for a specific duration.
 @param title The title to show.
 @param message The message to show.
 @param backgroundColor Background color.
 @param textColor Text color.
 @param seconds Number of seconds that the alert should remain visible.
 */
-(void)title:(NSString*)title message:(NSString*)message backgroundColor:(UIColor*)backgroundColor textColor:(UIColor*)textColor time:(NSInteger)seconds;

@end
