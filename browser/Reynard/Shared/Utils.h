//
//  Utils.h
//  Reynard
//
//  Created by Minh Ton on 12/4/26.
//

@import Foundation;

NS_ASSUME_NONNULL_BEGIN

BOOL getEntitlementValue(NSString *key);
void updateJetsamControl(pid_t pid);
void updateJetsamControlForProcessType(pid_t pid, NSString * _Nullable processType);
int spawnRoot(NSString *path, NSArray<NSString *> *args);

NS_ASSUME_NONNULL_END
