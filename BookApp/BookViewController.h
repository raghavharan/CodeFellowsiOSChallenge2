//
//  BookViewController.h
//  BookApp
//
//  Created by wancheng on 12/28/13.
//  Copyright (c) 2013 wancheng. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "Library.h"

@interface BookViewController : UIViewController<UITableViewDelegate, UITableViewDataSource>

@property (nonatomic, assign) Library* mylibrary;
@property (nonatomic, assign) Shelf*   myshelf;
@property (nonatomic, assign) NSInteger shelfNum;

@property (nonatomic, assign) UINavigationItem* navitem;

@property(nonatomic, assign) IBOutlet UITableView*   tableView;

@end
