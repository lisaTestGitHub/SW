//
//  DetailViewController.h
//  SW
//
//  Created by local on 8/11/17.
//  Copyright © 2017 local. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) NSDate *detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

