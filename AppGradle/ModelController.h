//
//  ModelController.h
//  AppGradle
//
//  Created by eugen.martynov@philips.com on 11/06/15.
//  Copyright (c) 2015 Bijdorp Studio. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DataViewController;

@interface ModelController : NSObject <UIPageViewControllerDataSource>

- (DataViewController *)viewControllerAtIndex:(NSUInteger)index storyboard:(UIStoryboard *)storyboard;
- (NSUInteger)indexOfViewController:(DataViewController *)viewController;

@end

