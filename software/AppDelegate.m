//
//  AppDelegate.m
//  software
//
//  Created by Michael on 30/09/2019.
//  Copyright © 2019 Michael. All rights reserved.
//

#import "AppDelegate.h"
#import "SOpenGLView.h"

@interface AppDelegate ()

@property (weak) IBOutlet NSWindow *window;
@end

@implementation AppDelegate

- (void)applicationDidFinishLaunching:(NSNotification *)aNotification {
    NSOpenGLPixelFormatAttribute openglPixelFormatAttributes [] = {
        NSOpenGLPFANoRecovery,
        NSOpenGLPFAColorSize, 32,
        NSOpenGLPFADepthSize, 32,
        NSOpenGLPFAMaximumPolicy,
        NSOpenGLPFADoubleBuffer,
        NSOpenGLPFAAccelerated,
        0
    };
    NSOpenGLPixelFormat* openglPixelFormat = [[NSOpenGLPixelFormat alloc] initWithAttributes: openglPixelFormatAttributes];
    SOpenGLView* openglView = [[SOpenGLView alloc] initWithFrame: self.window.frame
                                                     pixelFormat: openglPixelFormat];
    
    self.window.contentView = openglView;
    [self.window makeFirstResponder: openglView];
}

@end
