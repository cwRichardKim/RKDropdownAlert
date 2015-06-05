//
//  ViewController.m
//  SlingshotDropdownAlert
//
//  Created by Richard Kim on 8/26/14.
//  Copyright (c) 2014 Richard Kim. All rights reserved.
//

#import "ViewController.h"
#import "RKDropdownAlert.h"

@interface ViewController () <UITextFieldDelegate>

@property (nonatomic) UITextField* titleTextField;
@property (nonatomic) UITextField* messageTextField;

@end

@implementation ViewController

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    self.view.backgroundColor = [UIColor whiteColor];

    UITapGestureRecognizer* tapGesture = [[UITapGestureRecognizer alloc] initWithTarget:self action:@selector(dismissKeyboard)];
    [self.view addGestureRecognizer:tapGesture];

    self.titleTextField = [[UITextField alloc] initWithFrame:CGRectMake(0, 0, self.view.frame.size.width * 0.7, 40)];
    self.titleTextField.center = CGPointMake(self.view.frame.size.width / 2, 120);
    self.titleTextField.placeholder = @"title";
    self.titleTextField.delegate = self;
    self.titleTextField.backgroundColor = [UIColor colorWithRed:0 green:0 blue:0 alpha:0.03];
    [self.view addSubview:self.titleTextField];

    self.messageTextField = [[UITextField alloc] initWithFrame:CGRectMake(0, 0, self.view.frame.size.width * 0.7, 40)];
    self.messageTextField.center = CGPointMake(self.view.frame.size.width / 2, 170);
    self.messageTextField.placeholder = @"message";
    self.messageTextField.delegate = self;
    self.messageTextField.backgroundColor = [UIColor colorWithRed:0 green:0 blue:0 alpha:0.03];
    [self.view addSubview:self.messageTextField];

    UIButton* alertButton = [[UIButton alloc] initWithFrame:CGRectMake(0, 0, 200, 50)];
    alertButton.center = CGPointMake(self.view.frame.size.width / 2, CGRectGetMaxY(self.messageTextField.frame) + alertButton.frame.size.height);
    [alertButton setTitle:@"show alert" forState:UIControlStateNormal];
    [alertButton setTitleColor:[UIColor colorWithRed:0.22 green:0.31 blue:0.80 alpha:1] forState:UIControlStateNormal];
    [alertButton addTarget:self action:@selector(showDemoAlert) forControlEvents:UIControlEventTouchUpInside];
    [self.view addSubview:alertButton];
}

- (void)showDemoAlert {
    //%%% quick and dirty: calls all default values
    NSString* title = self.titleTextField.text;
    NSString* message = self.messageTextField.text;
    if (title.length == 0 && message.length == 0) {
        [RKDropdownAlert show];
    } else {
        [RKDropdownAlert title:title message:message backgroundColor:nil textColor:nil time:5];
    }

    // other examples:
    // [RKDropdownAlert title:@"Hello World"];
    // [RKDropdownAlert title:@"Hello World" message:@"Tons better than UIAlertView!" time:1];
    // %%% etc. check the .h to see all the different ways you can call this function
}

-(UIStatusBarStyle)preferredStatusBarStyle{
    return UIStatusBarStyleLightContent;
}

- (void)dismissKeyboard {
  [self.view endEditing:YES];
}

@end
