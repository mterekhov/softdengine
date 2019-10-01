//
//  SOpenGLView.h
//  software
//
//  Created by Michael on 30/09/2019.
//  Copyright © 2019 Michael. All rights reserved.
//

#import <Cocoa/Cocoa.h>

NS_ASSUME_NONNULL_BEGIN

@interface SOpenGLView : NSOpenGLView

- (instancetype)initWithFrame:(NSRect)frame pixelFormat:(NSOpenGLPixelFormat*)format;

@end

NS_ASSUME_NONNULL_END
