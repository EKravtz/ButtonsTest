//
//  ViewController.h
//  ButtonsTest
//
//  Created by EKravtz32 on 18.02.16.
//  Copyright © 2016 EvgenKravtsov. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UILabel *indicatorLabel;


- (IBAction)actionTest2:(UIButton *)sender;
- (IBAction)actionTest2TouchDown:(UIButton*)sender;

@end

