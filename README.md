RKDropdownAlert
======================

an extremely simple (and customizeable) alert alternative based on Facebook's app Slingshot, and inspiration from SVProgressHUD (yes, it's just as easy to use as SV)

##Updates, Questions, and Requests
[twitter](https://twitter.com/cwRichardKim) <--- I am a very light twitterer, so I wont spam you

__Article comparing UIAlertView, SVProgressHUD and RKropdownAlert__

https://medium.com/@cwRichardKim/devux-uialertview-alternatives-3a78ab64cbf8

##Pod
WAIT! Don't use pods if you want to customize or use the quick and easy [RKDropdownAlert show]

	pod 'RKDropdownAlert'

##Demo:
``` objc
[RKDropdownAlert title:@"Hello World" message:@"Tons better than UIAlertView!"];
```
![alt tag](http://i.imgur.com/tE5p9L0.gif?1)

##In Action:
![first](http://i.imgur.com/d6voW3W.gif)  

![second](http://i.imgur.com/OlYystx.gif)

##Easy Default Call
``` objc
[RKDropdownAlert show];
```
Set the default text, color, size, font, etc so that when you call "show" it pulls up an easy default call

![easy](http://i.imgur.com/M0cH5DF.gif?1)

##Setup


First, download the file, or create a branch of the repo. Copy the following into your parent controller:
``` objc
#import "RKDropdownAlert.h"
```

You will probably want to customize the default call ([RKDropdownAlert show]), as well as other features such as color, the method called when the user taps the view, etc.  Look for
``` objc
//%%% CUSTOMIZE
```
tags in the RKDropdownAlert.m for methods that you should customize.


##Calling the Alert

Use the following variations of title, message, backgroundColor, textColor, and time
``` objc
+(void)show;
+(void)title:(NSString*)title;
+(void)title:(NSString*)title time:(NSInteger)seconds;
+(void)title:(NSString*)title backgroundColor:(UIColor*)backgroundColor textColor:(UIColor*)textColor;
+(void)title:(NSString*)title backgroundColor:(UIColor*)backgroundColor textColor:(UIColor*)textColor time:(NSInteger)seconds;

+(void)title:(NSString*)title message:(NSString*)message;
+(void)title:(NSString*)title message:(NSString*)message time:(NSInteger)seconds;
+(void)title:(NSString*)title message:(NSString*)message backgroundColor:(UIColor*)backgroundColor textColor:(UIColor*)textColor;
+(void)title:(NSString*)title message:(NSString*)message backgroundColor:(UIColor*)backgroundColor textColor:(UIColor*)textColor time:(NSInteger)seconds;
```

For example:
``` objc
[RKDropdownAlert show];

[RKDropdownAlert title:@"this is a title" message:@"this is a one line message"];

[RKDropdownAlert title:@"Hello World" message:@"tons better than UIAlertView" backgroundColor:[UIColor grayColor] textColor:[UIColor whiteColor] time:10];
```

##Touch Up Inside Method
Write your own method for when the user touches the view (default is hide the view)

``` objc
@interface WhateverClassYouLike : NSObject <RKDropdownAlertDelegate>
@end

@implementation WhateverClassYouLike

-(BOOL)dropdownAlertWasTapped:(RKDropdownAlert*)alert {
	// Handle the tap, then return whether or not the alert should hide.
	return true;
}

@end

```

![alt tag](http://i.imgur.com/GaVlsT0.gif?1)

### Areas for Future Improvement / Involvement
* Improve architecture to maintain single line deployment while also allowing for attribute customization without changing physical code
* Ability to change layout of text without changing physical code
* Singleton pattern
* More rigorous case testing for responsive design (making sure different text lengths still look good)
