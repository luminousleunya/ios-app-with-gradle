//
//  DataViewController.h
//  AppGradle
//
//  Created by eugen.martynov@philips.com on 11/06/15.
//  Copyright (c) 2015 Bijdorp Studio. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DataViewController : UIViewController

@property (strong, nonatomic) IBOutlet UILabel *dataLabel;
@property (strong, nonatomic) id dataObject;

@end

