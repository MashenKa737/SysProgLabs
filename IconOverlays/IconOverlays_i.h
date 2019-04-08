

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 06:14:07 2038
 */
/* Compiler settings for IconOverlays.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0622 
    protocol : all , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __IconOverlays_i_h__
#define __IconOverlays_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IIconOverlay1_FWD_DEFINED__
#define __IIconOverlay1_FWD_DEFINED__
typedef interface IIconOverlay1 IIconOverlay1;

#endif 	/* __IIconOverlay1_FWD_DEFINED__ */


#ifndef __IIconOverlay2_FWD_DEFINED__
#define __IIconOverlay2_FWD_DEFINED__
typedef interface IIconOverlay2 IIconOverlay2;

#endif 	/* __IIconOverlay2_FWD_DEFINED__ */


#ifndef __IIconOverlay3_FWD_DEFINED__
#define __IIconOverlay3_FWD_DEFINED__
typedef interface IIconOverlay3 IIconOverlay3;

#endif 	/* __IIconOverlay3_FWD_DEFINED__ */


#ifndef __IIconOverlay4_FWD_DEFINED__
#define __IIconOverlay4_FWD_DEFINED__
typedef interface IIconOverlay4 IIconOverlay4;

#endif 	/* __IIconOverlay4_FWD_DEFINED__ */


#ifndef __IIconOverlay5_FWD_DEFINED__
#define __IIconOverlay5_FWD_DEFINED__
typedef interface IIconOverlay5 IIconOverlay5;

#endif 	/* __IIconOverlay5_FWD_DEFINED__ */


#ifndef __IIconOverlay6_FWD_DEFINED__
#define __IIconOverlay6_FWD_DEFINED__
typedef interface IIconOverlay6 IIconOverlay6;

#endif 	/* __IIconOverlay6_FWD_DEFINED__ */


#ifndef __IIconOverlay7_FWD_DEFINED__
#define __IIconOverlay7_FWD_DEFINED__
typedef interface IIconOverlay7 IIconOverlay7;

#endif 	/* __IIconOverlay7_FWD_DEFINED__ */


#ifndef __IIconOverlay8_FWD_DEFINED__
#define __IIconOverlay8_FWD_DEFINED__
typedef interface IIconOverlay8 IIconOverlay8;

#endif 	/* __IIconOverlay8_FWD_DEFINED__ */


#ifndef __IIconOverlay9_FWD_DEFINED__
#define __IIconOverlay9_FWD_DEFINED__
typedef interface IIconOverlay9 IIconOverlay9;

#endif 	/* __IIconOverlay9_FWD_DEFINED__ */


#ifndef __IIconOverlay10_FWD_DEFINED__
#define __IIconOverlay10_FWD_DEFINED__
typedef interface IIconOverlay10 IIconOverlay10;

#endif 	/* __IIconOverlay10_FWD_DEFINED__ */


#ifndef __IIconOverlay11_FWD_DEFINED__
#define __IIconOverlay11_FWD_DEFINED__
typedef interface IIconOverlay11 IIconOverlay11;

#endif 	/* __IIconOverlay11_FWD_DEFINED__ */


#ifndef __IIconOverlay12_FWD_DEFINED__
#define __IIconOverlay12_FWD_DEFINED__
typedef interface IIconOverlay12 IIconOverlay12;

#endif 	/* __IIconOverlay12_FWD_DEFINED__ */


#ifndef __IIconOverlay13_FWD_DEFINED__
#define __IIconOverlay13_FWD_DEFINED__
typedef interface IIconOverlay13 IIconOverlay13;

#endif 	/* __IIconOverlay13_FWD_DEFINED__ */


#ifndef __IIconOverlay14_FWD_DEFINED__
#define __IIconOverlay14_FWD_DEFINED__
typedef interface IIconOverlay14 IIconOverlay14;

#endif 	/* __IIconOverlay14_FWD_DEFINED__ */


#ifndef __IIconOverlay15_FWD_DEFINED__
#define __IIconOverlay15_FWD_DEFINED__
typedef interface IIconOverlay15 IIconOverlay15;

#endif 	/* __IIconOverlay15_FWD_DEFINED__ */


#ifndef __IIconOverlay16_FWD_DEFINED__
#define __IIconOverlay16_FWD_DEFINED__
typedef interface IIconOverlay16 IIconOverlay16;

#endif 	/* __IIconOverlay16_FWD_DEFINED__ */


#ifndef __IIconOverlay17_FWD_DEFINED__
#define __IIconOverlay17_FWD_DEFINED__
typedef interface IIconOverlay17 IIconOverlay17;

#endif 	/* __IIconOverlay17_FWD_DEFINED__ */


#ifndef __IIconOverlay18_FWD_DEFINED__
#define __IIconOverlay18_FWD_DEFINED__
typedef interface IIconOverlay18 IIconOverlay18;

#endif 	/* __IIconOverlay18_FWD_DEFINED__ */


#ifndef __IIconOverlay19_FWD_DEFINED__
#define __IIconOverlay19_FWD_DEFINED__
typedef interface IIconOverlay19 IIconOverlay19;

#endif 	/* __IIconOverlay19_FWD_DEFINED__ */


#ifndef __IIconOverlay20_FWD_DEFINED__
#define __IIconOverlay20_FWD_DEFINED__
typedef interface IIconOverlay20 IIconOverlay20;

#endif 	/* __IIconOverlay20_FWD_DEFINED__ */


#ifndef __IIconOverlay21_FWD_DEFINED__
#define __IIconOverlay21_FWD_DEFINED__
typedef interface IIconOverlay21 IIconOverlay21;

#endif 	/* __IIconOverlay21_FWD_DEFINED__ */


#ifndef __IIconOverlay22_FWD_DEFINED__
#define __IIconOverlay22_FWD_DEFINED__
typedef interface IIconOverlay22 IIconOverlay22;

#endif 	/* __IIconOverlay22_FWD_DEFINED__ */


#ifndef __IconOverlay1_FWD_DEFINED__
#define __IconOverlay1_FWD_DEFINED__

#ifdef __cplusplus
typedef class IconOverlay1 IconOverlay1;
#else
typedef struct IconOverlay1 IconOverlay1;
#endif /* __cplusplus */

#endif 	/* __IconOverlay1_FWD_DEFINED__ */


#ifndef __IconOverlay2_FWD_DEFINED__
#define __IconOverlay2_FWD_DEFINED__

#ifdef __cplusplus
typedef class IconOverlay2 IconOverlay2;
#else
typedef struct IconOverlay2 IconOverlay2;
#endif /* __cplusplus */

#endif 	/* __IconOverlay2_FWD_DEFINED__ */


#ifndef __IconOverlay3_FWD_DEFINED__
#define __IconOverlay3_FWD_DEFINED__

#ifdef __cplusplus
typedef class IconOverlay3 IconOverlay3;
#else
typedef struct IconOverlay3 IconOverlay3;
#endif /* __cplusplus */

#endif 	/* __IconOverlay3_FWD_DEFINED__ */


#ifndef __IconOverlay4_FWD_DEFINED__
#define __IconOverlay4_FWD_DEFINED__

#ifdef __cplusplus
typedef class IconOverlay4 IconOverlay4;
#else
typedef struct IconOverlay4 IconOverlay4;
#endif /* __cplusplus */

#endif 	/* __IconOverlay4_FWD_DEFINED__ */


#ifndef __IconOverlay5_FWD_DEFINED__
#define __IconOverlay5_FWD_DEFINED__

#ifdef __cplusplus
typedef class IconOverlay5 IconOverlay5;
#else
typedef struct IconOverlay5 IconOverlay5;
#endif /* __cplusplus */

#endif 	/* __IconOverlay5_FWD_DEFINED__ */


#ifndef __IconOverlay6_FWD_DEFINED__
#define __IconOverlay6_FWD_DEFINED__

#ifdef __cplusplus
typedef class IconOverlay6 IconOverlay6;
#else
typedef struct IconOverlay6 IconOverlay6;
#endif /* __cplusplus */

#endif 	/* __IconOverlay6_FWD_DEFINED__ */


#ifndef __IconOverlay7_FWD_DEFINED__
#define __IconOverlay7_FWD_DEFINED__

#ifdef __cplusplus
typedef class IconOverlay7 IconOverlay7;
#else
typedef struct IconOverlay7 IconOverlay7;
#endif /* __cplusplus */

#endif 	/* __IconOverlay7_FWD_DEFINED__ */


#ifndef __IconOverlay8_FWD_DEFINED__
#define __IconOverlay8_FWD_DEFINED__

#ifdef __cplusplus
typedef class IconOverlay8 IconOverlay8;
#else
typedef struct IconOverlay8 IconOverlay8;
#endif /* __cplusplus */

#endif 	/* __IconOverlay8_FWD_DEFINED__ */


#ifndef __IconOverlay9_FWD_DEFINED__
#define __IconOverlay9_FWD_DEFINED__

#ifdef __cplusplus
typedef class IconOverlay9 IconOverlay9;
#else
typedef struct IconOverlay9 IconOverlay9;
#endif /* __cplusplus */

#endif 	/* __IconOverlay9_FWD_DEFINED__ */


#ifndef __IconOverlay10_FWD_DEFINED__
#define __IconOverlay10_FWD_DEFINED__

#ifdef __cplusplus
typedef class IconOverlay10 IconOverlay10;
#else
typedef struct IconOverlay10 IconOverlay10;
#endif /* __cplusplus */

#endif 	/* __IconOverlay10_FWD_DEFINED__ */


#ifndef __IconOverlay11_FWD_DEFINED__
#define __IconOverlay11_FWD_DEFINED__

#ifdef __cplusplus
typedef class IconOverlay11 IconOverlay11;
#else
typedef struct IconOverlay11 IconOverlay11;
#endif /* __cplusplus */

#endif 	/* __IconOverlay11_FWD_DEFINED__ */


#ifndef __IconOverlay12_FWD_DEFINED__
#define __IconOverlay12_FWD_DEFINED__

#ifdef __cplusplus
typedef class IconOverlay12 IconOverlay12;
#else
typedef struct IconOverlay12 IconOverlay12;
#endif /* __cplusplus */

#endif 	/* __IconOverlay12_FWD_DEFINED__ */


#ifndef __IconOverlay13_FWD_DEFINED__
#define __IconOverlay13_FWD_DEFINED__

#ifdef __cplusplus
typedef class IconOverlay13 IconOverlay13;
#else
typedef struct IconOverlay13 IconOverlay13;
#endif /* __cplusplus */

#endif 	/* __IconOverlay13_FWD_DEFINED__ */


#ifndef __IconOverlay14_FWD_DEFINED__
#define __IconOverlay14_FWD_DEFINED__

#ifdef __cplusplus
typedef class IconOverlay14 IconOverlay14;
#else
typedef struct IconOverlay14 IconOverlay14;
#endif /* __cplusplus */

#endif 	/* __IconOverlay14_FWD_DEFINED__ */


#ifndef __IconOverlay15_FWD_DEFINED__
#define __IconOverlay15_FWD_DEFINED__

#ifdef __cplusplus
typedef class IconOverlay15 IconOverlay15;
#else
typedef struct IconOverlay15 IconOverlay15;
#endif /* __cplusplus */

#endif 	/* __IconOverlay15_FWD_DEFINED__ */


#ifndef __IconOverlay16_FWD_DEFINED__
#define __IconOverlay16_FWD_DEFINED__

#ifdef __cplusplus
typedef class IconOverlay16 IconOverlay16;
#else
typedef struct IconOverlay16 IconOverlay16;
#endif /* __cplusplus */

#endif 	/* __IconOverlay16_FWD_DEFINED__ */


#ifndef __IconOverlay17_FWD_DEFINED__
#define __IconOverlay17_FWD_DEFINED__

#ifdef __cplusplus
typedef class IconOverlay17 IconOverlay17;
#else
typedef struct IconOverlay17 IconOverlay17;
#endif /* __cplusplus */

#endif 	/* __IconOverlay17_FWD_DEFINED__ */


#ifndef __IconOverlay18_FWD_DEFINED__
#define __IconOverlay18_FWD_DEFINED__

#ifdef __cplusplus
typedef class IconOverlay18 IconOverlay18;
#else
typedef struct IconOverlay18 IconOverlay18;
#endif /* __cplusplus */

#endif 	/* __IconOverlay18_FWD_DEFINED__ */


#ifndef __IconOverlay19_FWD_DEFINED__
#define __IconOverlay19_FWD_DEFINED__

#ifdef __cplusplus
typedef class IconOverlay19 IconOverlay19;
#else
typedef struct IconOverlay19 IconOverlay19;
#endif /* __cplusplus */

#endif 	/* __IconOverlay19_FWD_DEFINED__ */


#ifndef __IconOverlay20_FWD_DEFINED__
#define __IconOverlay20_FWD_DEFINED__

#ifdef __cplusplus
typedef class IconOverlay20 IconOverlay20;
#else
typedef struct IconOverlay20 IconOverlay20;
#endif /* __cplusplus */

#endif 	/* __IconOverlay20_FWD_DEFINED__ */


#ifndef __IconOverlay21_FWD_DEFINED__
#define __IconOverlay21_FWD_DEFINED__

#ifdef __cplusplus
typedef class IconOverlay21 IconOverlay21;
#else
typedef struct IconOverlay21 IconOverlay21;
#endif /* __cplusplus */

#endif 	/* __IconOverlay21_FWD_DEFINED__ */


#ifndef __IconOverlay22_FWD_DEFINED__
#define __IconOverlay22_FWD_DEFINED__

#ifdef __cplusplus
typedef class IconOverlay22 IconOverlay22;
#else
typedef struct IconOverlay22 IconOverlay22;
#endif /* __cplusplus */

#endif 	/* __IconOverlay22_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "shobjidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IIconOverlay1_INTERFACE_DEFINED__
#define __IIconOverlay1_INTERFACE_DEFINED__

/* interface IIconOverlay1 */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IIconOverlay1;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8367e43c-23f1-440f-a2c4-0a93475c2b81")
    IIconOverlay1 : public IDispatch
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct IIconOverlay1Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIconOverlay1 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIconOverlay1 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIconOverlay1 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IIconOverlay1 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IIconOverlay1 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IIconOverlay1 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IIconOverlay1 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } IIconOverlay1Vtbl;

    interface IIconOverlay1
    {
        CONST_VTBL struct IIconOverlay1Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIconOverlay1_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIconOverlay1_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIconOverlay1_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIconOverlay1_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IIconOverlay1_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IIconOverlay1_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IIconOverlay1_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIconOverlay1_INTERFACE_DEFINED__ */


#ifndef __IIconOverlay2_INTERFACE_DEFINED__
#define __IIconOverlay2_INTERFACE_DEFINED__

/* interface IIconOverlay2 */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IIconOverlay2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("e48267af-80a7-4a66-bfd5-6f7ef1479c89")
    IIconOverlay2 : public IDispatch
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct IIconOverlay2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIconOverlay2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIconOverlay2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIconOverlay2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IIconOverlay2 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IIconOverlay2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IIconOverlay2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IIconOverlay2 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } IIconOverlay2Vtbl;

    interface IIconOverlay2
    {
        CONST_VTBL struct IIconOverlay2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIconOverlay2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIconOverlay2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIconOverlay2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIconOverlay2_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IIconOverlay2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IIconOverlay2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IIconOverlay2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIconOverlay2_INTERFACE_DEFINED__ */


#ifndef __IIconOverlay3_INTERFACE_DEFINED__
#define __IIconOverlay3_INTERFACE_DEFINED__

/* interface IIconOverlay3 */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IIconOverlay3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1d00e6a4-41fb-4c5c-8a2b-b815754779d4")
    IIconOverlay3 : public IDispatch
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct IIconOverlay3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIconOverlay3 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIconOverlay3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIconOverlay3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IIconOverlay3 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IIconOverlay3 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IIconOverlay3 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IIconOverlay3 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } IIconOverlay3Vtbl;

    interface IIconOverlay3
    {
        CONST_VTBL struct IIconOverlay3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIconOverlay3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIconOverlay3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIconOverlay3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIconOverlay3_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IIconOverlay3_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IIconOverlay3_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IIconOverlay3_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIconOverlay3_INTERFACE_DEFINED__ */


#ifndef __IIconOverlay4_INTERFACE_DEFINED__
#define __IIconOverlay4_INTERFACE_DEFINED__

/* interface IIconOverlay4 */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IIconOverlay4;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3e0fdffe-268d-4158-8264-4984c3a9ac6b")
    IIconOverlay4 : public IDispatch
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct IIconOverlay4Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIconOverlay4 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIconOverlay4 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIconOverlay4 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IIconOverlay4 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IIconOverlay4 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IIconOverlay4 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IIconOverlay4 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } IIconOverlay4Vtbl;

    interface IIconOverlay4
    {
        CONST_VTBL struct IIconOverlay4Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIconOverlay4_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIconOverlay4_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIconOverlay4_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIconOverlay4_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IIconOverlay4_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IIconOverlay4_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IIconOverlay4_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIconOverlay4_INTERFACE_DEFINED__ */


#ifndef __IIconOverlay5_INTERFACE_DEFINED__
#define __IIconOverlay5_INTERFACE_DEFINED__

/* interface IIconOverlay5 */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IIconOverlay5;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("58121658-b4f6-430a-a491-ea775f013968")
    IIconOverlay5 : public IDispatch
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct IIconOverlay5Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIconOverlay5 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIconOverlay5 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIconOverlay5 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IIconOverlay5 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IIconOverlay5 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IIconOverlay5 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IIconOverlay5 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } IIconOverlay5Vtbl;

    interface IIconOverlay5
    {
        CONST_VTBL struct IIconOverlay5Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIconOverlay5_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIconOverlay5_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIconOverlay5_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIconOverlay5_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IIconOverlay5_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IIconOverlay5_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IIconOverlay5_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIconOverlay5_INTERFACE_DEFINED__ */


#ifndef __IIconOverlay6_INTERFACE_DEFINED__
#define __IIconOverlay6_INTERFACE_DEFINED__

/* interface IIconOverlay6 */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IIconOverlay6;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("26a3f671-849d-4901-835c-2b70483f80a0")
    IIconOverlay6 : public IDispatch
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct IIconOverlay6Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIconOverlay6 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIconOverlay6 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIconOverlay6 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IIconOverlay6 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IIconOverlay6 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IIconOverlay6 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IIconOverlay6 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } IIconOverlay6Vtbl;

    interface IIconOverlay6
    {
        CONST_VTBL struct IIconOverlay6Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIconOverlay6_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIconOverlay6_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIconOverlay6_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIconOverlay6_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IIconOverlay6_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IIconOverlay6_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IIconOverlay6_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIconOverlay6_INTERFACE_DEFINED__ */


#ifndef __IIconOverlay7_INTERFACE_DEFINED__
#define __IIconOverlay7_INTERFACE_DEFINED__

/* interface IIconOverlay7 */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IIconOverlay7;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("eced72ba-5fb9-461d-9fdc-71ca873c41f7")
    IIconOverlay7 : public IDispatch
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct IIconOverlay7Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIconOverlay7 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIconOverlay7 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIconOverlay7 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IIconOverlay7 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IIconOverlay7 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IIconOverlay7 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IIconOverlay7 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } IIconOverlay7Vtbl;

    interface IIconOverlay7
    {
        CONST_VTBL struct IIconOverlay7Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIconOverlay7_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIconOverlay7_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIconOverlay7_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIconOverlay7_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IIconOverlay7_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IIconOverlay7_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IIconOverlay7_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIconOverlay7_INTERFACE_DEFINED__ */


#ifndef __IIconOverlay8_INTERFACE_DEFINED__
#define __IIconOverlay8_INTERFACE_DEFINED__

/* interface IIconOverlay8 */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IIconOverlay8;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("f987e61f-fa11-4c72-b6fb-fbbeecb4f293")
    IIconOverlay8 : public IDispatch
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct IIconOverlay8Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIconOverlay8 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIconOverlay8 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIconOverlay8 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IIconOverlay8 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IIconOverlay8 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IIconOverlay8 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IIconOverlay8 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } IIconOverlay8Vtbl;

    interface IIconOverlay8
    {
        CONST_VTBL struct IIconOverlay8Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIconOverlay8_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIconOverlay8_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIconOverlay8_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIconOverlay8_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IIconOverlay8_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IIconOverlay8_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IIconOverlay8_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIconOverlay8_INTERFACE_DEFINED__ */


#ifndef __IIconOverlay9_INTERFACE_DEFINED__
#define __IIconOverlay9_INTERFACE_DEFINED__

/* interface IIconOverlay9 */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IIconOverlay9;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3ea29e6e-9209-4788-a9c1-e0f447afeb7f")
    IIconOverlay9 : public IDispatch
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct IIconOverlay9Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIconOverlay9 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIconOverlay9 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIconOverlay9 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IIconOverlay9 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IIconOverlay9 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IIconOverlay9 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IIconOverlay9 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } IIconOverlay9Vtbl;

    interface IIconOverlay9
    {
        CONST_VTBL struct IIconOverlay9Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIconOverlay9_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIconOverlay9_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIconOverlay9_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIconOverlay9_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IIconOverlay9_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IIconOverlay9_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IIconOverlay9_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIconOverlay9_INTERFACE_DEFINED__ */


#ifndef __IIconOverlay10_INTERFACE_DEFINED__
#define __IIconOverlay10_INTERFACE_DEFINED__

/* interface IIconOverlay10 */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IIconOverlay10;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("95e601c1-ac44-495e-808e-967093be4ee1")
    IIconOverlay10 : public IDispatch
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct IIconOverlay10Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIconOverlay10 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIconOverlay10 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIconOverlay10 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IIconOverlay10 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IIconOverlay10 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IIconOverlay10 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IIconOverlay10 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } IIconOverlay10Vtbl;

    interface IIconOverlay10
    {
        CONST_VTBL struct IIconOverlay10Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIconOverlay10_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIconOverlay10_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIconOverlay10_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIconOverlay10_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IIconOverlay10_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IIconOverlay10_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IIconOverlay10_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIconOverlay10_INTERFACE_DEFINED__ */


#ifndef __IIconOverlay11_INTERFACE_DEFINED__
#define __IIconOverlay11_INTERFACE_DEFINED__

/* interface IIconOverlay11 */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IIconOverlay11;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("22e11026-d969-496b-a22a-3e8c544d8ce9")
    IIconOverlay11 : public IDispatch
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct IIconOverlay11Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIconOverlay11 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIconOverlay11 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIconOverlay11 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IIconOverlay11 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IIconOverlay11 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IIconOverlay11 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IIconOverlay11 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } IIconOverlay11Vtbl;

    interface IIconOverlay11
    {
        CONST_VTBL struct IIconOverlay11Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIconOverlay11_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIconOverlay11_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIconOverlay11_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIconOverlay11_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IIconOverlay11_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IIconOverlay11_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IIconOverlay11_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIconOverlay11_INTERFACE_DEFINED__ */


#ifndef __IIconOverlay12_INTERFACE_DEFINED__
#define __IIconOverlay12_INTERFACE_DEFINED__

/* interface IIconOverlay12 */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IIconOverlay12;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4477fa5d-e837-4199-af95-b5af89c5a9f2")
    IIconOverlay12 : public IDispatch
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct IIconOverlay12Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIconOverlay12 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIconOverlay12 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIconOverlay12 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IIconOverlay12 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IIconOverlay12 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IIconOverlay12 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IIconOverlay12 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } IIconOverlay12Vtbl;

    interface IIconOverlay12
    {
        CONST_VTBL struct IIconOverlay12Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIconOverlay12_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIconOverlay12_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIconOverlay12_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIconOverlay12_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IIconOverlay12_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IIconOverlay12_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IIconOverlay12_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIconOverlay12_INTERFACE_DEFINED__ */


#ifndef __IIconOverlay13_INTERFACE_DEFINED__
#define __IIconOverlay13_INTERFACE_DEFINED__

/* interface IIconOverlay13 */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IIconOverlay13;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("72d82646-65e5-42f5-8d24-f3e44cf84e55")
    IIconOverlay13 : public IDispatch
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct IIconOverlay13Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIconOverlay13 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIconOverlay13 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIconOverlay13 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IIconOverlay13 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IIconOverlay13 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IIconOverlay13 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IIconOverlay13 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } IIconOverlay13Vtbl;

    interface IIconOverlay13
    {
        CONST_VTBL struct IIconOverlay13Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIconOverlay13_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIconOverlay13_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIconOverlay13_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIconOverlay13_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IIconOverlay13_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IIconOverlay13_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IIconOverlay13_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIconOverlay13_INTERFACE_DEFINED__ */


#ifndef __IIconOverlay14_INTERFACE_DEFINED__
#define __IIconOverlay14_INTERFACE_DEFINED__

/* interface IIconOverlay14 */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IIconOverlay14;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("68b457fa-7dd6-4413-b7f2-9de50ddb5ca2")
    IIconOverlay14 : public IDispatch
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct IIconOverlay14Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIconOverlay14 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIconOverlay14 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIconOverlay14 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IIconOverlay14 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IIconOverlay14 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IIconOverlay14 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IIconOverlay14 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } IIconOverlay14Vtbl;

    interface IIconOverlay14
    {
        CONST_VTBL struct IIconOverlay14Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIconOverlay14_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIconOverlay14_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIconOverlay14_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIconOverlay14_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IIconOverlay14_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IIconOverlay14_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IIconOverlay14_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIconOverlay14_INTERFACE_DEFINED__ */


#ifndef __IIconOverlay15_INTERFACE_DEFINED__
#define __IIconOverlay15_INTERFACE_DEFINED__

/* interface IIconOverlay15 */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IIconOverlay15;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("b3a2aa96-b3b5-4193-a075-d9143ea93571")
    IIconOverlay15 : public IDispatch
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct IIconOverlay15Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIconOverlay15 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIconOverlay15 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIconOverlay15 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IIconOverlay15 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IIconOverlay15 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IIconOverlay15 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IIconOverlay15 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } IIconOverlay15Vtbl;

    interface IIconOverlay15
    {
        CONST_VTBL struct IIconOverlay15Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIconOverlay15_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIconOverlay15_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIconOverlay15_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIconOverlay15_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IIconOverlay15_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IIconOverlay15_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IIconOverlay15_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIconOverlay15_INTERFACE_DEFINED__ */


#ifndef __IIconOverlay16_INTERFACE_DEFINED__
#define __IIconOverlay16_INTERFACE_DEFINED__

/* interface IIconOverlay16 */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IIconOverlay16;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("18fd3825-d436-406b-a9a0-d31e123a3173")
    IIconOverlay16 : public IDispatch
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct IIconOverlay16Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIconOverlay16 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIconOverlay16 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIconOverlay16 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IIconOverlay16 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IIconOverlay16 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IIconOverlay16 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IIconOverlay16 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } IIconOverlay16Vtbl;

    interface IIconOverlay16
    {
        CONST_VTBL struct IIconOverlay16Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIconOverlay16_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIconOverlay16_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIconOverlay16_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIconOverlay16_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IIconOverlay16_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IIconOverlay16_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IIconOverlay16_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIconOverlay16_INTERFACE_DEFINED__ */


#ifndef __IIconOverlay17_INTERFACE_DEFINED__
#define __IIconOverlay17_INTERFACE_DEFINED__

/* interface IIconOverlay17 */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IIconOverlay17;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("66f0cf5a-9222-445c-b1d2-e674eb4d5c21")
    IIconOverlay17 : public IDispatch
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct IIconOverlay17Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIconOverlay17 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIconOverlay17 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIconOverlay17 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IIconOverlay17 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IIconOverlay17 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IIconOverlay17 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IIconOverlay17 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } IIconOverlay17Vtbl;

    interface IIconOverlay17
    {
        CONST_VTBL struct IIconOverlay17Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIconOverlay17_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIconOverlay17_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIconOverlay17_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIconOverlay17_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IIconOverlay17_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IIconOverlay17_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IIconOverlay17_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIconOverlay17_INTERFACE_DEFINED__ */


#ifndef __IIconOverlay18_INTERFACE_DEFINED__
#define __IIconOverlay18_INTERFACE_DEFINED__

/* interface IIconOverlay18 */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IIconOverlay18;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("16c8c700-ca21-49a8-a03c-0732a63ed51d")
    IIconOverlay18 : public IDispatch
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct IIconOverlay18Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIconOverlay18 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIconOverlay18 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIconOverlay18 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IIconOverlay18 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IIconOverlay18 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IIconOverlay18 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IIconOverlay18 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } IIconOverlay18Vtbl;

    interface IIconOverlay18
    {
        CONST_VTBL struct IIconOverlay18Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIconOverlay18_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIconOverlay18_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIconOverlay18_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIconOverlay18_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IIconOverlay18_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IIconOverlay18_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IIconOverlay18_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIconOverlay18_INTERFACE_DEFINED__ */


#ifndef __IIconOverlay19_INTERFACE_DEFINED__
#define __IIconOverlay19_INTERFACE_DEFINED__

/* interface IIconOverlay19 */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IIconOverlay19;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("b6dcdf69-663e-4c39-9409-6661f01351ed")
    IIconOverlay19 : public IDispatch
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct IIconOverlay19Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIconOverlay19 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIconOverlay19 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIconOverlay19 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IIconOverlay19 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IIconOverlay19 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IIconOverlay19 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IIconOverlay19 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } IIconOverlay19Vtbl;

    interface IIconOverlay19
    {
        CONST_VTBL struct IIconOverlay19Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIconOverlay19_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIconOverlay19_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIconOverlay19_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIconOverlay19_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IIconOverlay19_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IIconOverlay19_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IIconOverlay19_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIconOverlay19_INTERFACE_DEFINED__ */


#ifndef __IIconOverlay20_INTERFACE_DEFINED__
#define __IIconOverlay20_INTERFACE_DEFINED__

/* interface IIconOverlay20 */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IIconOverlay20;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2412fc21-8483-428a-9471-41a598efa729")
    IIconOverlay20 : public IDispatch
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct IIconOverlay20Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIconOverlay20 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIconOverlay20 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIconOverlay20 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IIconOverlay20 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IIconOverlay20 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IIconOverlay20 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IIconOverlay20 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } IIconOverlay20Vtbl;

    interface IIconOverlay20
    {
        CONST_VTBL struct IIconOverlay20Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIconOverlay20_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIconOverlay20_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIconOverlay20_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIconOverlay20_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IIconOverlay20_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IIconOverlay20_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IIconOverlay20_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIconOverlay20_INTERFACE_DEFINED__ */


#ifndef __IIconOverlay21_INTERFACE_DEFINED__
#define __IIconOverlay21_INTERFACE_DEFINED__

/* interface IIconOverlay21 */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IIconOverlay21;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4a38205b-12d0-48ae-ba0b-9afd8fcfa949")
    IIconOverlay21 : public IDispatch
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct IIconOverlay21Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIconOverlay21 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIconOverlay21 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIconOverlay21 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IIconOverlay21 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IIconOverlay21 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IIconOverlay21 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IIconOverlay21 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } IIconOverlay21Vtbl;

    interface IIconOverlay21
    {
        CONST_VTBL struct IIconOverlay21Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIconOverlay21_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIconOverlay21_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIconOverlay21_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIconOverlay21_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IIconOverlay21_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IIconOverlay21_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IIconOverlay21_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIconOverlay21_INTERFACE_DEFINED__ */


#ifndef __IIconOverlay22_INTERFACE_DEFINED__
#define __IIconOverlay22_INTERFACE_DEFINED__

/* interface IIconOverlay22 */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IIconOverlay22;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("f6eca174-8e3d-45da-b360-8fcbf714ba08")
    IIconOverlay22 : public IDispatch
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct IIconOverlay22Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIconOverlay22 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIconOverlay22 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIconOverlay22 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IIconOverlay22 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IIconOverlay22 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IIconOverlay22 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IIconOverlay22 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } IIconOverlay22Vtbl;

    interface IIconOverlay22
    {
        CONST_VTBL struct IIconOverlay22Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIconOverlay22_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIconOverlay22_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIconOverlay22_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIconOverlay22_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IIconOverlay22_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IIconOverlay22_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IIconOverlay22_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIconOverlay22_INTERFACE_DEFINED__ */



#ifndef __IconOverlaysLib_LIBRARY_DEFINED__
#define __IconOverlaysLib_LIBRARY_DEFINED__

/* library IconOverlaysLib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_IconOverlaysLib;

EXTERN_C const CLSID CLSID_IconOverlay1;

#ifdef __cplusplus

class DECLSPEC_UUID("4648b826-7b25-4e19-b92b-528e48fdeb5a")
IconOverlay1;
#endif

EXTERN_C const CLSID CLSID_IconOverlay2;

#ifdef __cplusplus

class DECLSPEC_UUID("1e14a7c0-27d6-4168-85d2-be0aa4dc685a")
IconOverlay2;
#endif

EXTERN_C const CLSID CLSID_IconOverlay3;

#ifdef __cplusplus

class DECLSPEC_UUID("f55634d6-e3c4-4ac0-9999-c558259b4b0f")
IconOverlay3;
#endif

EXTERN_C const CLSID CLSID_IconOverlay4;

#ifdef __cplusplus

class DECLSPEC_UUID("47fa4950-1def-413b-a120-d58e9465d6ab")
IconOverlay4;
#endif

EXTERN_C const CLSID CLSID_IconOverlay5;

#ifdef __cplusplus

class DECLSPEC_UUID("a6a481ea-64be-496c-8bdd-860af17d64c6")
IconOverlay5;
#endif

EXTERN_C const CLSID CLSID_IconOverlay6;

#ifdef __cplusplus

class DECLSPEC_UUID("1e9e4ba3-af01-4287-903b-e5ff33d52408")
IconOverlay6;
#endif

EXTERN_C const CLSID CLSID_IconOverlay7;

#ifdef __cplusplus

class DECLSPEC_UUID("3a76984f-7366-48c7-95da-43b43ad3ff14")
IconOverlay7;
#endif

EXTERN_C const CLSID CLSID_IconOverlay8;

#ifdef __cplusplus

class DECLSPEC_UUID("e1b359ae-e2fd-494a-ba6d-49c290d9dfc5")
IconOverlay8;
#endif

EXTERN_C const CLSID CLSID_IconOverlay9;

#ifdef __cplusplus

class DECLSPEC_UUID("ded889d6-8dc8-4dda-b6e3-9f0137de5853")
IconOverlay9;
#endif

EXTERN_C const CLSID CLSID_IconOverlay10;

#ifdef __cplusplus

class DECLSPEC_UUID("1ee547dd-4a08-420b-9f2f-dfc37fb58bba")
IconOverlay10;
#endif

EXTERN_C const CLSID CLSID_IconOverlay11;

#ifdef __cplusplus

class DECLSPEC_UUID("72aa201c-bd9f-42aa-8b21-5d0ae126d2e5")
IconOverlay11;
#endif

EXTERN_C const CLSID CLSID_IconOverlay12;

#ifdef __cplusplus

class DECLSPEC_UUID("e6f463f5-3f9b-458e-a41a-58d5f435c0e4")
IconOverlay12;
#endif

EXTERN_C const CLSID CLSID_IconOverlay13;

#ifdef __cplusplus

class DECLSPEC_UUID("25ec6ddf-4e4d-48e7-ba5a-134f4e7dfbfa")
IconOverlay13;
#endif

EXTERN_C const CLSID CLSID_IconOverlay14;

#ifdef __cplusplus

class DECLSPEC_UUID("0886a01f-4969-4bcd-8fdf-817ffadcd953")
IconOverlay14;
#endif

EXTERN_C const CLSID CLSID_IconOverlay15;

#ifdef __cplusplus

class DECLSPEC_UUID("cffc85fa-766a-46ff-a30d-aa82c01a420e")
IconOverlay15;
#endif

EXTERN_C const CLSID CLSID_IconOverlay16;

#ifdef __cplusplus

class DECLSPEC_UUID("8be7ac72-6bba-43ad-ab38-720554f6f8f4")
IconOverlay16;
#endif

EXTERN_C const CLSID CLSID_IconOverlay17;

#ifdef __cplusplus

class DECLSPEC_UUID("59bc5828-fe6c-4b19-8b43-34ac6cce2c52")
IconOverlay17;
#endif

EXTERN_C const CLSID CLSID_IconOverlay18;

#ifdef __cplusplus

class DECLSPEC_UUID("ce157591-fe37-4af9-81bc-a3f05a3afd9b")
IconOverlay18;
#endif

EXTERN_C const CLSID CLSID_IconOverlay19;

#ifdef __cplusplus

class DECLSPEC_UUID("e19243d1-7019-4bae-9aad-1bc7c5592c82")
IconOverlay19;
#endif

EXTERN_C const CLSID CLSID_IconOverlay20;

#ifdef __cplusplus

class DECLSPEC_UUID("fd1dbfae-6cbc-426d-a414-b27fc6c45145")
IconOverlay20;
#endif

EXTERN_C const CLSID CLSID_IconOverlay21;

#ifdef __cplusplus

class DECLSPEC_UUID("fd9a4735-94b0-429f-9b25-b6dfbb3cd442")
IconOverlay21;
#endif

EXTERN_C const CLSID CLSID_IconOverlay22;

#ifdef __cplusplus

class DECLSPEC_UUID("e1aabcae-b63c-43ae-8f79-858ea805b365")
IconOverlay22;
#endif
#endif /* __IconOverlaysLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


