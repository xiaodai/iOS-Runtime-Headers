/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface CPColorPalettizer : NSObject {
     /* Encoded args for previous method: B12@0:4@8 */
     /* Encoded args for previous method: B12@0:4{_tagRgbQuad=CCCC}8 */
    struct _tagOctree { struct _tagOctreeNode {} *x1; unsigned short x2; unsigned short x3; struct _tagRgbQuad {} *x4; struct _tagLevelItem {} *x5[9]; } *m_pTree;
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*isDefaultPaletteSize;
}

- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)addNSColor:(id)arg1;
- (NSInteger)addPixelToOctree:(struct _tagOctree { struct _tagOctreeNode {} *x1; unsigned short x2; unsigned short x3; struct _tagRgbQuad {} *x4; struct _tagLevelItem {} *x5[9]; }*)arg1 pixel:(struct _tagRgbQuad { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; })arg2;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)addQuadColor:(struct _tagRgbQuad { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; })arg1;
- (NSInteger)createNodeOctree:(struct _tagOctreeNode {}**)arg1 parent:(struct _tagOctreeNode { struct _tagOctreeNode {} *x1; struct _tagOctreeNode {} *x2[8]; NSUInteger x3; struct _tagFPRgbTriple { NSUInteger x_4_1_1; NSUInteger x_4_1_2; NSUInteger x_4_1_3; } x4; unsigned short x5; }*)arg2;
- (NSInteger)createOctree:(struct _tagOctree {}**)arg1 maxPaletteSize:(unsigned short)arg2;
- (void)createPalette;
- (void)dealloc;
- (NSInteger)deleteListOctree:(struct _tagLevelItem { struct _tagLevelItem {} *x1; struct _tagOctreeNode {} *x2; }*)arg1;
- (NSInteger)deleteNodeOctree:(struct _tagOctreeNode { struct _tagOctreeNode {} *x1; struct _tagOctreeNode {} *x2[8]; NSUInteger x3; struct _tagFPRgbTriple { NSUInteger x_4_1_1; NSUInteger x_4_1_2; NSUInteger x_4_1_3; } x4; unsigned short x5; }*)arg1;
- (NSInteger)deleteOctree:(struct _tagOctree { struct _tagOctreeNode {} *x1; unsigned short x2; unsigned short x3; struct _tagRgbQuad {} *x4; struct _tagLevelItem {} *x5[9]; }*)arg1;
- (id)getPaletteData;
- (id)getPaletteDataRaw;
- (unsigned short)getPaletteFromOctree:(struct _tagOctreeNode { struct _tagOctreeNode {} *x1; struct _tagOctreeNode {} *x2[8]; NSUInteger x3; struct _tagFPRgbTriple { NSUInteger x_4_1_1; NSUInteger x_4_1_2; NSUInteger x_4_1_3; } x4; unsigned short x5; }*)arg1 paletteEntry:(struct _tagRgbQuad { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; }*)arg2 index:(unsigned short)arg3;
- (id)getPngPaletteData;
- (id)initWitDefaultPaletteSize;
- (id)initWitMaxPaletteSize:(NSUInteger)arg1;
- (NSUInteger)paletteColorCount;
- (NSInteger)paletteIndexFromNSColor:(id)arg1;
- (NSInteger)paletteIndexFromQuadColor:(struct _tagRgbQuad { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; })arg1;
- (NSInteger)reduceOctree:(struct _tagOctree { struct _tagOctreeNode {} *x1; unsigned short x2; unsigned short x3; struct _tagRgbQuad {} *x4; struct _tagLevelItem {} *x5[9]; }*)arg1;
- (NSInteger)rgbToIndexOctree:(struct _tagOctree { struct _tagOctreeNode {} *x1; unsigned short x2; unsigned short x3; struct _tagRgbQuad {} *x4; struct _tagLevelItem {} *x5[9]; }*)arg1 source:(struct _tagRgbQuad { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; })arg2 destination:(char *)arg3;

@end