//
//  FLXDetailViewController.h
//  ActorBase
//
//  Created by Administrator on 4/2/14.
//  Copyright (c) 2014 FileLogix. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FLXDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
