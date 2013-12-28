//
//  ViewController.h
//  BookApp
//
//  Raghav Haran
//  Code Fellows iOS Challenge 2
//

#import <UIKit/UIKit.h>
#import "Library.h"

@interface LibraryViewController : UIViewController<UITableViewDelegate, UITableViewDataSource>

@property(nonatomic, assign) IBOutlet UITableView*   tableView;

@end
