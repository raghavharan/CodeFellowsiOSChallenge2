//
//  Shelf.m
//  BookApp
//
//  Raghav Haran
//  Code Fellows iOS Challenge 2
//

#import "Shelf.h"

@implementation Shelf

@synthesize bookArray;
@synthesize shelfName;

- (id) init
{
    if(self = [super init])
    {
        bookArray = [[NSMutableArray alloc] init];
    }
    
    return self;
}

- (void) dealloc
{
    [bookArray removeAllObjects];
    [bookArray release];
    
    [super dealloc];
}

- (NSInteger) getBookNumbers
{
    return bookArray.count;
}

@end
