#import <UIKit/UIKit.h>
#import "PTChannel.h"
#import <CoreMotion/CoreMotion.h>

@interface PTViewController : UIViewController <PTChannelDelegate, UITextFieldDelegate> {
   NSString *messageToSend;
    float cursorXPosition;
    float cursorYPosition;
    CMMotionManager *gyroscopeManager;

}

@property (weak) IBOutlet UITextView *outputTextView;
@property (weak) IBOutlet UITextField *inputTextField;

- (void)sendMessage:(NSString*)message;
- (IBAction)leftButton:(id)sender;
- (IBAction)rightButton:(id)sender;

@end
