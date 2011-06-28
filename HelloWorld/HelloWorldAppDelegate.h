//
//  HelloWorldAppDelegate.h
//  HelloWorld
//
//  Created by Ole Gunnar Tveit on 28.06.11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class HelloViewController;

@interface HelloWorldAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) HelloViewController *helloViewController;

@end
