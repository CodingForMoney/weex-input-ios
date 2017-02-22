/**
 * Created by lx.
 * Copyright (c) 2016. All rights reserved.
 *
 * This source code is licensed under the Apache Licence 2.0.
 * For the full copyright and license information,please view the LICENSE file in the root directory of this source tree.
 */

#import "WXComponent.h"
#import "WXTextComponentProtocol.h"
#import "WXDatePickerManager.h"

@interface LXTextInputComponent : WXComponent<WXTextComponentProtocol, UITextFieldDelegate,WXDatePickerManagerDelegate>

@end
