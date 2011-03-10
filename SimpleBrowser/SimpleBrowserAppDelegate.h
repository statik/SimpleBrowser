//
//  SimpleBrowserAppDelegate.h
//  SimpleBrowser
//
//  Created by Elliot Murphy on 3/9/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface SimpleBrowserAppDelegate : NSObject <NSApplicationDelegate> {
@private
    NSWindow *window;
}

@property (assign) IBOutlet NSWindow *window;

@end
