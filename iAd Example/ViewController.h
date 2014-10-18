//
//  ViewController.h
//  iAd Example
//
//  Created by Walter Gonzalez Domenzain on 18/10/14.
//  Copyright (c) 2014 Smartplace. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <iAd/iAd.h>


@interface ViewController : UIViewController<UIApplicationDelegate>
{
    ADBannerView *adView;
    BOOL bannerIsVisible;
}

@end

