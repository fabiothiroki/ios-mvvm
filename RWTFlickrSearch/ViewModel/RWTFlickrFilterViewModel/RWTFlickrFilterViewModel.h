//
//  RWTFlickrFilterViewModel.h
//  RWTFlickrSearch
//
//  Created by Indigo on 4/24/16.
//  Copyright © 2016 Colin Eberhardt. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RWTImgurApiUrl.h"
#import "RWTImgurSection.h"
#import "RWTImgurViewType.h"
#import "RWTImgurWindow.h"
#import "RWTImgurFilterOptions.h"
#import "RWTImgurSort.h"

@interface RWTFlickrFilterViewModel : NSObject

@property (strong, nonatomic) NSString *title;


@property (strong, nonatomic) RWTImgurViewType *selectedViewType;

@property (strong, nonatomic) RWTImgurFilterOptions *selectedFilterOptions;


@property (strong, nonatomic) RWTImgurWindow *selectedWindow;
@property (nonatomic) NSInteger lastSectionIndexSelected;
@property (nonatomic) NSInteger lastViewTypeIndexSelected;
@property (nonatomic) NSInteger lastWindowTypeIndexSelected;
@property (nonatomic) NSInteger lastSortTypeIndexSelected;


- (NSArray *)getArrayOfAllSectionTypes;
- (NSArray *)getArrayOfAllViewTypes;
- (NSArray *)getArrayOfAllWindowTypes;
- (NSArray *)getArrayOfAllSortTypes:(BOOL)isUserSection;

@end
