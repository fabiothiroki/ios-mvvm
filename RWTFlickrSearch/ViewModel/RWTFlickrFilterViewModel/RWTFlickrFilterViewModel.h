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

@interface RWTFlickrFilterViewModel : NSObject

@property (strong, nonatomic) NSString *title;
@property (strong, nonatomic) RWTImgurSection *selectedSection;
@property (nonatomic) NSInteger lastSectionIndexSelected;
@property (nonatomic) BOOL showViral;

- (NSArray*)getArrayOfAllSectionTypes;

@end
