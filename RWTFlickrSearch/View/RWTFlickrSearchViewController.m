//
//  Created by Colin Eberhardt on 13/04/2014.
//  Copyright (c) 2014 Colin Eberhardt. All rights reserved.
//

#import "RWTFlickrSearchViewController.h"
#import <ReactiveCocoa/ReactiveCocoa.h>
#import "RWTImgurApiRequest.h"

@interface RWTFlickrSearchViewController ()

@property (weak, nonatomic) RWTFlickrSearchViewModel *viewModel;

@end

@implementation RWTFlickrSearchViewController

- (instancetype)initWithViewModel:(RWTFlickrSearchViewModel *)viewModel{
    
    self = [super init];
    
    if (self) {
        self.viewModel = viewModel;
    }
    
    return self;
}

- (void)viewDidLoad {
    [super viewDidLoad];
  
    [self setupViewController];
    
    [self bindViewModel];
    
    [self.viewModel.executeSearch execute:nil];
    
    
    RWTImgurApiUrl *url = [RWTImgurApiUrl urlWithBlock:^(id<RWTImgurApiUrlBuilder> builder) {
        [builder setSection:RWTImgurApiRequestSectionTypeTop];
    }];
    
    [[[RWTImgurApiRequest alloc] init] getWithUrl:url success:^(id response) {
        
    } failure:^(NSError *error) {
        
    }];
}

#pragma mark - Private methods

- (void)setupViewController{
    
    self.edgesForExtendedLayout = UIRectEdgeNone;
    
    self.navigationItem.backBarButtonItem = [[UIBarButtonItem alloc] initWithTitle:@"" style:UIBarButtonItemStylePlain target:nil action:nil];
}

- (void)bindViewModel{
    self.title = self.viewModel.title;
    
    RAC([UIApplication sharedApplication], networkActivityIndicatorVisible) = self.viewModel.executeSearch.executing;
}

@end
