//
//  AddressCell.h
//  WinTreasure
//
//  Created by Apple on 16/6/22.
//  Copyright © 2016年 linitial. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AddressModel.h"

@interface AddressCell : UITableViewCell

@property (nonatomic, strong) AddressModel *model;

+ (instancetype)cellWithTableView:(UITableView *)tableview;

@end
