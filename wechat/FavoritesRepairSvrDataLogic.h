//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "IMsgExt.h"
#import "PBMessageObserverDelegate.h"

@class FavoritesItemDB;

@interface FavoritesRepairSvrDataLogic : MMObject <IMsgExt, PBMessageObserverDelegate>
{
    FavoritesItemDB *_favItemDB;
}

- (void).cxx_destruct;
- (void)HandleCheckFavItemResp:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)processUploadFavItem:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)doCheckFavItem:(id)arg1;
- (void)initDB:(id)arg1;
- (void)dealloc;
- (id)init;

@end

