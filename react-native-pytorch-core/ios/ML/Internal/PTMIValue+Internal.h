/*
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#import <LibTorch-Lite/LibTorch-Lite.h>

NS_ASSUME_NONNULL_BEGIN

@interface PTMIValue ()

+ (instancetype)fromIValue:(const at::IValue&)ivalue;

@property(nonatomic, readonly) at::IValue ivalue;

@end

NS_ASSUME_NONNULL_END
