//
//  ViewController.h
//  DailyPicNew
//
//  Created by yyfwptz on 2017/8/21.
//  Copyright © 2017年 yyfwptz. All rights reserved.
//

#import <Cordova/CDVViewController.h>
#import <Cordova/CDVCommandDelegateImpl.h>
#import <Cordova/CDVCommandQueue.h>

@interface MainViewController : CDVViewController

@end

@interface MainCommandDelegate : CDVCommandDelegateImpl
@end

@interface MainCommandQueue : CDVCommandQueue
@end
