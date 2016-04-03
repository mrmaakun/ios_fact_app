//
//  FactBook.h
//  FunFacts
//
//  Created by Mark Serrano on 3/23/16.
//  Copyright © 2016 Mark Serrano. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FactBook : NSObject

@property (strong, nonatomic) NSArray * facts;

- (NSString *)randomFact;


@end
