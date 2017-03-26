//
//  CallbackInfo.m
//  NetReachabilityChecker (Formerly OSXWebsiteHealthChecker)
//
//  Created by Kev Zhang.
//  Copyright (c) 2016 Kev Zhang. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "CallbackInfo.h"
#import "AppDelegate.h"

@implementation CallbackInfo

- (void)setAddress:(NSString*)ws {
    address = ws;
}
- (NSString*)getAddress {
    return address;
}
- (void)setApp:(AppDelegate*)del {
    app = del;
}
- (AppDelegate*)getApp {
    return app;
}
- (void)setAssociatedItem:(NSMenuItem*)item {
    associatedItem = item;
}
- (NSMenuItem*)getMenuItem {
    return associatedItem;
}

@end
