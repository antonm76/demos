//  Copyright (c) 2017 DENIVIP Group. All rights reserved.
//

#ifndef DemoRTSP_CacheFileManager_h
#define DemoRTSP_CacheFileManager_h


@interface CacheFileManager : NSFileManager

+ (instancetype)sharedManager;
+ (NSString *)cachesDirectory;
+ (NSString *)cachePathForKey:(NSString*)key;
- (void)deleteFilesAtPath:(NSString *)path;
- (long)cleanupCachesAtPath:(NSString *)path maxAge:(NSTimeInterval)maxAge maxTotalSize:(NSUInteger)maxTotalSize;
- (BOOL)createDirectoryAtPath:(NSString *)path;
@end

#endif
