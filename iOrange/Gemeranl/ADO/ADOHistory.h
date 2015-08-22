//
//  ADOHistory.h
//  iOrange
//
//  Created by Yoon on 8/18/15.
//  Copyright © 2015 yinxiangkai. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ModelHistory.h"

@interface ADOHistory : NSObject
/**
 *  插入历史纪录
 *
 *  @param modelHistory 数据
 *
 *  @return 是否成功
 */
+ (BOOL)InsertWithModelList:(ModelHistory *)modelHistory;

/**
 *  根据id 更新历史纪录数据
 *
 *  @param modelHistory 历史纪录数据
 *  @param uid          hid
 *
 *  @return 是否成功
 */
+ (BOOL)updateModel:(ModelHistory *)modelHistory atUid:(NSString *)uid;

/**
 *  网址是否存在
 *
 *  @param link 网址
 *
 *  @return yes 存在 no 不存在
 */
+ (BOOL)isExistsWithPostLink:(NSString *)link;

/**
 *  根据link 返回model
 *
 *  @param link 网址
 *
 *  @return model
 */
+ (ModelHistory *)queryModelWithLink:(NSString *)link;

@end
