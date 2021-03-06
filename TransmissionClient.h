//
//  TransmissionClient.h
//  TransmissionRemote
//
//  Created by Tobias Rundström on 2010-03-13.
//  Copyright 2010 Purple Scout. All rights reserved.
//

#import <Cocoa/Cocoa.h>


@interface TransmissionClient : NSObject {
	NSInteger _requestTag;
	NSString *_sessionId;
}

-(id)init;
+(TransmissionClient*)client;
-(void)addTorrentUrl:(NSURL *)url;
-(NSMutableURLRequest*)doRequestWithDict:(NSDictionary *)requestDict;

@end
