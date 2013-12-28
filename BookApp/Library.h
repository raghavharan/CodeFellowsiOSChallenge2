//
//  Library.h
//  BookApp
//
//  Created by wancheng on 12/28/13.
//  Copyright (c) 2013 wancheng. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "Shelf.h"

@interface Library : NSObject<BookDelegate>

{
    NSMutableArray* shelfArray;
    
    NSString*   libraryName;
}

@property(nonatomic, retain) NSMutableArray*    shelfArray;
@property(nonatomic, retain) NSString*    libraryName;

- (NSInteger) getShelfNumbers;

@end
