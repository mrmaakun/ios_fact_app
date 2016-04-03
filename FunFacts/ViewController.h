//
//  ViewController.h
//  FunFacts
//
//  Created by Mark Serrano on 3/22/16.
//  Copyright © 2016 Mark Serrano. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FactBook.h"
#import "ColorWheel.h"

@class FactBook;

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UILabel *funFactLabel;
@property (strong, nonatomic) FactBook * factBook;
@property (strong, nonatomic) ColorWheel *colorwheel;
@property (weak, nonatomic) IBOutlet UIButton *funFactButton;

@end

