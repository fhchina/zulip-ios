//
//  SidebarStreamCell.h
//  Zulip
//
//  Created by Leonardo Franchi on 7/30/13.
//
//

#import <UIKit/UIKit.h>
#import "ZSubscription.h"

typedef enum {
    HOME,
    PRIVATE_MESSAGES,
    STREAM
} SIDEBAR_SHORTCUTS;

@interface SidebarStreamCell : UITableViewCell

@property (nonatomic, retain) IBOutlet UILabel *name;
@property (strong, nonatomic) IBOutlet UIImageView *gravatar;

@property (nonatomic, assign) SIDEBAR_SHORTCUTS shortcut;
@property (nonatomic, retain) ZSubscription *stream;
@property (nonatomic, retain, readonly) NSPredicate *predicate;

@end
