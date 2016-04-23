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

@interface RWTFlickrSearchViewModel : NSObject

@property (strong, nonatomic) NSString *title;
@property (strong, nonatomic) RACCommand *executeSearch;

- (instancetype) initWithServices:(id<RWTViewModelServices>)services;

@end
