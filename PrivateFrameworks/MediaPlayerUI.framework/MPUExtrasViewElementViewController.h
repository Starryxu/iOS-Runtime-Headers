/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@class IKViewElement;

@interface MPUExtrasViewElementViewController : MPUExtrasElementViewController {
    BOOL _embedded;
    IKViewElement *_viewElement;
}

@property BOOL embedded;
@property(readonly) BOOL matchParentHeight;
@property(readonly) int preferredLayoutAttribute;
@property(readonly) id preferredLayoutGuide;
@property(retain) IKViewElement * viewElement;

- (void).cxx_destruct;
- (BOOL)embedded;
- (id)initWithViewElement:(id)arg1;
- (BOOL)matchParentHeight;
- (int)preferredLayoutAttribute;
- (id)preferredLayoutGuide;
- (void)setEmbedded:(BOOL)arg1;
- (void)setViewElement:(id)arg1;
- (void)viewDidLoad;
- (id)viewElement;

@end