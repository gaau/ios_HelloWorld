//
//  HelloViewController.h
//  HelloWorld
//
//  Created by Ole Gunnar Tveit on 28.06.11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface HelloViewController : UIViewController <UITextFieldDelegate> {
    
    UITextField *textField;
    UILabel *label;
    NSString *userName;
}

@property (nonatomic, retain) IBOutlet UITextField *textField;

@property (nonatomic, retain) IBOutlet UILabel *label;

@property (nonatomic, copy) NSString *userName;

- (IBAction)changeGreeting:(id)sender;

@end
