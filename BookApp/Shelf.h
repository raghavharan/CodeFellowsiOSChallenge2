//
//  Shelf.h
//  BookApp
//
//  Raghav Haran
//  Code Fellows iOS Challenge 2
//

#import <Foundation/Foundation.h>

#import "Book.h"
@interface Shelf : NSObject
{
    NSMutableArray*   bookArray;
    
    NSString*   shelfName;
}

@property(nonatomic, retain) NSMutableArray*    bookArray;
@property(nonatomic, retain) NSString*   shelfName;

@end
