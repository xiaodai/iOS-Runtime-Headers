/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface WebScriptObjectPrivate : NSObject {
    struct JSObject { int (**x1)(); struct PropertyMap { 
            struct Rep {} *m_singleEntryKey; 
            union $_212 { 
                struct JSValue {} *singleEntryValue; 
                struct PropertyMapHashTable {} *table; 
            } m_u; 
            short m_singleEntryAttributes; 
            unsigned int m_getterSetterFlag : 1; 
            unsigned int m_usingTable : 1; 
    struct RootObject { NSInteger x1; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x2; void *x3; struct ProtectedPtr<KJS::JSGlobalObject> { 
            struct JSGlobalObject {} *m_ptr; 
        } x4; struct HashCountedSet<KJS::JSObject*,WTF::PtrHash<KJS::JSObject*>,WTF::HashTraits<KJS::JSObject*> > { 
            struct HashMap<KJS::JSObject*,unsigned int,WTF::PtrHash<KJS::JSObject*>,WTF::HashTraits<KJS::JSObject*>,WTF::HashTraits<unsigned int> > { 
                struct HashTable<int,std::pair<int, int>,WTF::PairFirstExtractor<std::pair<int, int> >,WTF::IntHash<int32_t>,WTF::PairHashTraits<WTF::HashTraits<int32_t>, WTF::HashTraits<int32_t> >,WTF::HashTraits<int32_t> > { 
                    struct pair<int,int> {} *m_table; 
                    NSInteger m_tableSize; 
                    NSInteger m_tableSizeMask; 
                    NSInteger m_keyCount; 
                    NSInteger m_deletedCount; 
                } m_impl; 
            } m_impl; 
        } x5; struct HashSet<KJS::RuntimeObjectImp*,WTF::PtrHash<KJS::RuntimeObjectImp*>,WTF::HashTraits<KJS::RuntimeObjectImp*> > { 
            struct HashTable<int,int,WTF::IdentityExtractor<int>,WTF::IntHash<int32_t>,WTF::HashTraits<int32_t>,WTF::HashTraits<int32_t> > { 
                NSInteger *m_table; 
                NSInteger m_tableSize; 
                NSInteger m_tableSizeMask; 
                NSInteger m_keyCount; 
                NSInteger m_deletedCount; 
            } m_impl; 
    struct RootObject { NSInteger x1; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x2; void *x3; struct ProtectedPtr<KJS::JSGlobalObject> { 
            struct JSGlobalObject {} *m_ptr; 
        } x4; struct HashCountedSet<KJS::JSObject*,WTF::PtrHash<KJS::JSObject*>,WTF::HashTraits<KJS::JSObject*> > { 
            struct HashMap<KJS::JSObject*,unsigned int,WTF::PtrHash<KJS::JSObject*>,WTF::HashTraits<KJS::JSObject*>,WTF::HashTraits<unsigned int> > { 
                struct HashTable<int,std::pair<int, int>,WTF::PairFirstExtractor<std::pair<int, int> >,WTF::IntHash<int32_t>,WTF::PairHashTraits<WTF::HashTraits<int32_t>, WTF::HashTraits<int32_t> >,WTF::HashTraits<int32_t> > { 
                    struct pair<int,int> {} *m_table; 
                    NSInteger m_tableSize; 
                    NSInteger m_tableSizeMask; 
                    NSInteger m_keyCount; 
                    NSInteger m_deletedCount; 
                } m_impl; 
            } m_impl; 
        } x5; struct HashSet<KJS::RuntimeObjectImp*,WTF::PtrHash<KJS::RuntimeObjectImp*>,WTF::HashTraits<KJS::RuntimeObjectImp*> > { 
            struct HashTable<int,int,WTF::IdentityExtractor<int>,WTF::IntHash<int32_t>,WTF::HashTraits<int32_t>,WTF::HashTraits<int32_t> > { 
                NSInteger *m_table; 
                NSInteger m_tableSize; 
                NSInteger m_tableSizeMask; 
                NSInteger m_keyCount; 
                NSInteger m_deletedCount; 
            } m_impl; 
        } x2; struct JSValue {} *x3; } *imp;
    BOOL isCreatedByDOMWrapper;
        } x6; } *originRootObject;
        } x6; } *rootObject;
}

@end