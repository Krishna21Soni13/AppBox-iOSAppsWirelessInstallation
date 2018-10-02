//
//  UploadRecord+CoreDataProperties.m
//  
//
//  Created by Vineet Choudhary on 30/09/18.
//
//

#import "UploadRecord+CoreDataProperties.h"

@implementation UploadRecord (CoreDataProperties)

+ (NSFetchRequest<UploadRecord *> *)fetchRequest {
	return [NSFetchRequest fetchRequestWithEntityName:@"UploadRecord"];
}

@dynamic build;
@dynamic buildScheme;
@dynamic buildType;
@dynamic datetime;
@dynamic dbAppInfoFullPath;
@dynamic dbDirectroy;
@dynamic dbFolderName;
@dynamic dbIPAFullPath;
@dynamic dbManifestFullPath;
@dynamic dbSharedAppInfoURL;
@dynamic dbSharedIPAURL;
@dynamic dbSharedManifestURL;
@dynamic keepSameLink;
@dynamic localBuildPath;
@dynamic mailURL;
@dynamic projectPath;
@dynamic shortURL;
@dynamic teamId;
@dynamic version;
@dynamic project;
@dynamic provisioningProfile;

@end
