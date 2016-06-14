//
//  UIView+Installer.h
//  Framer
//
//  Created by Nikita Ermolenko on 06/06/16.
//  Copyright © 2016 Nikita Ermolenko. All rights reserved.
//

#import <UIKit/UIKit.h>

@class NUIFramer;

@interface UIView (Installer)

- (void)installFrames:(void(^)(NUIFramer *framer))installerBlock;

@end