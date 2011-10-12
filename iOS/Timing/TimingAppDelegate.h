//
//  TimingAppDelegate.h
//  Timing
//
//  Created by Jan Lindblom on 2011-09-09.
//  Copyright 2011 Jan Lindblom. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TimingAppDelegate : NSObject <UIApplicationDelegate, UITabBarControllerDelegate>

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet UITabBarController *tabBarController;

@end
