
//
//  Test.m
//  Unity-iPhone
//
//  Created by 한호빈 on 2018. 3. 19..
//

#import <Foundation/Foundation.h>
#import <CloudKit/CloudKit.h>

extern "C"{
    
    void _AddData(){
        CKRecordID *recordID = [[CKRecordID alloc] initWithRecordName:@"1"];
        CKRecord *postRecrod = [[CKRecord alloc] initWithRecordType:@"Post" recordID:recordID];
        postRecrod[@"postText"] = @"Sample point of interest";
        postRecrod[@"postTitle"] = @"My favorite point of interest";
        CKDatabase *publicDatabase = [[CKContainer defaultContainer] publicCloudDatabase];
        [publicDatabase saveRecord:postRecrod completionHandler:^(CKRecord *record, NSError *error) {
            if(error) {
                NSLog(@"%@", error);
            } else {
                NSLog(@"Saved successfully");
            }
        }];
    }
    
    void _RequestData(){
        CKContainer *defaultContainer = [CKContainer defaultContainer];
        NSPredicate *predicate = [NSPredicate predicateWithFormat:@"TRUEPREDICATE"];
        CKDatabase *publicDatabase = [defaultContainer publicCloudDatabase];
        CKQuery *query = [[CKQuery alloc] initWithRecordType:@"Post" predicate:predicate];
        [publicDatabase performQuery:query inZoneWithID:nil completionHandler:^(NSArray *results, NSError *error) {
            if (!error) {
                NSLog(@"%@", results);
            } else {
                NSLog(@"%@", error);
            }
        }];
    }
    
    void _UpdateData(){
        CKContainer *defaultContainer = [CKContainer defaultContainer];
        CKDatabase *publicDatabase = [defaultContainer publicCloudDatabase];
        CKRecordID *recordID = [[CKRecordID alloc] initWithRecordName:@"1"];
        [publicDatabase fetchRecordWithID:recordID completionHandler:^(CKRecord *record, NSError *error) {
            if(error) {
                NSLog(@"%@", error);
            } else {
                record[@"postText"] = @"123 Beggers Canyon, Tatooine";;
                [publicDatabase saveRecord:record completionHandler:^(CKRecord *record, NSError *error) {
                    if(error) {
                        NSLog(@"Uh oh, there was an error updating ... %@", error);
                    } else {
                        NSLog(@"Updated record successfully");
                    }
                }];
            }
        }];
    }
    
    void _DeleteData(){
        CKContainer *defaultContainer = [CKContainer defaultContainer];
        CKDatabase *publicDatabase = [defaultContainer publicCloudDatabase];
        CKRecordID *recordID = [[CKRecordID alloc] initWithRecordName:@"1"];
        [publicDatabase deleteRecordWithID:recordID completionHandler:^(CKRecordID *recordID, NSError *error) {
            if(error) {
                NSLog(@"%@", error);
            } else {
                NSLog(@"Deleted record successfully");
            }
        }];
    }

}

