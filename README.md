SlingshotDropdownAlert
======================

an extremely simple (and customizeable) alert alternative based on Facebook's app Slingshot


Demo:

![alt tag](http://i.imgur.com/i5RRpjX.gif?1)

Customizeable: duration, color, size, text, etc

##Code


copy the following into your parent controller:
``` objc
static int HEIGHT = 80; //height of the alert view
static float ANIMATION_TIME = .3; //time it takes for the animation to complete in seconds
```

``` objc
-(void)showAlertWithTitle:(NSString *)title andMessage:(NSString*)message andColor:(UIColor *)color forTime:(float)seconds
{
    UIButton *alertView = [[UIButton alloc]initWithFrame:CGRectMake(0, -HEIGHT, self.view.frame.size.width, HEIGHT)];
    [self.view addSubview:alertView];
    alertView.backgroundColor = color;
    
    [self setTextForView:alertView withTitle:title andMessage:message];
    
    [alertView addTarget:nil action:@selector(hideView:) forControlEvents:UIControlEventTouchUpInside];
    
    [UIView animateWithDuration:ANIMATION_TIME animations:^{
        alertView.frame = CGRectMake(0, 0, self.view.frame.size.width, HEIGHT);
    }];
    
    [self performSelector:@selector(hideView:) withObject:alertView afterDelay:seconds+ANIMATION_TIME];
}

-(void)setTextForView:(UIButton *)alertView withTitle:(NSString *)title andMessage:(NSString*)message
{
    UILabel *titleLabel = [[UILabel alloc]initWithFrame:CGRectMake(10, 18, alertView.frame.size.width-20, 30)];
    [titleLabel setText:title];
    [titleLabel setFont:[UIFont fontWithName:@"Arial-BoldMT" size:14]];
    titleLabel.textColor = [UIColor whiteColor];
    titleLabel.textAlignment = NSTextAlignmentCenter;
    [alertView addSubview:titleLabel];
    
    UILabel *messageLabel = [[UILabel alloc]initWithFrame:CGRectMake(10, 25, alertView.frame.size.width-20, 60)];
    [messageLabel setText:message];
    messageLabel.textColor = [UIColor whiteColor];
    messageLabel.font = [messageLabel.font fontWithSize:14];
    messageLabel.lineBreakMode = NSLineBreakByWordWrapping;
    messageLabel.numberOfLines = 2; // 2 lines ; 0 - dynamical number of lines
    messageLabel.textAlignment = NSTextAlignmentCenter;
    [alertView addSubview:messageLabel];
}

-(void)hideView:(UIButton *)alertView
{
    if (alertView) {
        [UIView animateWithDuration:ANIMATION_TIME animations:^{
            alertView.frame = CGRectMake(0, -HEIGHT, self.view.frame.size.width, HEIGHT);
        }];
        [self performSelector:@selector(removeView:) withObject:alertView afterDelay:ANIMATION_TIME];
    }
}

-(void)removeView:(UIButton *)alertView
{
    if (alertView){
        [alertView removeFromSuperview];
    }
}
```

start notification animation with
``` objc
-(void)showAlertWithTitle:(NSString *)text andMessage:(NSString*)message andColor:(UIColor *)color forTime:(float)seconds;
```
eg:
``` objc
[self showAlertWithTitle:@"title" andMessage:@"message testing test asdf asd as as a" andColor:[UIColor colorWithRed:0.98 green:0.65 blue:0.25 alpha:1] forTime:1];
```
click to close:

![alt tag](http://i.imgur.com/GaVlsT0.gif?1)
