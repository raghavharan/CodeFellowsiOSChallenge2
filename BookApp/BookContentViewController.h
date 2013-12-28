//
//  BookContentViewController.h
//  BookApp
//
//  Created by wancheng on 12/29/13.
//  Copyright (c) 2013 wancheng. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BookContentViewController : UIViewController

@property(nonatomic, assign) NSString*  mytitle;
@property(nonatomic, assign) NSString*  mytext;

@property(nonatomic, assign) IBOutlet UILabel*  lbltitle;
@property(nonatomic, assign) IBOutlet UILabel*  lbltext;

@end
