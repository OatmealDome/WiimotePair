#import <Cocoa/Cocoa.h>

#import <IOBluetooth/IOBluetooth.h>

@interface ViewController : NSViewController <IOBluetoothDeviceInquiryDelegate, IOBluetoothDevicePairDelegate>

@property (nonatomic) IOBluetoothDeviceInquiry* deviceInquiry;
@property (nonatomic) IOBluetoothDevicePair* devicePair;
@property (nonatomic) IOBluetoothDevice* device;
@property (nonatomic) bool attemptingPairing;

@end

