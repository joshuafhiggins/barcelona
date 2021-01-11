//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/NSObject-Protocol.h>

@class ICEnvironmentMonitor;

@protocol ICEnvironmentMonitorObserver

@optional
- (void)environmentMonitorDidChangeThermalLevel:(ICEnvironmentMonitor *)arg1;
- (void)environmentMonitorDidChangeTelephonyStatus:(ICEnvironmentMonitor *)arg1;
- (void)environmentMonitorDidChangeBatteryLevel:(ICEnvironmentMonitor *)arg1;
- (void)environmentMonitorDidChangePower:(ICEnvironmentMonitor *)arg1;
- (void)environmentMonitorDidChangeNetworkType:(ICEnvironmentMonitor *)arg1;
- (void)environmentMonitorDidChangeNetworkReachability:(ICEnvironmentMonitor *)arg1;
@end

