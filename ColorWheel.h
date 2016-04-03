//
//  ColorWheel.h
//  FunFacts
//
//  Created by Mark Serrano on 3/31/16.
//  Copyright © 2016 Mark Serrano. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface ColorWheel : NSObject

@property (strong, nonatomic) NSArray * colors;

- (UIColor *)randomColor;


@end
