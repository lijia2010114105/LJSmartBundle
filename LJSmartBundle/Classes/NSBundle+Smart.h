//
//  NSBundle+Smart.h
//  LJSmartBundle
//
//  Created by harsons on 2021/1/21.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSBundle (Smart)

+ (instancetype)bundleWithXIBForModuleName:(NSString *)moduleName targetClass:(Class)targetClass;

@end

NS_ASSUME_NONNULL_END
