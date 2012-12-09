//
//  ICB_SectionedTableViewDemoViewController.h
//  ICB_SectionedTableViewDemo
//
//

#import <UIKit/UIKit.h>

@interface ICB_SectionedTableViewDemoViewController : UIViewController {
    NSArray *books;
    NSMutableDictionary *sections;        
}

@property (nonatomic,retain) NSArray *books;
@property (nonatomic,retain) NSMutableDictionary *sections;

@end

