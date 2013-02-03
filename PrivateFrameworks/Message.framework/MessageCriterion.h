/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSArray, NSString;

@interface MessageCriterion : NSObject {
    unsigned int _allCriteriaMustBeSatisfied : 1;
    unsigned int _dateIsRelative : 1;
    NSArray *_criteria;
    NSString *_criterionIdentifier;
    NSInteger _dateUnitType;
    NSString *_expression;
    NSString *_name;
    NSInteger _qualifier;
    NSArray *_requiredHeaders;
    NSInteger _type;
    NSString *_uniqueId;
}

+ (void)_updateAddressComments:(id)arg1;
+ (id)criteriaFromDefaultsArray:(id)arg1 removingRecognizedKeys:(BOOL)arg2;
+ (id)criteriaFromDefaultsArray:(id)arg1;
+ (id)criterionForMailboxURL:(id)arg1;
+ (NSInteger)criterionTypeForString:(id)arg1;
+ (id)defaultsArrayFromCriteria:(id)arg1;
+ (id)messageIsDeletedCriterion:(BOOL)arg1;
+ (id)stringForCriterionType:(NSInteger)arg1;

- (id)SQLExpressionWithContext:(struct { NSUInteger x1; NSUInteger x2; BOOL x3; BOOL x4; }*)arg1 depth:(NSUInteger)arg2;
- (id)SQLExpressionWithTables:(NSUInteger*)arg1 baseTable:(NSUInteger)arg2;
- (BOOL)_evaluateAccountCriterion:(id)arg1;
- (BOOL)_evaluateAddressBookCriterion:(id)arg1;
- (BOOL)_evaluateAddressHistoryCriterion:(id)arg1;
- (BOOL)_evaluateAttachmentCriterion:(id)arg1;
- (BOOL)_evaluateDateCriterion:(id)arg1;
- (BOOL)_evaluateFullNameCriterion:(id)arg1;
- (BOOL)_evaluateHeaderCriterion:(id)arg1;
- (BOOL)_evaluateIsDigitallySignedCriterion:(id)arg1;
- (BOOL)_evaluateIsEncryptedCriterion:(id)arg1;
- (BOOL)_evaluatePriorityIsHighCriterion:(id)arg1;
- (BOOL)_evaluatePriorityIsLowCriterion:(id)arg1;
- (BOOL)_evaluatePriorityIsNormalCriterion:(id)arg1;
- (id)_headersRequiredForEvaluation;
- (id)_qualifierString;
- (BOOL)allCriteriaMustBeSatisfied;
- (NSUInteger)bestBaseTable;
- (id)criteria;
- (id)criterionForSQL;
- (id)criterionIdentifier;
- (NSInteger)criterionType;
- (BOOL)dateIsRelative;
- (NSInteger)dateUnits;
- (void)dealloc;
- (id)description;
- (id)descriptionWithDepth:(NSUInteger)arg1;
- (id)dictionaryRepresentation;
- (BOOL)doesMessageSatisfyCriterion:(id)arg1;
- (id)emailAddressesForGroupCriterion;
- (id)expression;
- (id)fixOnce;
- (BOOL)hasNumberCriterion;
- (id)init;
- (id)initWithCriterion:(id)arg1 expression:(id)arg2;
- (id)initWithDictionary:(id)arg1 andRemoveRecognizedKeysIfMutable:(BOOL)arg2;
- (id)initWithDictionary:(id)arg1;
- (id)initWithType:(NSInteger)arg1 qualifier:(NSInteger)arg2 expression:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (NSInteger)messageRuleQualifierForString:(id)arg1;
- (id)name;
- (NSInteger)qualifier;
- (void)setAllCriteriaMustBeSatisfied:(BOOL)arg1;
- (void)setCriteria:(id)arg1;
- (void)setCriterionIdentifier:(id)arg1;
- (void)setCriterionType:(NSInteger)arg1;
- (void)setDateIsRelative:(BOOL)arg1;
- (void)setDateUnits:(NSInteger)arg1;
- (void)setExpression:(id)arg1;
- (void)setName:(id)arg1;
- (void)setQualifier:(NSInteger)arg1;
- (id)stringForMessageRuleQualifier:(NSInteger)arg1;

@end