RKDropdownAlert
======================

an extremely simple (and customizeable) alert alternative based on Facebook's app Slingshot

##Updates, Questions, and Requests
[twitter](https://twitter.com/cwRichardKim) <--- I am a very light twitterer, so I wont spam you

##Demo:
``` objc
[RKDropdownAlert title:@"title"message:@"message testing test asdf asd as as a"];
```
![alt tag](http://i.imgur.com/i5RRpjX.gif?1)

Customizeable: duration, color, size, text, etc

##Code


copy the following into your parent controller:
``` objc
#import "RKDropdownAlert.h"
```

Title is mandatory. Message, background color, text color, and viewing time are all optional. Call the alert with any of the following methods:

``` objc
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
[RKDropdownAlert title:@"this is a title"message:@"this is a one line message"];
```

click to close:

![alt tag](http://i.imgur.com/GaVlsT0.gif?1)
