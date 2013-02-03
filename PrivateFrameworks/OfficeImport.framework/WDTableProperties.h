/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class WDStyle, NSDate, WDBorder, WDShading, WDDocument;

@interface WDTableProperties : NSObject <NSCopying> {
    struct { 
        WDStyle *baseStyle; 
        BOOL baseStyleOverridden; 
        WDShading *shading; 
        BOOL shadingOverridden; 
        WDBorder *topBorder; 
        BOOL topBorderOverridden; 
        WDBorder *leftBorder; 
        BOOL leftBorderOverridden; 
        WDBorder *bottomBorder; 
        BOOL bottomBorderOverridden; 
        WDBorder *rightBorder; 
        BOOL rightBorderOverridden; 
        WDBorder *insideHorizontalBorder; 
        BOOL insideHorizontalBorderOverridden; 
        WDBorder *insideVerticalBorder; 
        BOOL insideVerticalBorderOverridden; 
        NSInteger justification; 
        BOOL justificationOverridden; 
        NSInteger alignment; 
        BOOL alignmentOverridden; 
        NSInteger width; 
        BOOL widthOverridden; 
        NSInteger widthType; 
        BOOL widthTypeOverridden; 
        short indent; 
        BOOL indentOverridden; 
        NSInteger indentType; 
        BOOL indentTypeOverridden; 
        short cellSpacing; 
        BOOL cellSpacingOverridden; 
        NSInteger cellSpacingType; 
        BOOL cellSpacingTypeOverridden; 
        NSInteger verticalAnchor; 
        BOOL verticalAnchorOverridden; 
        NSInteger horizontalAnchor; 
        BOOL horizontalAnchorOverridden; 
        NSInteger verticalPosition; 
        BOOL verticalPositionOverridden; 
        NSInteger horizontalPosition; 
        BOOL horizontalPositionOverridden; 
        NSInteger leftDistanceFromText; 
        BOOL leftDistanceFromTextOverridden; 
        NSInteger topDistanceFromText; 
        BOOL topDistanceFromTextOverridden; 
        NSInteger rightDistanceFromText; 
        BOOL rightDistanceFromTextOverridden; 
        NSInteger bottomDistanceFromText; 
        BOOL bottomDistanceFromTextOverridden; 
        NSInteger deleted; 
        BOOL deletedOverridden; 
        NSInteger edited; 
        BOOL editedOverridden; 
        NSInteger formattingChanged; 
        BOOL formattingChangedOverridden; 
        unsigned short indexToAuthorIDOfDeletion; 
        BOOL indexToAuthorIDOfDeletionOverridden; 
        unsigned short indexToAuthorIDOfEdit; 
        BOOL indexToAuthorIDOfEditOverridden; 
        unsigned short indexToAuthorIDOfFormattingChange; 
        BOOL indexToAuthorIDOfFormattingChangeOverridden; 
        NSDate *deletionDate; 
        BOOL deletionDateOverridden; 
        NSDate *editDate; 
        BOOL editDateOverridden; 
        NSDate *formattingChangeDate; 
        BOOL formattingChangeDateOverridden; 
    struct { 
        WDStyle *baseStyle; 
        BOOL baseStyleOverridden; 
        WDShading *shading; 
        BOOL shadingOverridden; 
        WDBorder *topBorder; 
        BOOL topBorderOverridden; 
        WDBorder *leftBorder; 
        BOOL leftBorderOverridden; 
        WDBorder *bottomBorder; 
        BOOL bottomBorderOverridden; 
        WDBorder *rightBorder; 
        BOOL rightBorderOverridden; 
        WDBorder *insideHorizontalBorder; 
        BOOL insideHorizontalBorderOverridden; 
        WDBorder *insideVerticalBorder; 
        BOOL insideVerticalBorderOverridden; 
        NSInteger justification; 
        BOOL justificationOverridden; 
        NSInteger alignment; 
        BOOL alignmentOverridden; 
        NSInteger width; 
        BOOL widthOverridden; 
        NSInteger widthType; 
        BOOL widthTypeOverridden; 
        short indent; 
        BOOL indentOverridden; 
        NSInteger indentType; 
        BOOL indentTypeOverridden; 
        short cellSpacing; 
        BOOL cellSpacingOverridden; 
        NSInteger cellSpacingType; 
        BOOL cellSpacingTypeOverridden; 
        NSInteger verticalAnchor; 
        BOOL verticalAnchorOverridden; 
        NSInteger horizontalAnchor; 
        BOOL horizontalAnchorOverridden; 
        NSInteger verticalPosition; 
        BOOL verticalPositionOverridden; 
        NSInteger horizontalPosition; 
        BOOL horizontalPositionOverridden; 
        NSInteger leftDistanceFromText; 
        BOOL leftDistanceFromTextOverridden; 
        NSInteger topDistanceFromText; 
        BOOL topDistanceFromTextOverridden; 
        NSInteger rightDistanceFromText; 
        BOOL rightDistanceFromTextOverridden; 
        NSInteger bottomDistanceFromText; 
        BOOL bottomDistanceFromTextOverridden; 
        NSInteger deleted; 
        BOOL deletedOverridden; 
        NSInteger edited; 
        BOOL editedOverridden; 
        NSInteger formattingChanged; 
        BOOL formattingChangedOverridden; 
        unsigned short indexToAuthorIDOfDeletion; 
        BOOL indexToAuthorIDOfDeletionOverridden; 
        unsigned short indexToAuthorIDOfEdit; 
        BOOL indexToAuthorIDOfEditOverridden; 
        unsigned short indexToAuthorIDOfFormattingChange; 
        BOOL indexToAuthorIDOfFormattingChangeOverridden; 
        NSDate *deletionDate; 
        BOOL deletionDateOverridden; 
        NSDate *editDate; 
        BOOL editDateOverridden; 
        NSDate *formattingChangeDate; 
        BOOL formattingChangeDateOverridden; 
    WDDocument *mDocument;
    BOOL mOriginal;
    } mOriginalProperties;
    BOOL mResolved;
    BOOL mTracked;
    } mTrackedProperties;
}

- (NSInteger)alignment;
- (id)baseStyle;
- (id)bottomBorder;
- (long)bottomDistanceFromText;
- (short)cellSpacing;
- (NSInteger)cellSpacingType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (NSInteger)deleted;
- (id)deletionDate;
- (id)document;
- (id)editDate;
- (NSInteger)edited;
- (id)formattingChangeDate;
- (NSInteger)formattingChanged;
- (NSInteger)horizontalAnchor;
- (long)horizontalPosition;
- (short)indent;
- (NSInteger)indentType;
- (unsigned short)indexToAuthorIDOfDeletion;
- (unsigned short)indexToAuthorIDOfEdit;
- (unsigned short)indexToAuthorIDOfFormattingChange;
- (id)init;
- (id)initWithDocument:(id)arg1;
- (id)insideHorizontalBorder;
- (id)insideVerticalBorder;
- (BOOL)isAlignmentOverridden;
- (BOOL)isBaseStyleOverridden;
- (BOOL)isBottomBorderOverridden;
- (BOOL)isBottomDistanceFromTextOverridden;
- (BOOL)isCellSpacingOverridden;
- (BOOL)isCellSpacingTypeOverridden;
- (BOOL)isDeletedOverridden;
- (BOOL)isDeletionDateOverridden;
- (BOOL)isEditDateOverridden;
- (BOOL)isEditedOverridden;
- (BOOL)isFormattingChangeDateOverridden;
- (BOOL)isFormattingChangedOverridden;
- (BOOL)isHorizontalAnchorOverridden;
- (BOOL)isHorizontalPositionOverridden;
- (BOOL)isIndentOverridden;
- (BOOL)isIndentTypeOverridden;
- (BOOL)isIndexToAuthorIDOfDeletionOverridden;
- (BOOL)isIndexToAuthorIDOfEditOverridden;
- (BOOL)isIndexToAuthorIDOfFormattingChangeOverridden;
- (BOOL)isInsideHorizontalBorderOverridden;
- (BOOL)isInsideVerticalBorderOverridden;
- (BOOL)isJustificationOverridden;
- (BOOL)isLeftBorderOverridden;
- (BOOL)isLeftDistanceFromTextOverridden;
- (BOOL)isRightBorderOverridden;
- (BOOL)isRightDistanceFromTextOverridden;
- (BOOL)isShadingOverridden;
- (BOOL)isTableFloating;
- (BOOL)isTopBorderOverridden;
- (BOOL)isTopDistanceFromTextOverridden;
- (BOOL)isVerticalAnchorOverridden;
- (BOOL)isVerticalPositionOverridden;
- (BOOL)isWidthOverridden;
- (BOOL)isWidthTypeOverridden;
- (NSInteger)justification;
- (id)leftBorder;
- (long)leftDistanceFromText;
- (id)mutableBottomBorder;
- (id)mutableInsideHorizontalBorder;
- (id)mutableInsideVerticalBorder;
- (id)mutableLeftBorder;
- (id)mutableRightBorder;
- (id)mutableShading;
- (id)mutableTopBorder;
- (NSInteger)resolveMode;
- (id)rightBorder;
- (long)rightDistanceFromText;
- (void)setAlignment:(NSInteger)arg1;
- (void)setBaseStyle:(id)arg1;
- (void)setBottomDistanceFromText:(long)arg1;
- (void)setCellSpacing:(short)arg1;
- (void)setCellSpacingType:(NSInteger)arg1;
- (void)setDeleted:(NSInteger)arg1;
- (void)setDeletionDate:(id)arg1;
- (void)setEditDate:(id)arg1;
- (void)setEdited:(NSInteger)arg1;
- (void)setFormattingChangeDate:(id)arg1;
- (void)setFormattingChanged:(NSInteger)arg1;
- (void)setHorizontalAnchor:(NSInteger)arg1;
- (void)setHorizontalPosition:(long)arg1;
- (void)setIndent:(short)arg1;
- (void)setIndentType:(NSInteger)arg1;
- (void)setIndexToAuthorIDOfDeletion:(unsigned short)arg1;
- (void)setIndexToAuthorIDOfEdit:(unsigned short)arg1;
- (void)setIndexToAuthorIDOfFormattingChange:(unsigned short)arg1;
- (void)setJustification:(NSInteger)arg1;
- (void)setLeftDistanceFromText:(long)arg1;
- (void)setResolveMode:(NSInteger)arg1;
- (void)setRightDistanceFromText:(long)arg1;
- (void)setTopDistanceFromText:(long)arg1;
- (void)setVerticalAnchor:(NSInteger)arg1;
- (void)setVerticalPosition:(long)arg1;
- (void)setWidth:(long)arg1;
- (void)setWidthType:(NSInteger)arg1;
- (id)shading;
- (id)topBorder;
- (long)topDistanceFromText;
- (NSInteger)verticalAnchor;
- (long)verticalPosition;
- (long)width;
- (NSInteger)widthType;

@end