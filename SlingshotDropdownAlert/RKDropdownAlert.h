//
//  RKDropdownAlert.h
//  SlingshotDropdownAlert
//
//  Created by Richard Kim on 8/26/14.
//  Copyright (c) 2014 Richard Kim. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RKDropdownAlert : UIButton


//%%% Mandatory: title
//%%% Optional: message,

+(void)title:(NSString*)title;
+(void)title:(NSString*)title time:(NSInteger)seconds;
+(void)title:(NSString*)title backgroundColor:(UIColor*)backgroundColor textColor:(UIColor*)textColor;
+(void)title:(NSString*)title backgroundColor:(UIColor*)backgroundColor textColor:(UIColor*)textColor time:(NSInteger)seconds;

+(void)title:(NSString*)title message:(NSString*)message;
+(void)title:(NSString*)title message:(NSString*)message time:(NSInteger)seconds;
+(void)title:(NSString*)title message:(NSString*)message backgroundColor:(UIColor*)backgroundColor textColor:(UIColor*)textColor;
+(void)title:(NSString*)title message:(NSString*)message backgroundColor:(UIColor*)backgroundColor textColor:(UIColor*)textColor time:(NSInteger)seconds;




-(void)title:(NSString*)title message:(NSString*)message backgroundColor:(UIColor*)backgroundColor textColor:(UIColor*)textColor time:(NSInteger)seconds;

@end
