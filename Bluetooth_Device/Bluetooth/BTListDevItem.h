//
//  BTListDevItem.h
//  Bluetooth
//
//  Created by Radu on 7/16/12.
//  Copyright (c) 2012 Teksoft. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BluetoothDevice.h"

@interface BTListDevItem : NSObject {
    NSString *name;
    NSString *description;
    NSInteger type;
    BluetoothDevice *btdev;
}
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *description;
@property (nonatomic) NSInteger type;
@property (nonatomic, retain) BluetoothDevice *btdev;

-(id)initWithName:(NSString *)n description:(NSString *)d type:(NSInteger )u btdev:(BluetoothDevice *)b;

@end
