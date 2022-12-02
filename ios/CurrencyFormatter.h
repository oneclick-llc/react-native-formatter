//
//  CurrencyFormatter.h
//  Formatter
//
//  Created by Sergei Golishnikov on 02/12/2022.
//  Copyright © 2022 Facebook. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface CurrencyFormatter : NSObject
@property NSLocale *currentLocale;
-(void)setLocale:(NSLocale*)locale;
-(NSString*)format:(double)value;
@end

NS_ASSUME_NONNULL_END