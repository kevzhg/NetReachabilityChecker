//
//  CallbackInfo.h
//  NetReachabilityChecker (Formerly OSXWebsiteHealthChecker)
//
//  Used to store information pertaining to web-check callback in AppDelegate
//
//  Created by Kev Zhang.
//  Copyright (c) 2016 Kev Zhang. All rights reserved.
//

#import <Foundation/Foundation.h>

@class AppDelegate;
@class NSMenuItem;
@class NSString;

@interface CallbackInfo : NSObject {
    AppDelegate *app;
    NSString *address;
    NSMenuItem *associatedItem;
}

/// The web address
- (void)setAddress:(NSString*)ws;
- (NSString*)getAddress;

/// The app delegate
- (void)setApp:(AppDelegate*)del;
- (AppDelegate*)getApp;

/// The manu item associated with the address
- (void)setAssociatedItem:(NSMenuItem*)item;
- (NSMenuItem*)getMenuItem;

@end
