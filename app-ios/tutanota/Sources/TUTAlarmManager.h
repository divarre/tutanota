//
//  TUTAlarmManager.h
//  tutanota
//
//  Created by Tutao GmbH on 07.06.19.
//  Copyright © 2019 Tutao GmbH. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "Utils/TUTSseInfo.h"
#import "Utils/TUTUserPreferenceFacade.h"
#import "Alarms/TUTMissedNotification.h"

NS_ASSUME_NONNULL_BEGIN

extern NSInteger const ALARM_LIMIT;

@interface TUTAlarmManager : NSObject
- (instancetype) initWithUserPreferences:(TUTUserPreferenceFacade *)userPref;
- (void)fetchMissedNotifications:(void(^)(NSError *))completionHandler;
- (void)rescheduleAlarms;
- (BOOL)hasNotificationTTLExpired;
- (void)resetStoredState;

@end

NS_ASSUME_NONNULL_END
