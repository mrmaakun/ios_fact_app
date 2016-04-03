//
//  ViewController.m
//  FunFacts
//
//  Created by Mark Serrano on 3/22/16.
//  Copyright © 2016 Mark Serrano. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    self.factBook = [[FactBook alloc] init];
    
    self.funFactLabel.text = [self.factBook randomFact];
    self.colorwheel = [[ColorWheel alloc]init];
    
    UIColor * screenColor = [self.colorwheel randomColor];
    
    self.view.backgroundColor = screenColor;
    self.funFactButton.tintColor = screenColor;
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}
- (IBAction)showFunFact {
    
    UIColor * screenColor = [self.colorwheel randomColor];
    
    //Generate a random number to randomize the fact that is displayed.
    self.funFactLabel.text = [self.factBook randomFact];
    self.view.backgroundColor = screenColor;
    self.funFactButton.tintColor = screenColor;

    
    
}

@end
