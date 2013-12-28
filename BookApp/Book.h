//
//  Book.h
//  BookApp
//
//  Created by wancheng on 12/28/13.
//  Copyright (c) 2013 wancheng. All rights reserved.
//

#import <Foundation/Foundation.h>

@class Book;

@protocol BookDelegate <NSObject>
@optional
- (void)enshelf:(NSString*)shelfName book:(Book*) book;

- (void)unshelf:(NSString*)shelfName book:(Book*) book;

@end


@interface Book : NSObject

@property (nonatomic, retain) id<BookDelegate> delegate;
@property (nonatomic, retain) NSString* title;
@property (nonatomic, retain) NSString* text;

- (void)enshelf:(NSString*)shelfName;
- (void)unshelf:(NSString*)shelfName;


@end
