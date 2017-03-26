//
//  AppDelegate.h
//  NetReachabilityChecker (Formerly OSXWebsiteHealthChecker)
//
//  Created by Kev Zhang.
//  Copyright (c) 2016 Kev Zhang. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface AppDelegate : NSObject <NSApplicationDelegate, NSUserNotificationCenterDelegate> {
    NSStatusItem* _statusItem;
    NSMenu* _menu;
}

- (NSString *)input: (NSString *)prompt
       defaultValue: (NSString *)defaultValue;

- (void)frontAbout:(id)sender;
- (void)processDialog:(id)sender;
- (void)processExit:(id)sender;
- (void)setupReachability:(NSString*)address;

-(void)showGenericNotification:(NSString*) title
                   withMessage:(NSString*) message;

-(void)showGoneDownNotification:(NSString*) site;
-(void)showGoodNotification:(NSString*) site;

// for deleting a previouslay added item
-(void)removeItemSelector:(id)sender;


@end

