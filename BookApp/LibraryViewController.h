//
//  ViewController.h
//  BookApp
//
//  Created by wancheng on 12/28/13.
//  Copyright (c) 2013 wancheng. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Library.h"

@interface LibraryViewController : UIViewController<UITableViewDelegate, UITableViewDataSource>

@property(nonatomic, assign) IBOutlet UITableView*   tableView;

@end
