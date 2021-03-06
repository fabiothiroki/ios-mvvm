//
//  RWTFlickrSearchViewModel.h
//  RWTFlickrSearch
//
//  Created by Indigo on 4/21/16.
//  Copyright © 2016 Colin Eberhardt. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <ReactiveCocoa/ReactiveCocoa.h>
#import "RWTViewModelServices.h"
#import "RWTImgurImages.h"
#import "RWTImgurApiUrl.h"
#import "RWTImgurWindow.h"
#import "RWTImgurSort.h"

@interface RWTFlickrSearchViewModel : NSObject

@property (strong, nonatomic) NSString *title;
@property (strong, nonatomic) RACCommand *executeSearch;
@property (strong, nonatomic) RWTImgurImages *results;

- (instancetype) initWithServices:(id<RWTViewModelServices>)services;

- (RACSignal *)signalForSettingSectionType:(RWTImgurApiRequestSectionType)sectionType
                                 showViral:(BOOL)showViral
                                windowType:(RWTImgurWindowType)windowType
                                  sortType:(RWTImgurSortType)sortType;


@end
