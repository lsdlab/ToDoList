//
//  ToDoItem.h
//  ToDoList
//
//  Created by Chen Jian on 14-10-17.
//  Copyright (c) 2014年 Breakwire. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
