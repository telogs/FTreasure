//
//  ShareModel.h
//  WinTreasure
//
//  Created by Apple on 16/6/12.
//  Copyright © 2016年 linitial. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ShareModel : NSObject

/**用户名
 */
@property (nonatomic, copy) NSString *username;

/**用户头像
 */
@property (nonatomic, copy) NSString *headImageUrl;

/**日期
 */
@property (nonatomic, copy) NSString *timeSpan;

/**晒单标题
 */
@property (nonatomic, copy) NSString *title;

/**产品名称
 */
@property (nonatomic, copy) NSString *productName;

/**产品期号
 */
@property (nonatomic, copy) NSString *productPeriod;

/**本期参与
 */
@property (nonatomic, copy) NSString *participate;

/**揭晓时间
 */
@property (nonatomic, copy) NSString *publishTime;

/**幸运号码
 */
@property (nonatomic, copy) NSString *luckyNumber;

/**晒单内容
 */
@property (nonatomic, copy) NSString *content;

/**图片
 */
@property (nonatomic, strong) NSMutableArray *imageList;

@end
