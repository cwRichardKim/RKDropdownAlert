//
//  RKDropviewAlertViewController.h
//  SlingshotDropdownAlert
//
//  Created by Richard Kim on 7/17/14.
//  Copyright (c) 2014 Richard Kim. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RKDropviewAlertViewController : UIViewController

-(void)showAlertWithTitle:(NSString *)text andMessage:(NSString*)message andColor:(UIColor *)color forTime:(float)seconds;

@end
