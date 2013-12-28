//
//  BookContentViewController.m
//  BookApp
//
//  Created by wancheng on 12/29/13.
//  Copyright (c) 2013 wancheng. All rights reserved.
//

#import "BookContentViewController.h"

@interface BookContentViewController ()

@end

@implementation BookContentViewController

@synthesize lbltitle;
@synthesize lbltext;
@synthesize mytitle;
@synthesize mytext;

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view.
    
    lbltitle.text = mytitle;
    lbltext.text = mytext;
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
