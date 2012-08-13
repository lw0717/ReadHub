#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class RHOrganization;

@interface RHAccount : NSManagedObject

@property (nonatomic, retain) NSString *accessToken;
@property (nonatomic, retain) NSString *tokenType;
@property (nonatomic, retain) NSSet *organizations;

+ (RHAccount *)account;
+ (RHAccount *)accountWithDictionary:(NSDictionary *)dictionary;
+ (RHAccount *)currentAccount;
+ (void)setCurrentAccount:(RHAccount *)account;

@end


@interface RHAccount (CoreDataGeneratedAccessors)

- (void)addOrganizationsObject:(RHOrganization *)value;
- (void)removeOrganizationsObject:(RHOrganization *)value;
- (void)addOrganizations:(NSSet *)values;
- (void)removeOrganizations:(NSSet *)values;

@end
