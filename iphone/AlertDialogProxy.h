/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2009-2014 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */
#import "TiProxy.h"

@interface AlertDialogProxy : TiProxy<UIAlertViewDelegate> {
@private
    UIAlertView *alert;
    UIAlertController* alertController;
    BOOL persistentFlag;
    int cancelIndex;
    int style;
}

-(void)show:(id)args;
-(void)hide:(id)args;

@end