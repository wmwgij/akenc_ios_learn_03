//
//  DetailViewController.h
//  akenc_ios_learn_03
//
//  Created by kenshino on 15/9/29.
//  Copyright © 2015年 akenc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

