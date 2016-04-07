//
//  BinaryTreeNode.h
//  ttt
//
//  Created by DeterTao on 16/4/7.
//  Copyright © 2016年 DeterTao. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BinaryTreeNode : NSObject
/**
*  值
*/
@property (nonatomic, assign) NSInteger value;
/**
 *  左节点
 */
@property (nonatomic, strong) BinaryTreeNode *leftNode;
/**
 *  右节点
 */
@property (nonatomic, strong) BinaryTreeNode *rightNode;

@end
