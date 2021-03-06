//
//  RCTScrollEvent.h
//  RCTCxxBridgeApple
//
//  Created by Samuel Susla on 08/10/2019.
//

#import <Foundation/Foundation.h>
#import <React/RCTEventDispatcher.h>

@interface RCTScrollEvent : NSObject <RCTEvent>

- (instancetype)initWithEventName:(NSString *)eventName
                         reactTag:(NSNumber *)reactTag
          scrollViewContentOffset:(CGPoint)scrollViewContentOffset
           scrollViewContentInset:(UIEdgeInsets)scrollViewContentInset
            scrollViewContentSize:(CGSize)scrollViewContentSize
                  scrollViewFrame:(CGRect)scrollViewFrame
              scrollViewZoomScale:(CGFloat)scrollViewZoomScale
                         userData:(NSDictionary *)userData
                    coalescingKey:(uint16_t)coalescingKey NS_DESIGNATED_INITIALIZER;

@end
