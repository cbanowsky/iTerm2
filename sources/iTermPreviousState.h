#import <Cocoa/Cocoa.h>

@class iTermProfileHotKey;

@interface iTermPreviousState : NSObject

// For restoring previously active app when exiting hotkey window.
@property(nonatomic, copy) NSNumber *previouslyActiveAppPID;

// Set when iTerm was key at the time the hotkey window was opened.
@property(nonatomic) BOOL itermWasActiveWhenHotkeyOpened;

@property(nonatomic, retain) iTermProfileHotKey *owner;

- (void)restore;
- (void)restorePreviouslyActiveApp;
- (void)suppressHideApp;

@end
