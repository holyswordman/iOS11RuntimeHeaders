/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface _PFFetchPlanHeader : NSObject {
    NSManagedObjectContext * current_context;
    int (* entity_for_ek_funptr;
    NSFetchRequest * fetch_request;
    struct { 
        unsigned int principal_entity_has_subentities : 1; 
        unsigned int fetch_only_primary_keys : 1; 
        unsigned int fetch_results_style : 3; 
        unsigned int use_clean_memory : 1; 
        unsigned int _reserved : 26; 
    }  flags;
    unsigned int  requested_batch_size;
    NSSQLRowCache * row_cache;
    NSPersistentStore * sql_core;
    NSSQLModel * sql_model;
    NSSQLEntity * statement_entity;
}

@end
