#import <UIKit/UIKit.h>
#import <GPUImage/GPUImage.h>
#import "KSYUIView.h"
#import "KSYUIVC.h"
#import "KSYCtrlView.h"
#import "KSYPresetCfgView.h"
#import "KSYStateLableView.h"
#import "KSYVSStreamerKit.h"


@interface KSYVSController : KSYUIVC

// 切到当前VC后， 界面自动开启推流   /// forTest ///
@property BOOL  bAutoStart;     /// forTest ///

//初始化函数, 通过传入的presetCfgView来配置默认参数

/**
 @abstract   构造函数
 @param      presetCfgView    含有用户配置的启动参数的视图 (前一个页面)
 @discussion presetCfgView 为nil时, 使用默认参数
 */
- (id) initWithCfg:(KSYPresetCfgView*)presetCfgView;
// presetCfgs
@property (nonatomic, readonly) KSYPresetCfgView * presetCfgView;

#pragma mark - sub views
/// 摄像头的基本控制视图
@property (nonatomic, readonly) KSYCtrlView   * ctrlView;

// 推流地址 完整的URL
@property NSURL * hostURL;

#pragma mark - kit instance
@property (nonatomic, retain) KSYVSStreamerKit *vsKit;

#pragma mark -  streamBase instance
@property (nonatomic, retain) KSYStreamerBase *vsBase;

@end

