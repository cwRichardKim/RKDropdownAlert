//
//  ViewController.m
//  SlingshotDropdownAlert
//
//  Created by Richard Kim on 8/26/14.
//  Copyright (c) 2014 Richard Kim. All rights reserved.
//

#import "ViewController.h"
#import "RKDropdownAlert.h"

@interface ViewController ()

@end

@implementation ViewController

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    self.view.backgroundColor = [UIColor blackColor];
    
    //%%% quick and dirty: calls all default values
    [RKDropdownAlert show];
    
    
    //%%% 3 examples: these steadily increase in customizeability

//    [RKDropdownAlert title:@"Hello World"];
    
//    [RKDropdownAlert title:@"Hello World" message:@"Tons better than UIAlertView!" time:1];
    
//    [RKDropdownAlert title:@"Hello World" message:@"tons better than UIAlertView" backgroundColor:[UIColor grayColor] textColor:[UIColor whiteColor] time:10];

    //%%% etc. check the .h to see all the different ways you can call this function
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender
{
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

-(UIStatusBarStyle)preferredStatusBarStyle{
    return UIStatusBarStyleLightContent;
}

@end
