//
//  UsuariosCheckedViewController.h
//  Onrange
//
//  Created by Thiago Castro on 05/03/14.
//  Copyright (c) 2014 Thiago Castro. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SlideNavigationController.h"
#import "AppDelegate.h"
#import "UsuarioFotoCollectionCell.h"
#import "UsuariosCheckinHeaderView.h"
#import "PointLocais.h"
#import "Local.h"

@interface UsuariosCheckedViewController : UICollectionViewController<UICollectionViewDataSource, UICollectionViewDelegate>

@property (strong, nonatomic) NSString *profileID;
@property (strong, nonatomic) NSDictionary<FBGraphUser> *user;
@property (weak, nonatomic) PointLocais *annotation;
@property (weak, nonatomic) Local *local;
- (IBAction)btCheckinLocal:(UIButton *)sender;

@end