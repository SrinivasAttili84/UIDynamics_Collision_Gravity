//
//  UIKitDynamicsViewController.h
//  UIKitDynamics
//
//  Created by Neil Smyth on 9/19/13.
//  Copyright (c) 2013 Neil Smyth. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIKitDynamicsViewController : UIViewController
@property CGPoint currentLocation;
@property (strong, nonatomic) UIView *blueBoxView;
@property (strong, nonatomic) UIView *redBoxView;
@property (strong, nonatomic) UIDynamicAnimator *animator;
@property (strong, nonatomic) UIAttachmentBehavior *attachment;
@end
