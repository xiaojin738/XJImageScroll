//
//  XJImageScroll.h
//
//
//  Created by xiaojin on 18/3/17.
//  Copyright © 2017年 xiaojin. All rights reserved.
//  图片的轮播（包括本地图片和网络图片的轮播，以及轮播图片的点击事件）

#import <UIKit/UIKit.h>

typedef enum {
    imageShowStyleLocation = 0,
    imageShowStyleNetwork = 1
}imageShowStyle;

typedef void (^BtnClickBlock)(NSInteger tagValue);

@interface XJImageScroll : UIView<UIScrollViewDelegate>

/**
 *  显示本地图片
 *  rect:在父视图中的位置
 *  array:加载的图片数组
 *  btnClick:点击图片回调
 */
+ (UIView *)showLocationImageScrollWithFrame:(CGRect)rect andImageArray:(NSArray *)array andBtnClick:(BtnClickBlock)btnClick;


/**
 *  显示网络图片
 *  rect:在父视图中的位置
 *  array:加载的图片数组--(网络图片地址)
 *  btnClick:点击图片回调
 */
+ (UIView *)showNetWorkImageScrollWithFrame:(CGRect)rect andImageArray:(NSArray *)array andBtnClick:(BtnClickBlock)btnClick;

/**
 *  清理网络缓存到内存中的图片
 */
+ (void)clearNetImageCache;


@end



















