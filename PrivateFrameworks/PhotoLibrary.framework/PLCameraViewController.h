/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class PLCameraView;

@interface PLCameraViewController : UIViewController {
    PLCameraView *_cameraView;
}

- (BOOL)_displaysFullScreen;
- (void)_editabilityChanged:(id)arg1;
- (void)cameraView:(id)arg1 photoSaved:(id)arg2;
- (void)cameraViewCancelled:(id)arg1;
- (BOOL)cameraViewShouldShowIris:(id)arg1;
- (BOOL)cameraViewShouldShowPreviewAfterSelection:(id)arg1;
- (BOOL)cameraViewShouldShowProgressWhileCapturing:(id)arg1;
- (void)dealloc;
- (void)loadView;
- (void)setAllowsEditing:(BOOL)arg1;
- (void)setParentViewController:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end