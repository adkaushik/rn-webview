//
//  MJRWebView.m
//  DoubleConversion
//
//  Created by Kaushik Annangi on 13/11/19.
//

#import "MJRWebView.h"

@implementation MJRWebView
- (BOOL)canPerformAction:(SEL)action withSender:(id)sender
{
    // Disable every option here, let RCTWebViewBridge handle everything
    return NO;
}
@end

