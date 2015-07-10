//
//  VZWebViewC.h
//  VZ
//
//  Created by Travis on 14-1-7.
//  Copyright (c) 2014年 Plumn LLC. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <StoreKit/SKStoreProductViewController.h>

#import <SIAlertView/SIAlertView.h>

@interface VZWebViewC : UIViewController<UIWebViewDelegate>
@property(nonatomic,strong) UIWebView *webView;

-(void)loadURL:(NSString*)url;

@end
