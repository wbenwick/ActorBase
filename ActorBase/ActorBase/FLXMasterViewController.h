//
//  FLXMasterViewController.h
//  ActorBase
//
//  Created by Administrator on 4/2/14.
//  Copyright (c) 2014 FileLogix. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface FLXMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
