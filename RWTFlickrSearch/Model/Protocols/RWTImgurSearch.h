//
//  RWTImgurSearch.h
//  RWTFlickrSearch
//
//  Created by Indigo on 4/21/16.
//  Copyright © 2016 Colin Eberhardt. All rights reserved.
//

#import <ReactiveCocoa/ReactiveCocoa.h>
@import Foundation;

@protocol RWTImgurSearch <NSObject>

- (RACSignal *)imgurSearchSignal:(NSString *)searchString;

@end