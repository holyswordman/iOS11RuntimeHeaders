/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDAchievementDataStoreV2 : NSObject {
    NSMutableArray * _addedAchievements;
    unsigned long long  _bestStepCount;
    bool  _commitsForIntegrationTesting;
    NSError * _currentRunError;
    NSString * _currentRunErroredPropertyKey;
    NSMutableDictionary * _currentValues;
    NSString * _databaseIdentifier;
    HDKeyValueDomain * _defaultsDomain;
    id /* block */  _didCommitAchievementsHandler;
    unsigned long long  _lastStepCount;
    NSDictionary * _lastValues;
    NSMutableArray * _mockedCommittedAchievements;
    long long  _mode;
    long long  _mostRecentWorkoutAnchor;
    HDProfile * _profile;
}

@property (nonatomic, retain) NSMutableArray *addedAchievements;
@property (nonatomic) double bestExerciseGoalValue;
@property (nonatomic) unsigned long long bestExerciseStreak;
@property (nonatomic) double bestExerciseValue;
@property (nonatomic) double bestMoveGoalValue;
@property (nonatomic) unsigned long long bestMoveStreak;
@property (nonatomic) double bestMoveValue;
@property (nonatomic) unsigned long long bestStandGoalValue;
@property (nonatomic) unsigned long long bestStandStreak;
@property (nonatomic) unsigned long long bestStandValue;
@property (nonatomic) unsigned long long bestStepCount;
@property (nonatomic) bool commitsForIntegrationTesting;
@property (nonatomic) unsigned long long currentExerciseStreak;
@property (nonatomic) unsigned long long currentMoveStreak;
@property (nonatomic, retain) NSError *currentRunError;
@property (nonatomic, retain) NSString *currentRunErroredPropertyKey;
@property (nonatomic) unsigned long long currentStandStreak;
@property (nonatomic, retain) NSMutableDictionary *currentValues;
@property (nonatomic, retain) NSString *databaseIdentifier;
@property (nonatomic, retain) HDKeyValueDomain *defaultsDomain;
@property (nonatomic, copy) id /* block */ didCommitAchievementsHandler;
@property (nonatomic) unsigned long long lastStepCount;
@property (nonatomic, retain) NSDictionary *lastValues;
@property (nonatomic, retain) NSMutableArray *mockedCommittedAchievements;
@property (nonatomic) long long mode;
@property (nonatomic) long long mostRecentWorkoutAnchor;
@property (nonatomic, retain) HDProfile *profile;
@property (nonatomic, retain) NSDate *storeValuesValidBeforeDate;
@property (nonatomic) long long storeValuesValidBeforeSummaryIndex;
@property (nonatomic) unsigned long long totalExerciseGoalsAttempted;
@property (nonatomic) unsigned long long totalExerciseGoalsMade;
@property (nonatomic) unsigned long long totalMoveGoalsAttempted;
@property (nonatomic) unsigned long long totalMoveGoalsMade;
@property (nonatomic) unsigned long long totalStandGoalsAttempted;
@property (nonatomic) unsigned long long totalStandGoalsMade;

+ (bool)_isChallengeProgressInAverages:(id)arg1;
+ (id)createEvaluatedAchievementWithDefinition:(id)arg1 environment:(id)arg2;

- (void).cxx_destruct;
- (id)_allAchievementsInDatabaseWithError:(id*)arg1;
- (void)_clearAllAddedAchievements;
- (bool)_clearValuesForAllKeysWithError:(id*)arg1;
- (bool)_companionCommitAchievementsAndKeyValuePairsWithError:(id*)arg1;
- (id)_currentValueDictionary;
- (double)_doubleValueForProperty:(id)arg1 monthOffset:(long long)arg2;
- (void)_flushLastValuesDictionary;
- (void)_flushValuesDictionary;
- (bool)_gizmoCommitAchievementsWithError:(id*)arg1;
- (id)_lastKeyValuePairDump;
- (id)_localValueForKey:(id)arg1;
- (void)_migrateV1WorkoutKeyValuePairs;
- (id)_mockAddedAchievements;
- (bool)_mockCommitWithError:(id*)arg1;
- (id)_mockCommittedAchievements;
- (void)_populateAllValuesFromDatabase;
- (bool)_pullInboxValuesIfNeededWithError:(id*)arg1 didWriteNewValues:(bool*)arg2;
- (bool)_removeAchievements:(id)arg1 error:(id*)arg2;
- (bool)_removeAllAchievementsWithError:(id*)arg1;
- (void)_setCommitsForIntegrationTesting;
- (void)_setDoubleValue:(double)arg1 forProperty:(id)arg2 monthOffset:(long long)arg3;
- (void)_setKeyValueDomain:(id)arg1;
- (bool)_setLocalValue:(id)arg1 forKey:(id)arg2;
- (void)_setMockCommittedAchievements:(id)arg1;
- (void)_setUnsignedIntegerValue:(unsigned long long)arg1 forProperty:(id)arg2 monthOffset:(long long)arg3;
- (void)_setValue:(id)arg1 forKey:(id)arg2;
- (bool)_transaction_commitAchievementsWithError:(id*)arg1;
- (bool)_transaction_removeDuplicateAddedAchievementsWithError:(id*)arg1;
- (unsigned long long)_unsignedIntegerValueForProperty:(id)arg1 monthOffset:(long long)arg2;
- (id)_valueForKey:(id)arg1;
- (id)_valueFromDatabaseForKey:(id)arg1;
- (void)addAchievements:(id)arg1;
- (id)addedAchievements;
- (double)bestExerciseGoalValue;
- (unsigned long long)bestExerciseStreak;
- (double)bestExerciseValue;
- (double)bestMoveGoalValue;
- (unsigned long long)bestMoveStreak;
- (double)bestMoveValue;
- (unsigned long long)bestStandGoalValue;
- (unsigned long long)bestStandStreak;
- (unsigned long long)bestStandValue;
- (unsigned long long)bestStepCount;
- (bool)clearAllKeyValuePairs;
- (void)commitForAchievementProgress;
- (bool)commitWithError:(id*)arg1;
- (bool)commitsForIntegrationTesting;
- (unsigned long long)countOfUnalertedAchievements;
- (unsigned long long)currentExerciseStreak;
- (unsigned long long)currentMoveStreak;
- (id)currentRunError;
- (id)currentRunErroredPropertyKey;
- (unsigned long long)currentStandStreak;
- (id)currentValues;
- (id)databaseIdentifier;
- (id)dateForKey:(id)arg1;
- (unsigned long long)daysMeetingAllGoalsForMonthOffset:(long long)arg1;
- (unsigned long long)daysMeetingExerciseGoalByFactorOfTwoForMonthOffset:(long long)arg1;
- (unsigned long long)daysMeetingExerciseGoalForMonthOffset:(long long)arg1;
- (unsigned long long)daysMeetingMoveGoalByFactorOfTwoForMonthOffset:(long long)arg1;
- (unsigned long long)daysMeetingMoveGoalForMonthOffset:(long long)arg1;
- (unsigned long long)daysMeetingStandGoalByFactorOfTwoForMonthOffset:(long long)arg1;
- (unsigned long long)daysMeetingStandGoalForMonthOffset:(long long)arg1;
- (id)defaultsDomain;
- (id /* block */)didCommitAchievementsHandler;
- (double)doubleForKey:(id)arg1;
- (id)earnedAchievementDefinitionIdentifiers;
- (id)init;
- (id)initWithProfile:(id)arg1 mode:(long long)arg2;
- (long long)int64ForKey:(id)arg1;
- (unsigned long long)lastStepCount;
- (id)lastValueForKey:(id)arg1;
- (id)lastValues;
- (bool)markAchievementAlerted:(id)arg1 error:(id*)arg2;
- (id)mockedCommittedAchievements;
- (long long)mode;
- (long long)mostRecentWorkoutAnchor;
- (id)predicateEnvironmentWithPreviousMovePercentageGetter:(id /* block */)arg1;
- (void)prepareForDayChange;
- (double)previous_bestExerciseGoalValue;
- (unsigned long long)previous_bestExerciseStreak;
- (double)previous_bestExerciseValue;
- (double)previous_bestMoveGoalValue;
- (unsigned long long)previous_bestMoveStreak;
- (double)previous_bestMoveValue;
- (unsigned long long)previous_bestStandGoalValue;
- (unsigned long long)previous_bestStandStreak;
- (unsigned long long)previous_bestStandValue;
- (unsigned long long)previous_currentExerciseStreak;
- (unsigned long long)previous_currentMoveStreak;
- (unsigned long long)previous_currentStandStreak;
- (long long)previous_storeValuesValidBeforeSummaryIndex;
- (unsigned long long)previous_totalExerciseGoalsAttempted;
- (unsigned long long)previous_totalExerciseGoalsMade;
- (unsigned long long)previous_totalMoveGoalsAttempted;
- (unsigned long long)previous_totalMoveGoalsMade;
- (unsigned long long)previous_totalStandGoalsAttempted;
- (unsigned long long)previous_totalStandGoalsMade;
- (id)profile;
- (bool)resetForNewInboxValues;
- (void)setAddedAchievements:(id)arg1;
- (void)setBestExerciseGoalValue:(double)arg1;
- (void)setBestExerciseStreak:(unsigned long long)arg1;
- (void)setBestExerciseValue:(double)arg1;
- (void)setBestMoveGoalValue:(double)arg1;
- (void)setBestMoveStreak:(unsigned long long)arg1;
- (void)setBestMoveValue:(double)arg1;
- (void)setBestStandGoalValue:(unsigned long long)arg1;
- (void)setBestStandStreak:(unsigned long long)arg1;
- (void)setBestStandValue:(unsigned long long)arg1;
- (void)setBestStepCount:(unsigned long long)arg1;
- (void)setCommitsForIntegrationTesting:(bool)arg1;
- (void)setCurrentExerciseStreak:(unsigned long long)arg1;
- (void)setCurrentMoveStreak:(unsigned long long)arg1;
- (void)setCurrentRunError:(id)arg1;
- (void)setCurrentRunErroredPropertyKey:(id)arg1;
- (void)setCurrentStandStreak:(unsigned long long)arg1;
- (void)setCurrentValues:(id)arg1;
- (void)setDatabaseIdentifier:(id)arg1;
- (bool)setDatabaseIdentifier:(id)arg1 error:(id*)arg2;
- (void)setDate:(id)arg1 forKey:(id)arg2;
- (void)setDaysMeetingAllGoals:(unsigned long long)arg1 forMonthOffset:(long long)arg2;
- (void)setDaysMeetingExerciseGoal:(unsigned long long)arg1 forMonthOffset:(long long)arg2;
- (void)setDaysMeetingExerciseGoalByFactorOfTwo:(unsigned long long)arg1 forMonthOffset:(long long)arg2;
- (void)setDaysMeetingMoveGoal:(unsigned long long)arg1 forMonthOffset:(long long)arg2;
- (void)setDaysMeetingMoveGoalByFactorOfTwo:(unsigned long long)arg1 forMonthOffset:(long long)arg2;
- (void)setDaysMeetingStandGoal:(unsigned long long)arg1 forMonthOffset:(long long)arg2;
- (void)setDaysMeetingStandGoalByFactorOfTwo:(unsigned long long)arg1 forMonthOffset:(long long)arg2;
- (void)setDefaultsDomain:(id)arg1;
- (void)setDidCommitAchievementsHandler:(id /* block */)arg1;
- (void)setDouble:(double)arg1 forKey:(id)arg2;
- (void)setInt64:(long long)arg1 forKey:(id)arg2;
- (void)setLastStepCount:(unsigned long long)arg1;
- (void)setLastValues:(id)arg1;
- (void)setMockedCommittedAchievements:(id)arg1;
- (void)setMode:(long long)arg1;
- (void)setMostRecentWorkoutAnchor:(long long)arg1;
- (void)setProfile:(id)arg1;
- (void)setStoreValuesValidBeforeDate:(id)arg1;
- (void)setStoreValuesValidBeforeSummaryIndex:(long long)arg1;
- (void)setTotalDistanceInMeters:(double)arg1 forMonthOffset:(long long)arg2;
- (void)setTotalExerciseGoalsAttempted:(unsigned long long)arg1;
- (void)setTotalExerciseGoalsMade:(unsigned long long)arg1;
- (void)setTotalExerciseValue:(double)arg1 forMonthOffset:(long long)arg2;
- (void)setTotalMoveGoalsAttempted:(unsigned long long)arg1;
- (void)setTotalMoveGoalsMade:(unsigned long long)arg1;
- (void)setTotalMoveValue:(double)arg1 forMonthOffset:(long long)arg2;
- (void)setTotalStandGoalsAttempted:(unsigned long long)arg1;
- (void)setTotalStandGoalsMade:(unsigned long long)arg1;
- (void)setTotalStandValue:(double)arg1 forMonthOffset:(long long)arg2;
- (void)setUnsignedInteger:(unsigned long long)arg1 forKey:(id)arg2;
- (id)storeValuesValidBeforeDate;
- (long long)storeValuesValidBeforeSummaryIndex;
- (double)totalDistanceInMetersForMonthOffset:(long long)arg1;
- (unsigned long long)totalExerciseGoalsAttempted;
- (unsigned long long)totalExerciseGoalsMade;
- (double)totalExerciseValueForMonthOffset:(long long)arg1;
- (unsigned long long)totalMoveGoalsAttempted;
- (unsigned long long)totalMoveGoalsMade;
- (double)totalMoveValueForMonthOffset:(long long)arg1;
- (unsigned long long)totalStandGoalsAttempted;
- (unsigned long long)totalStandGoalsMade;
- (double)totalStandValueForMonthOffset:(long long)arg1;
- (id)unalertedAchievements;
- (id)uncommittedAchievements;
- (unsigned long long)unsignedIntegerForKey:(id)arg1;

@end
