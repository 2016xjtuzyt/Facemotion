//
//  Contact.h
//  FaceRecognition
//
//  Created by Remi Robert on 06/06/16.
//  Copyright © 2016 Remi Robert. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Realm.h>
#import "DetectFace.h"

@interface Contact : RLMObject
@property (nonnull, nonatomic, strong) NSString *key;
@property (nonnull, nonatomic, strong) NSString *name;
@property (nonatomic, strong) NSData *dataImage;
@end
