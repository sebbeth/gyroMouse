#import "PTChannel.h"
#import <Foundation/Foundation.h>
#import <ApplicationServices/ApplicationServices.h>

static const NSTimeInterval PTAppReconnectDelay = 1.0;

@interface PTAppDelegate : NSObject <NSApplicationDelegate, PTChannelDelegate> {
    bool leftButtonDown;
    bool rightButtonDown;
    CGPoint cursorPosition;
    CGPoint MousePoint;
    CGEventRef ourEvent;
}

@property (assign) IBOutlet NSWindow *window;
@property (assign) IBOutlet NSTextField *inputTextField;
@property (assign) IBOutlet NSTextView *outputTextView;

- (IBAction)sendMessage:(id)sender;

@end
