//
//  ModelController.h
//  Zet_Zju_Ios_Iphone
//
//  Created by lee on 13-7-10.
//  Copyright (c) 2013年 lee. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DataViewController;

@interface ModelController : NSObject <UIPageViewControllerDataSource>

- (DataViewController *)viewControllerAtIndex:(NSUInteger)index storyboard:(UIStoryboard *)storyboard;
- (NSUInteger)indexOfViewController:(DataViewController *)viewController;

@end
