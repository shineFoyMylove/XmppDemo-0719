/*
 * This file is part of the SDWebImage package.
 * (c) Olivier Poitrey <rs@dailymotion.com>
 *
 * For the full copyright and license information, please view the LICENSE
 * file that was distributed with this source code.
 */

#import <UIKit/UIKit.h>
#import "SDWebImageManager.h"

@interface UIView (WebCacheOperation)

/**
 *  Set the image load operation (storage in a UIView based dictionary)
 *
 *  @_param operation the operation
 *  @_param key       key for storing the operation
 */
- (void)sd_setImageLoadOperation:(id)operation forKey:(NSString *)key;

/**
 *  Cancel all operations for the current UIView and key
 *
 *  @_param key key for identifying the operations
 */
- (void)sd_cancelImageLoadOperationWithKey:(NSString *)key;

/**
 *  Just remove the operations corresponding to the current UIView and key without cancelling them
 *
 *  @_param key key for identifying the operations
 */
- (void)sd_removeImageLoadOperationWithKey:(NSString *)key;

@end
