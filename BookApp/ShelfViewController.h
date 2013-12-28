//
//  LibraryViewController.h
//  BookApp
//
//  Created by wancheng on 12/28/13.
//  Copyright (c) 2013 wancheng. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "Library.h"

@interface ShelfViewController : UIViewController<UITableViewDelegate, UITableViewDataSource>

@property (nonatomic, assign) Library* mylibrary;

@property (nonatomic, assign) UINavigationItem* navitem;

@property(nonatomic, assign) IBOutlet UITableView*   tableView;

@end
