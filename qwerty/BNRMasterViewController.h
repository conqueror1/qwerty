//
//  BNRMasterViewController.h
//  qwerty
//
//  Created by Oleksiy on 7/29/14.
//  Copyright (c) 2014 Oleksiy. All rights reserved.
//

#import <UIKit/UIKit.h>

@class BNRDetailViewController;

@interface BNRMasterViewController : UITableViewController

@property (weak, nonatomic) BNRDetailViewController *detailViewController;
@property (weak, nonatomic) IBOutlet UITableView *table;
@property (nonatomic, strong) NSMutableArray *arr;
@end
