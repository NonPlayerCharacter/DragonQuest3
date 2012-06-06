//
//  DragonQuest3AppController.h
//  DragonQuest3
//
//  Created by EricCartman on 12-6-7.
//  Copyright __MyCompanyName__ 2012年. All rights reserved.
//

@class RootViewController;

@interface AppController : NSObject <UIAccelerometerDelegate, UIAlertViewDelegate, UITextFieldDelegate,UIApplicationDelegate> {
    UIWindow *window;
    RootViewController	*viewController;
}

@end

