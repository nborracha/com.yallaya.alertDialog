/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2009-2014 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */
#import "TiProxy.h"

@interface ComYallayaAlertDialogAlertDialogProxy : TiProxy<UIAlertViewDelegate> {
@private
    UIAlertView *alert;
    BOOL persistentFlag;
}

-(void)show:(id)args;

@end