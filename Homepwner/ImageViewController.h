//
//  ImageViewController.h
//  Homepwner
//
//  Created by Tim Spear on 08/04/2014.
//  Copyright (c) 2014 Big Nerd Ranch. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ImageViewController : UIViewController
{
    __weak IBOutlet UIImageView *imageView;
    __weak IBOutlet UIScrollView *scrollView;
}
@property (nonatomic, strong) UIImage *image;
@end
