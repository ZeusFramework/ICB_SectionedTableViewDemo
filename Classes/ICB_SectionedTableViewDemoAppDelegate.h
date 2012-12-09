//
//  ICB_SectionedTableViewDemoAppDelegate.h
//  ICB_SectionedTableViewDemo
//
//

#import <UIKit/UIKit.h>

@class ICB_SectionedTableViewDemoViewController;

@interface ICB_SectionedTableViewDemoAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    ICB_SectionedTableViewDemoViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet ICB_SectionedTableViewDemoViewController *viewController;

@end

