//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface WNNoteItemUtilBase : NSObject
{
    int _type;
    id <WNNoteRichEditDelegate> _delegate;
}

@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) __weak id <WNNoteRichEditDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)insertItem:(id)arg1 isUpdate:(BOOL)arg2 isConfigData:(BOOL)arg3;
- (id)getIconSelectedName;
- (id)getIconHLName;
- (id)getIconName;
- (id)getTitle;
- (void)onClickItem:(id)arg1;
- (void)onAddItemBegin:(id)arg1;

@end
