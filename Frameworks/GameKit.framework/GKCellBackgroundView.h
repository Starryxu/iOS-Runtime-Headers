/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKUITheme, NSMutableArray, UIImage;



@interface GKCellBackgroundView : UIView 
{
    GKUITheme *_theme;
    NSMutableArray *_backgroundDrawDescriptors;
    struct { 
        unsigned int drawSelected : 1; 
        unsigned int groupedTableViewStyle : 1; 
    } _gkViewFlags;
    NSInteger _backgroundStyle;
    struct CGSize { 
        float width; 
        float height; 
    } _fillImagePhase;
    UIImage *_fillImage;
    BOOL _ignoreFillPhaseYOffset;
    BOOL _gapAbove;
    BOOL _gapBelow;
    NSUInteger _columnCount;
    NSInteger _selectedColumn;
    UIImage *_separatorImage;
    NSUInteger _cellCount;
    float _cellGapWidth;
    NSInteger _selectedCell;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _borderInsets;
}

@property BOOL grouped;
@property BOOL drawSelected;
@property UIEdgeInsets borderInsets;
@property NSInteger selectedCell;
@property float cellGapWidth;
@property NSUInteger cellCount;
@property(retain) UIImage *separatorImage;
@property NSInteger selectedColumn;
@property NSUInteger columnCount;
@property BOOL gapBelow;
@property BOOL gapAbove;
@property BOOL ignoreFillPhaseYOffset;
@property(retain) UIImage *fillImage;
@property CGSize fillImagePhase;
@property NSInteger backgroundStyle;
@property(retain) NSArray *backgroundDrawDescriptors;
@property(retain) GKUITheme *theme;

+ (id)buttonCellBackgroundWithTheme:(id)arg1;
+ (id)selectedButtonCellBackgroundWithTheme:(id)arg1;
+ (id)cellBackgroundWithTheme:(id)arg1;
+ (id)selectedCellBackgroundWithTheme:(id)arg1;
+ (id)cellBackgroundWithTheme:(id)arg1 tableViewStyle:(NSInteger)arg2;
+ (id)selectedCellBackgroundWithTheme:(id)arg1 tableViewStyle:(NSInteger)arg2;

- (void)setBorderInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })borderInsets;
- (void)setTheme:(id)arg1;
- (void)setFillImage:(id)arg1;
- (NSUInteger)cellCount;
- (id)theme;
- (NSInteger)backgroundStyle;
- (void)setBackgroundStyle:(NSInteger)arg1;
- (NSUInteger)columnCount;
- (void)setColumnCount:(NSUInteger)arg1;
- (NSInteger)sectionLocation;
- (void)setSectionLocation:(NSInteger)arg1 animated:(BOOL)arg2;
- (id)init;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)drawDescriptorForCellIndex:(NSInteger)arg1;
- (BOOL)grouped;
- (void)setGrouped:(BOOL)arg1;
- (void)setFillImagePhase:(struct CGSize { float x1; float x2; })arg1;
- (BOOL)hasKnownLocations;
- (void)configureBorderImages;
- (BOOL)drawSelected;
- (void)setDrawSelected:(BOOL)arg1;
- (void)setSectionLocations:(id)arg1;
- (void)setCellCount:(NSUInteger)arg1;
- (void)setSelectedColumn:(NSInteger)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })totalBorderInsetsForCellIndex:(NSInteger)arg1;
- (void)drawFillInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)drawBorderInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 cellIndex:(NSInteger)arg2;
- (BOOL)shouldDrawBorderAtIndex:(NSInteger)arg1;
- (NSInteger)selectedCell;
- (void)setSelectedCell:(NSInteger)arg1;
- (float)cellGapWidth;
- (void)setCellGapWidth:(float)arg1;
- (id)separatorImage;
- (void)setSeparatorImage:(id)arg1;
- (NSInteger)selectedColumn;
- (BOOL)gapBelow;
- (BOOL)gapAbove;
- (BOOL)ignoreFillPhaseYOffset;
- (void)setIgnoreFillPhaseYOffset:(BOOL)arg1;
- (id)fillImage;
- (struct CGSize { float x1; float x2; })fillImagePhase;
- (id)backgroundDrawDescriptors;
- (void)setBackgroundDrawDescriptors:(id)arg1;
- (void)setGapAbove:(BOOL)arg1;
- (void)setGapBelow:(BOOL)arg1;

@end