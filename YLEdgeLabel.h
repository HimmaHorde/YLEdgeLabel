//
//  YLEdgeLabel.h
//  https://www.jianshu.com/u/d2c069de1a7d
//
//  Created by yanglin on 2018/4/25.
//  Copyright © 2018年 yanglin. All rights reserved.
//

#import <UIKit/UIKit.h>
IB_DESIGNABLE
@interface YLEdgeLabel : UILabel

@property (nonatomic, assign) IBInspectable CGFloat topEdge;
@property (nonatomic, assign) IBInspectable CGFloat leftEdge;
@property (nonatomic, assign) IBInspectable CGFloat bottomEdge;
@property (nonatomic, assign) IBInspectable CGFloat rightEdge;

@property (nonatomic, assign) UIEdgeInsets contentEdgeInsets;

@end
