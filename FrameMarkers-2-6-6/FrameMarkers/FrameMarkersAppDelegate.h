/*==============================================================================
 Copyright (c) 2010-2013 QUALCOMM Austria Research Center GmbH.
 All Rights Reserved.
 Qualcomm Confidential and Proprietary
 ==============================================================================*/


#import <UIKit/UIKit.h>
@class ARParentViewController;


@interface FrameMarkersAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow* window;
    ARParentViewController* arParentViewController;
    UIImageView *splashV;
}

@end
