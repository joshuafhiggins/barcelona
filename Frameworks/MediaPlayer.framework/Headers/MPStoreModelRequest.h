//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPModelRequest.h>

@class NSString;

@interface MPStoreModelRequest : MPModelRequest
{
    _Bool _didSetTimeoutInterval;
    double _timeoutInterval;
    NSString *_clientIdentifier;
    NSString *_clientVersion;
    NSString *_clientPlatformIdentifier;
    unsigned long long _authenticationOptions;
}

+ (_Bool)requiresNetwork;
+ (_Bool)supportsSecureCoding;

@property(nonatomic) unsigned long long authenticationOptions; // @synthesize authenticationOptions=_authenticationOptions;
@property(copy, nonatomic) NSString *clientPlatformIdentifier; // @synthesize clientPlatformIdentifier=_clientPlatformIdentifier;
@property(copy, nonatomic) NSString *clientVersion; // @synthesize clientVersion=_clientVersion;
@property(copy, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(nonatomic) double timeoutInterval; // @synthesize timeoutInterval=_timeoutInterval;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end
