//
// Created by Rhys Short on 02/09/2016.
// Copyright © 2016 IBM Corporation. All rights reserved.
//
//  Licensed under the Apache License, Version 2.0 (the "License"); you may not use this file
//  except in compliance with the License. You may obtain a copy of the License at
//    http://www.apache.org/licenses/LICENSE-2.0
//  Unless required by applicable law or agreed to in writing, software distributed under the
//  License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
//  either express or implied. See the License for the specific language governing permissions
//  and limitations under the License.

#import <Foundation/Foundation.h>
#import "CDTDatastore.h"
#import "CDTReplicatorDelegate.h"

NS_ASSUME_NONNULL_BEGIN

@interface CDTDatastore (Replication)

/**
 * Creates a push replicator.
 * @param target The URL of the remote database to push to.
 * @param delegate An optional delegate for the replication
 * @param error A pointer to an error that will be set if the replicator could not be created.
 * @return A push replicator.
 */
- (nullable CDTReplicator*) pushReplicationTarget:(NSURL*)target
                                     withDelegate:(nullable NSObject<CDTReplicatorDelegate>*)delegate
                                            error:(NSError *__autoreleasing *) error;

/**
 * Creates a pull replicator.
 * @param source The URL of the database from which to pull.
 * @param delegate An optional delegate for the replication.
 * @param error A pointer to an error that will be set if the replicator could not be created.
 * @return A pull replicator.
 */
- (nullable CDTReplicator*) pullReplicationSource:(NSURL*)source
                                     withDelegate:(nullable NSObject<CDTReplicatorDelegate>*)delegate
                                            error:(NSError *__autoreleasing *) error;

@end

NS_ASSUME_NONNULL_END
