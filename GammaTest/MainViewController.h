//
//  ViewController.h
//  GammaTest
//
//  Created by Thomas Finch on 6/22/15.
//  Copyright © 2015 Thomas Finch. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MainViewController : UITableViewController <UITextFieldDelegate> {
    UIDatePicker *timePicker;
    UIToolbar *timePickerToolbar;
	NSDateFormatter *timeFormatter;
}

@end

