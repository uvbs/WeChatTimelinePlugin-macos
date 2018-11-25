//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMChatLogBaseCellView.h"

@class AVPlayer, AVPlayerLayer, NSString, NSView;

@interface MMChatLogSightCellView : MMChatLogBaseCellView
{
    AVPlayer *_player;
    AVPlayerLayer *_playerLayer;
    NSView *_playerView;
    NSString *_sightFilePath;
}

+ (double)cellHeightWithFavItemDataField:(id)arg1 parentMessage:(id)arg2 parentFavItem:(id)arg3 parentDataField:(id)arg4 constrainedToWidth:(double)arg5;
@property(retain, nonatomic) NSString *sightFilePath; // @synthesize sightFilePath=_sightFilePath;
@property(retain, nonatomic) NSView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) AVPlayerLayer *playerLayer; // @synthesize playerLayer=_playerLayer;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
- (void).cxx_destruct;
- (void)rePlay:(id)arg1;
- (void)stopAndClearPlayLayer;
- (void)play;
- (void)refreshPlayerLayer:(id)arg1;
- (void)layoutSightContentView;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
