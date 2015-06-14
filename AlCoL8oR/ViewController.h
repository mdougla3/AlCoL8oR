//
//  ViewController.h
//  AlCoL8oR
//
//  Created by McCay on 6/12/15.
//  Copyright (c) 2015 Change5. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITextField *beerPercentTextField;
@property (weak, nonatomic) IBOutlet UILabel *resultLabel;
@property (weak, nonatomic) IBOutlet UISlider *beerCountSlider;

- (void)buttonPressed:(UIButton *)sender;


@end

