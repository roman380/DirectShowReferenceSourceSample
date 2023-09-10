

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Tue Jan 19 04:14:07 2038
 */
/* Compiler settings for ReferenceSource.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0628 
    protocol : dce , ms_ext, c_ext, robust
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


#ifndef __ReferenceSource_h_h__
#define __ReferenceSource_h_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#ifndef DECLSPEC_XFGVIRT
#if defined(_CONTROL_FLOW_GUARD_XFG)
#define DECLSPEC_XFGVIRT(base, func) __declspec(xfg_virtual(base, func))
#else
#define DECLSPEC_XFGVIRT(base, func)
#endif
#endif

/* Forward Declarations */ 

#ifndef __PrivateCategory_FWD_DEFINED__
#define __PrivateCategory_FWD_DEFINED__

#ifdef __cplusplus
typedef class PrivateCategory PrivateCategory;
#else
typedef struct PrivateCategory PrivateCategory;
#endif /* __cplusplus */

#endif 	/* __PrivateCategory_FWD_DEFINED__ */


#ifndef __AboutPropertyPage_FWD_DEFINED__
#define __AboutPropertyPage_FWD_DEFINED__

#ifdef __cplusplus
typedef class AboutPropertyPage AboutPropertyPage;
#else
typedef struct AboutPropertyPage AboutPropertyPage;
#endif /* __cplusplus */

#endif 	/* __AboutPropertyPage_FWD_DEFINED__ */


#ifndef __ISourceFilterPinThreadTime_FWD_DEFINED__
#define __ISourceFilterPinThreadTime_FWD_DEFINED__
typedef interface ISourceFilterPinThreadTime ISourceFilterPinThreadTime;

#endif 	/* __ISourceFilterPinThreadTime_FWD_DEFINED__ */


#ifndef __IVideoSourceFilterSite_FWD_DEFINED__
#define __IVideoSourceFilterSite_FWD_DEFINED__
typedef interface IVideoSourceFilterSite IVideoSourceFilterSite;

#endif 	/* __IVideoSourceFilterSite_FWD_DEFINED__ */


#ifndef __IVideoSourceFilter_FWD_DEFINED__
#define __IVideoSourceFilter_FWD_DEFINED__
typedef interface IVideoSourceFilter IVideoSourceFilter;

#endif 	/* __IVideoSourceFilter_FWD_DEFINED__ */


#ifndef __VideoSourceFilter_FWD_DEFINED__
#define __VideoSourceFilter_FWD_DEFINED__

#ifdef __cplusplus
typedef class VideoSourceFilter VideoSourceFilter;
#else
typedef struct VideoSourceFilter VideoSourceFilter;
#endif /* __cplusplus */

#endif 	/* __VideoSourceFilter_FWD_DEFINED__ */


#ifndef __IAudioSourceFilterSite_FWD_DEFINED__
#define __IAudioSourceFilterSite_FWD_DEFINED__
typedef interface IAudioSourceFilterSite IAudioSourceFilterSite;

#endif 	/* __IAudioSourceFilterSite_FWD_DEFINED__ */


#ifndef __IAudioSourceFilter_FWD_DEFINED__
#define __IAudioSourceFilter_FWD_DEFINED__
typedef interface IAudioSourceFilter IAudioSourceFilter;

#endif 	/* __IAudioSourceFilter_FWD_DEFINED__ */


#ifndef __AudioSourceFilter_FWD_DEFINED__
#define __AudioSourceFilter_FWD_DEFINED__

#ifdef __cplusplus
typedef class AudioSourceFilter AudioSourceFilter;
#else
typedef struct AudioSourceFilter AudioSourceFilter;
#endif /* __cplusplus */

#endif 	/* __AudioSourceFilter_FWD_DEFINED__ */


#ifndef __ISourceFilterRegistryItem_FWD_DEFINED__
#define __ISourceFilterRegistryItem_FWD_DEFINED__
typedef interface ISourceFilterRegistryItem ISourceFilterRegistryItem;

#endif 	/* __ISourceFilterRegistryItem_FWD_DEFINED__ */


#ifndef __SourceFilterRegistryItem_FWD_DEFINED__
#define __SourceFilterRegistryItem_FWD_DEFINED__

#ifdef __cplusplus
typedef class SourceFilterRegistryItem SourceFilterRegistryItem;
#else
typedef struct SourceFilterRegistryItem SourceFilterRegistryItem;
#endif /* __cplusplus */

#endif 	/* __SourceFilterRegistryItem_FWD_DEFINED__ */


#ifndef __ISourceFilterRegistry_FWD_DEFINED__
#define __ISourceFilterRegistry_FWD_DEFINED__
typedef interface ISourceFilterRegistry ISourceFilterRegistry;

#endif 	/* __ISourceFilterRegistry_FWD_DEFINED__ */


#ifndef __VideoSourceFilterRegistry_FWD_DEFINED__
#define __VideoSourceFilterRegistry_FWD_DEFINED__

#ifdef __cplusplus
typedef class VideoSourceFilterRegistry VideoSourceFilterRegistry;
#else
typedef struct VideoSourceFilterRegistry VideoSourceFilterRegistry;
#endif /* __cplusplus */

#endif 	/* __VideoSourceFilterRegistry_FWD_DEFINED__ */


#ifndef __IVideoMediaSourceSite_FWD_DEFINED__
#define __IVideoMediaSourceSite_FWD_DEFINED__
typedef interface IVideoMediaSourceSite IVideoMediaSourceSite;

#endif 	/* __IVideoMediaSourceSite_FWD_DEFINED__ */


#ifndef __IVideoMediaSource_FWD_DEFINED__
#define __IVideoMediaSource_FWD_DEFINED__
typedef interface IVideoMediaSource IVideoMediaSource;

#endif 	/* __IVideoMediaSource_FWD_DEFINED__ */


#ifndef __VideoMediaSource_FWD_DEFINED__
#define __VideoMediaSource_FWD_DEFINED__

#ifdef __cplusplus
typedef class VideoMediaSource VideoMediaSource;
#else
typedef struct VideoMediaSource VideoMediaSource;
#endif /* __cplusplus */

#endif 	/* __VideoMediaSource_FWD_DEFINED__ */


#ifndef __IVideoMediaSourceTextureReader_FWD_DEFINED__
#define __IVideoMediaSourceTextureReader_FWD_DEFINED__
typedef interface IVideoMediaSourceTextureReader IVideoMediaSourceTextureReader;

#endif 	/* __IVideoMediaSourceTextureReader_FWD_DEFINED__ */


#ifndef __VideoMediaSourceTextureReader_FWD_DEFINED__
#define __VideoMediaSourceTextureReader_FWD_DEFINED__

#ifdef __cplusplus
typedef class VideoMediaSourceTextureReader VideoMediaSourceTextureReader;
#else
typedef struct VideoMediaSourceTextureReader VideoMediaSourceTextureReader;
#endif /* __cplusplus */

#endif 	/* __VideoMediaSourceTextureReader_FWD_DEFINED__ */


#ifndef __IAudioMediaSource_FWD_DEFINED__
#define __IAudioMediaSource_FWD_DEFINED__
typedef interface IAudioMediaSource IAudioMediaSource;

#endif 	/* __IAudioMediaSource_FWD_DEFINED__ */


#ifndef __AudioMediaSource_FWD_DEFINED__
#define __AudioMediaSource_FWD_DEFINED__

#ifdef __cplusplus
typedef class AudioMediaSource AudioMediaSource;
#else
typedef struct AudioMediaSource AudioMediaSource;
#endif /* __cplusplus */

#endif 	/* __AudioMediaSource_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __AlaxInfoDirectShowReferenceSource_LIBRARY_DEFINED__
#define __AlaxInfoDirectShowReferenceSource_LIBRARY_DEFINED__

/* library AlaxInfoDirectShowReferenceSource */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_AlaxInfoDirectShowReferenceSource;

EXTERN_C const CLSID CLSID_PrivateCategory;

#ifdef __cplusplus

class DECLSPEC_UUID("B5F73376-C62D-4048-A1FA-85B8564B9248")
PrivateCategory;
#endif

EXTERN_C const CLSID CLSID_AboutPropertyPage;

#ifdef __cplusplus

class DECLSPEC_UUID("1D4A0563-561B-4593-9C01-D311BB123BF3")
AboutPropertyPage;
#endif

#ifndef __ISourceFilterPinThreadTime_INTERFACE_DEFINED__
#define __ISourceFilterPinThreadTime_INTERFACE_DEFINED__

/* interface ISourceFilterPinThreadTime */
/* [unique][nonextensible][uuid][object] */ 


EXTERN_C const IID IID_ISourceFilterPinThreadTime;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("377C4603-43FE-4D1F-93C3-F84E64D769A4")
    ISourceFilterPinThreadTime : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetThreadTimes( 
            /* [out] */ DOUBLE *pfKernelTime,
            /* [out] */ DOUBLE *pfUserTime) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISourceFilterPinThreadTimeVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISourceFilterPinThreadTime * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISourceFilterPinThreadTime * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISourceFilterPinThreadTime * This);
        
        DECLSPEC_XFGVIRT(ISourceFilterPinThreadTime, GetThreadTimes)
        HRESULT ( STDMETHODCALLTYPE *GetThreadTimes )( 
            ISourceFilterPinThreadTime * This,
            /* [out] */ DOUBLE *pfKernelTime,
            /* [out] */ DOUBLE *pfUserTime);
        
        END_INTERFACE
    } ISourceFilterPinThreadTimeVtbl;

    interface ISourceFilterPinThreadTime
    {
        CONST_VTBL struct ISourceFilterPinThreadTimeVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISourceFilterPinThreadTime_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISourceFilterPinThreadTime_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISourceFilterPinThreadTime_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISourceFilterPinThreadTime_GetThreadTimes(This,pfKernelTime,pfUserTime)	\
    ( (This)->lpVtbl -> GetThreadTimes(This,pfKernelTime,pfUserTime) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISourceFilterPinThreadTime_INTERFACE_DEFINED__ */


#ifndef __IVideoSourceFilterSite_INTERFACE_DEFINED__
#define __IVideoSourceFilterSite_INTERFACE_DEFINED__

/* interface IVideoSourceFilterSite */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IVideoSourceFilterSite;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("20160FA4-BA89-4755-95C8-F46878DBE08B")
    IVideoSourceFilterSite : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE FilterMediaSample( 
            ULONG SampleIndex,
            LONGLONG StartTime,
            LONGLONG StopTime) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVideoSourceFilterSiteVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVideoSourceFilterSite * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVideoSourceFilterSite * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVideoSourceFilterSite * This);
        
        DECLSPEC_XFGVIRT(IVideoSourceFilterSite, FilterMediaSample)
        HRESULT ( STDMETHODCALLTYPE *FilterMediaSample )( 
            IVideoSourceFilterSite * This,
            ULONG SampleIndex,
            LONGLONG StartTime,
            LONGLONG StopTime);
        
        END_INTERFACE
    } IVideoSourceFilterSiteVtbl;

    interface IVideoSourceFilterSite
    {
        CONST_VTBL struct IVideoSourceFilterSiteVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVideoSourceFilterSite_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVideoSourceFilterSite_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVideoSourceFilterSite_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVideoSourceFilterSite_FilterMediaSample(This,SampleIndex,StartTime,StopTime)	\
    ( (This)->lpVtbl -> FilterMediaSample(This,SampleIndex,StartTime,StopTime) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVideoSourceFilterSite_INTERFACE_DEFINED__ */


#ifndef __IVideoSourceFilter_INTERFACE_DEFINED__
#define __IVideoSourceFilter_INTERFACE_DEFINED__

/* interface IVideoSourceFilter */
/* [unique][nonextensible][oleautomation][dual][uuid][object] */ 


EXTERN_C const IID IID_IVideoSourceFilter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B711A038-BF7D-49CF-89BF-18697776F6AF")
    IVideoSourceFilter : public IDispatch
    {
    public:
        virtual /* [nonbrowsable][hidden][propget][id] */ HRESULT STDMETHODCALLTYPE get_Configuration( 
            /* [retval][out] */ VARIANT *Configuration) = 0;
        
        virtual /* [nonbrowsable][hidden][propput][id] */ HRESULT STDMETHODCALLTYPE put_Configuration( 
            /* [in] */ VARIANT Configuration) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Live( 
            /* [retval][out] */ VARIANT_BOOL *Live) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Live( 
            /* [in] */ VARIANT_BOOL Live) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ResetMediaType( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SetMediaType( 
            /* [in] */ LONG SizeW,
            /* [in] */ LONG SizeH,
            /* [in] */ VARIANT Compression) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SetMediaTypeAspectRatio( 
            /* [in] */ LONG AspectRatioN,
            /* [in] */ LONG AspectRatioD) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SetMediaTypeRate( 
            /* [in] */ LONG RateN,
            /* [in] */ LONG RateD) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetSite( 
            /* [in] */ IVideoSourceFilterSite *Site) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PushMediaType( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVideoSourceFilterVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVideoSourceFilter * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVideoSourceFilter * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVideoSourceFilter * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IVideoSourceFilter * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IVideoSourceFilter * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IVideoSourceFilter * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IVideoSourceFilter * This,
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
        
        DECLSPEC_XFGVIRT(IVideoSourceFilter, get_Configuration)
        /* [nonbrowsable][hidden][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Configuration )( 
            IVideoSourceFilter * This,
            /* [retval][out] */ VARIANT *Configuration);
        
        DECLSPEC_XFGVIRT(IVideoSourceFilter, put_Configuration)
        /* [nonbrowsable][hidden][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Configuration )( 
            IVideoSourceFilter * This,
            /* [in] */ VARIANT Configuration);
        
        DECLSPEC_XFGVIRT(IVideoSourceFilter, get_Live)
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Live )( 
            IVideoSourceFilter * This,
            /* [retval][out] */ VARIANT_BOOL *Live);
        
        DECLSPEC_XFGVIRT(IVideoSourceFilter, put_Live)
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Live )( 
            IVideoSourceFilter * This,
            /* [in] */ VARIANT_BOOL Live);
        
        DECLSPEC_XFGVIRT(IVideoSourceFilter, ResetMediaType)
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ResetMediaType )( 
            IVideoSourceFilter * This);
        
        DECLSPEC_XFGVIRT(IVideoSourceFilter, SetMediaType)
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SetMediaType )( 
            IVideoSourceFilter * This,
            /* [in] */ LONG SizeW,
            /* [in] */ LONG SizeH,
            /* [in] */ VARIANT Compression);
        
        DECLSPEC_XFGVIRT(IVideoSourceFilter, SetMediaTypeAspectRatio)
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SetMediaTypeAspectRatio )( 
            IVideoSourceFilter * This,
            /* [in] */ LONG AspectRatioN,
            /* [in] */ LONG AspectRatioD);
        
        DECLSPEC_XFGVIRT(IVideoSourceFilter, SetMediaTypeRate)
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SetMediaTypeRate )( 
            IVideoSourceFilter * This,
            /* [in] */ LONG RateN,
            /* [in] */ LONG RateD);
        
        DECLSPEC_XFGVIRT(IVideoSourceFilter, SetSite)
        HRESULT ( STDMETHODCALLTYPE *SetSite )( 
            IVideoSourceFilter * This,
            /* [in] */ IVideoSourceFilterSite *Site);
        
        DECLSPEC_XFGVIRT(IVideoSourceFilter, PushMediaType)
        HRESULT ( STDMETHODCALLTYPE *PushMediaType )( 
            IVideoSourceFilter * This);
        
        END_INTERFACE
    } IVideoSourceFilterVtbl;

    interface IVideoSourceFilter
    {
        CONST_VTBL struct IVideoSourceFilterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVideoSourceFilter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVideoSourceFilter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVideoSourceFilter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVideoSourceFilter_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IVideoSourceFilter_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IVideoSourceFilter_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IVideoSourceFilter_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IVideoSourceFilter_get_Configuration(This,Configuration)	\
    ( (This)->lpVtbl -> get_Configuration(This,Configuration) ) 

#define IVideoSourceFilter_put_Configuration(This,Configuration)	\
    ( (This)->lpVtbl -> put_Configuration(This,Configuration) ) 

#define IVideoSourceFilter_get_Live(This,Live)	\
    ( (This)->lpVtbl -> get_Live(This,Live) ) 

#define IVideoSourceFilter_put_Live(This,Live)	\
    ( (This)->lpVtbl -> put_Live(This,Live) ) 

#define IVideoSourceFilter_ResetMediaType(This)	\
    ( (This)->lpVtbl -> ResetMediaType(This) ) 

#define IVideoSourceFilter_SetMediaType(This,SizeW,SizeH,Compression)	\
    ( (This)->lpVtbl -> SetMediaType(This,SizeW,SizeH,Compression) ) 

#define IVideoSourceFilter_SetMediaTypeAspectRatio(This,AspectRatioN,AspectRatioD)	\
    ( (This)->lpVtbl -> SetMediaTypeAspectRatio(This,AspectRatioN,AspectRatioD) ) 

#define IVideoSourceFilter_SetMediaTypeRate(This,RateN,RateD)	\
    ( (This)->lpVtbl -> SetMediaTypeRate(This,RateN,RateD) ) 

#define IVideoSourceFilter_SetSite(This,Site)	\
    ( (This)->lpVtbl -> SetSite(This,Site) ) 

#define IVideoSourceFilter_PushMediaType(This)	\
    ( (This)->lpVtbl -> PushMediaType(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVideoSourceFilter_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_VideoSourceFilter;

#ifdef __cplusplus

class DECLSPEC_UUID("94D757E4-1CBD-412E-979B-2DF85A4BC375")
VideoSourceFilter;
#endif

#ifndef __IAudioSourceFilterSite_INTERFACE_DEFINED__
#define __IAudioSourceFilterSite_INTERFACE_DEFINED__

/* interface IAudioSourceFilterSite */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IAudioSourceFilterSite;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("BAEC1AC6-9466-4B81-B78B-EC16D7B6580C")
    IAudioSourceFilterSite : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE FilterMediaSample( 
            ULONG SampleIndex,
            ULONG SampleCount,
            LONGLONG StartTime,
            LONGLONG StopTime) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAudioSourceFilterSiteVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAudioSourceFilterSite * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAudioSourceFilterSite * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAudioSourceFilterSite * This);
        
        DECLSPEC_XFGVIRT(IAudioSourceFilterSite, FilterMediaSample)
        HRESULT ( STDMETHODCALLTYPE *FilterMediaSample )( 
            IAudioSourceFilterSite * This,
            ULONG SampleIndex,
            ULONG SampleCount,
            LONGLONG StartTime,
            LONGLONG StopTime);
        
        END_INTERFACE
    } IAudioSourceFilterSiteVtbl;

    interface IAudioSourceFilterSite
    {
        CONST_VTBL struct IAudioSourceFilterSiteVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAudioSourceFilterSite_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAudioSourceFilterSite_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAudioSourceFilterSite_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAudioSourceFilterSite_FilterMediaSample(This,SampleIndex,SampleCount,StartTime,StopTime)	\
    ( (This)->lpVtbl -> FilterMediaSample(This,SampleIndex,SampleCount,StartTime,StopTime) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAudioSourceFilterSite_INTERFACE_DEFINED__ */


#ifndef __IAudioSourceFilter_INTERFACE_DEFINED__
#define __IAudioSourceFilter_INTERFACE_DEFINED__

/* interface IAudioSourceFilter */
/* [unique][nonextensible][oleautomation][dual][uuid][object] */ 


EXTERN_C const IID IID_IAudioSourceFilter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("499197FF-E5B1-4126-A634-4071EF081D7A")
    IAudioSourceFilter : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ResetMediaType( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SetMediaType( 
            /* [in] */ BSTR Subtype,
            /* [in] */ LONG SampleCount,
            /* [in] */ LONG ChannelCount,
            /* [in] */ LONG BitDepth) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SetMediaSampleDuration( 
            /* [in] */ LONG SampleCount) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Live( 
            /* [retval][out] */ VARIANT_BOOL *Live) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Live( 
            /* [in] */ VARIANT_BOOL Live) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetSite( 
            /* [in] */ IAudioSourceFilterSite *Site) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAudioSourceFilterVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAudioSourceFilter * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAudioSourceFilter * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAudioSourceFilter * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAudioSourceFilter * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAudioSourceFilter * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAudioSourceFilter * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAudioSourceFilter * This,
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
        
        DECLSPEC_XFGVIRT(IAudioSourceFilter, ResetMediaType)
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ResetMediaType )( 
            IAudioSourceFilter * This);
        
        DECLSPEC_XFGVIRT(IAudioSourceFilter, SetMediaType)
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SetMediaType )( 
            IAudioSourceFilter * This,
            /* [in] */ BSTR Subtype,
            /* [in] */ LONG SampleCount,
            /* [in] */ LONG ChannelCount,
            /* [in] */ LONG BitDepth);
        
        DECLSPEC_XFGVIRT(IAudioSourceFilter, SetMediaSampleDuration)
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SetMediaSampleDuration )( 
            IAudioSourceFilter * This,
            /* [in] */ LONG SampleCount);
        
        DECLSPEC_XFGVIRT(IAudioSourceFilter, get_Live)
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Live )( 
            IAudioSourceFilter * This,
            /* [retval][out] */ VARIANT_BOOL *Live);
        
        DECLSPEC_XFGVIRT(IAudioSourceFilter, put_Live)
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Live )( 
            IAudioSourceFilter * This,
            /* [in] */ VARIANT_BOOL Live);
        
        DECLSPEC_XFGVIRT(IAudioSourceFilter, SetSite)
        HRESULT ( STDMETHODCALLTYPE *SetSite )( 
            IAudioSourceFilter * This,
            /* [in] */ IAudioSourceFilterSite *Site);
        
        END_INTERFACE
    } IAudioSourceFilterVtbl;

    interface IAudioSourceFilter
    {
        CONST_VTBL struct IAudioSourceFilterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAudioSourceFilter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAudioSourceFilter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAudioSourceFilter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAudioSourceFilter_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAudioSourceFilter_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAudioSourceFilter_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAudioSourceFilter_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAudioSourceFilter_ResetMediaType(This)	\
    ( (This)->lpVtbl -> ResetMediaType(This) ) 

#define IAudioSourceFilter_SetMediaType(This,Subtype,SampleCount,ChannelCount,BitDepth)	\
    ( (This)->lpVtbl -> SetMediaType(This,Subtype,SampleCount,ChannelCount,BitDepth) ) 

#define IAudioSourceFilter_SetMediaSampleDuration(This,SampleCount)	\
    ( (This)->lpVtbl -> SetMediaSampleDuration(This,SampleCount) ) 

#define IAudioSourceFilter_get_Live(This,Live)	\
    ( (This)->lpVtbl -> get_Live(This,Live) ) 

#define IAudioSourceFilter_put_Live(This,Live)	\
    ( (This)->lpVtbl -> put_Live(This,Live) ) 

#define IAudioSourceFilter_SetSite(This,Site)	\
    ( (This)->lpVtbl -> SetSite(This,Site) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAudioSourceFilter_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_AudioSourceFilter;

#ifdef __cplusplus

class DECLSPEC_UUID("BF53D5EC-A137-4A3E-B7CF-B673568A9D8B")
AudioSourceFilter;
#endif

#ifndef __ISourceFilterRegistryItem_INTERFACE_DEFINED__
#define __ISourceFilterRegistryItem_INTERFACE_DEFINED__

/* interface ISourceFilterRegistryItem */
/* [unique][nonextensible][oleautomation][dual][uuid][object] */ 


EXTERN_C const IID IID_ISourceFilterRegistryItem;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("566B7401-F940-4B9F-AFB1-7D5BA698A642")
    ISourceFilterRegistryItem : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_InstanceName( 
            /* [retval][out] */ BSTR *psInstanceName) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Unregister( void) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_FriendlyName( 
            /* [retval][out] */ BSTR *psFriendlyName) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_FriendlyName( 
            /* [in] */ BSTR sFriendlyName) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Filter( 
            /* [retval][out] */ IDispatch **ppFilterDispatch) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Update( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISourceFilterRegistryItemVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISourceFilterRegistryItem * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISourceFilterRegistryItem * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISourceFilterRegistryItem * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISourceFilterRegistryItem * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISourceFilterRegistryItem * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISourceFilterRegistryItem * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISourceFilterRegistryItem * This,
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
        
        DECLSPEC_XFGVIRT(ISourceFilterRegistryItem, get_InstanceName)
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_InstanceName )( 
            ISourceFilterRegistryItem * This,
            /* [retval][out] */ BSTR *psInstanceName);
        
        DECLSPEC_XFGVIRT(ISourceFilterRegistryItem, Unregister)
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Unregister )( 
            ISourceFilterRegistryItem * This);
        
        DECLSPEC_XFGVIRT(ISourceFilterRegistryItem, get_FriendlyName)
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FriendlyName )( 
            ISourceFilterRegistryItem * This,
            /* [retval][out] */ BSTR *psFriendlyName);
        
        DECLSPEC_XFGVIRT(ISourceFilterRegistryItem, put_FriendlyName)
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_FriendlyName )( 
            ISourceFilterRegistryItem * This,
            /* [in] */ BSTR sFriendlyName);
        
        DECLSPEC_XFGVIRT(ISourceFilterRegistryItem, get_Filter)
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Filter )( 
            ISourceFilterRegistryItem * This,
            /* [retval][out] */ IDispatch **ppFilterDispatch);
        
        DECLSPEC_XFGVIRT(ISourceFilterRegistryItem, Update)
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Update )( 
            ISourceFilterRegistryItem * This);
        
        END_INTERFACE
    } ISourceFilterRegistryItemVtbl;

    interface ISourceFilterRegistryItem
    {
        CONST_VTBL struct ISourceFilterRegistryItemVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISourceFilterRegistryItem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISourceFilterRegistryItem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISourceFilterRegistryItem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISourceFilterRegistryItem_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISourceFilterRegistryItem_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISourceFilterRegistryItem_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISourceFilterRegistryItem_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISourceFilterRegistryItem_get_InstanceName(This,psInstanceName)	\
    ( (This)->lpVtbl -> get_InstanceName(This,psInstanceName) ) 

#define ISourceFilterRegistryItem_Unregister(This)	\
    ( (This)->lpVtbl -> Unregister(This) ) 

#define ISourceFilterRegistryItem_get_FriendlyName(This,psFriendlyName)	\
    ( (This)->lpVtbl -> get_FriendlyName(This,psFriendlyName) ) 

#define ISourceFilterRegistryItem_put_FriendlyName(This,sFriendlyName)	\
    ( (This)->lpVtbl -> put_FriendlyName(This,sFriendlyName) ) 

#define ISourceFilterRegistryItem_get_Filter(This,ppFilterDispatch)	\
    ( (This)->lpVtbl -> get_Filter(This,ppFilterDispatch) ) 

#define ISourceFilterRegistryItem_Update(This)	\
    ( (This)->lpVtbl -> Update(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISourceFilterRegistryItem_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_SourceFilterRegistryItem;

#ifdef __cplusplus

class DECLSPEC_UUID("A1E39601-7B97-472A-B0B5-A495E9F2655B")
SourceFilterRegistryItem;
#endif

#ifndef __ISourceFilterRegistry_INTERFACE_DEFINED__
#define __ISourceFilterRegistry_INTERFACE_DEFINED__

/* interface ISourceFilterRegistry */
/* [unique][nonextensible][oleautomation][dual][uuid][object] */ 


EXTERN_C const IID IID_ISourceFilterRegistry;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A22CED7B-2633-4CAE-8F02-5C331DDB04DC")
    ISourceFilterRegistry : public IDispatch
    {
    public:
        virtual /* [restricted][propget][id] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **ppEnum) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ VARIANT vIndex,
            /* [retval][out] */ ISourceFilterRegistryItem **ppItem) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ LONG *pnCount) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Register( 
            /* [in] */ BSTR sFriendlyName,
            /* [in] */ IDispatch *pFilterDispatch,
            /* [retval][out] */ ISourceFilterRegistryItem **ppItem) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISourceFilterRegistryVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISourceFilterRegistry * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISourceFilterRegistry * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISourceFilterRegistry * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISourceFilterRegistry * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISourceFilterRegistry * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISourceFilterRegistry * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISourceFilterRegistry * This,
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
        
        DECLSPEC_XFGVIRT(ISourceFilterRegistry, get__NewEnum)
        /* [restricted][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            ISourceFilterRegistry * This,
            /* [retval][out] */ IUnknown **ppEnum);
        
        DECLSPEC_XFGVIRT(ISourceFilterRegistry, get_Item)
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            ISourceFilterRegistry * This,
            /* [in] */ VARIANT vIndex,
            /* [retval][out] */ ISourceFilterRegistryItem **ppItem);
        
        DECLSPEC_XFGVIRT(ISourceFilterRegistry, get_Count)
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            ISourceFilterRegistry * This,
            /* [retval][out] */ LONG *pnCount);
        
        DECLSPEC_XFGVIRT(ISourceFilterRegistry, Register)
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Register )( 
            ISourceFilterRegistry * This,
            /* [in] */ BSTR sFriendlyName,
            /* [in] */ IDispatch *pFilterDispatch,
            /* [retval][out] */ ISourceFilterRegistryItem **ppItem);
        
        END_INTERFACE
    } ISourceFilterRegistryVtbl;

    interface ISourceFilterRegistry
    {
        CONST_VTBL struct ISourceFilterRegistryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISourceFilterRegistry_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISourceFilterRegistry_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISourceFilterRegistry_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISourceFilterRegistry_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISourceFilterRegistry_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISourceFilterRegistry_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISourceFilterRegistry_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISourceFilterRegistry_get__NewEnum(This,ppEnum)	\
    ( (This)->lpVtbl -> get__NewEnum(This,ppEnum) ) 

#define ISourceFilterRegistry_get_Item(This,vIndex,ppItem)	\
    ( (This)->lpVtbl -> get_Item(This,vIndex,ppItem) ) 

#define ISourceFilterRegistry_get_Count(This,pnCount)	\
    ( (This)->lpVtbl -> get_Count(This,pnCount) ) 

#define ISourceFilterRegistry_Register(This,sFriendlyName,pFilterDispatch,ppItem)	\
    ( (This)->lpVtbl -> Register(This,sFriendlyName,pFilterDispatch,ppItem) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISourceFilterRegistry_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_VideoSourceFilterRegistry;

#ifdef __cplusplus

class DECLSPEC_UUID("FCB50E78-D371-48C1-8025-1DD85314DA5D")
VideoSourceFilterRegistry;
#endif

#ifndef __IVideoMediaSourceSite_INTERFACE_DEFINED__
#define __IVideoMediaSourceSite_INTERFACE_DEFINED__

/* interface IVideoMediaSourceSite */
/* [unique][nonextensible][oleautomation][dual][uuid][object] */ 


EXTERN_C const IID IID_IVideoMediaSourceSite;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("58DC6588-5AAD-4487-8C73-F392AF2548ED")
    IVideoMediaSourceSite : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE NotifyAfterComposeSample( 
            /* [in] */ LONG nFrameIndex,
            /* [in] */ DOUBLE fTime) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVideoMediaSourceSiteVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVideoMediaSourceSite * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVideoMediaSourceSite * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVideoMediaSourceSite * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IVideoMediaSourceSite * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IVideoMediaSourceSite * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IVideoMediaSourceSite * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IVideoMediaSourceSite * This,
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
        
        DECLSPEC_XFGVIRT(IVideoMediaSourceSite, NotifyAfterComposeSample)
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *NotifyAfterComposeSample )( 
            IVideoMediaSourceSite * This,
            /* [in] */ LONG nFrameIndex,
            /* [in] */ DOUBLE fTime);
        
        END_INTERFACE
    } IVideoMediaSourceSiteVtbl;

    interface IVideoMediaSourceSite
    {
        CONST_VTBL struct IVideoMediaSourceSiteVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVideoMediaSourceSite_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVideoMediaSourceSite_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVideoMediaSourceSite_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVideoMediaSourceSite_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IVideoMediaSourceSite_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IVideoMediaSourceSite_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IVideoMediaSourceSite_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IVideoMediaSourceSite_NotifyAfterComposeSample(This,nFrameIndex,fTime)	\
    ( (This)->lpVtbl -> NotifyAfterComposeSample(This,nFrameIndex,fTime) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVideoMediaSourceSite_INTERFACE_DEFINED__ */


#ifndef __IVideoMediaSource_INTERFACE_DEFINED__
#define __IVideoMediaSource_INTERFACE_DEFINED__

/* interface IVideoMediaSource */
/* [unique][nonextensible][oleautomation][dual][uuid][object] */ 


EXTERN_C const IID IID_IVideoMediaSource;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5A42D259-B444-4890-BE44-F6D925F0141D")
    IVideoMediaSource : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ResetMediaType( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SetMediaType( 
            /* [in] */ LONG nWidth,
            /* [in] */ LONG nHeight,
            /* [in] */ VARIANT vCompression) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SetMediaTypeAspectRatio( 
            /* [in] */ LONG nNumerator,
            /* [in] */ LONG nDenominator) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SetMediaTypeRate( 
            /* [in] */ LONG nNumerator,
            /* [in] */ LONG nDenominator) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Duration( 
            /* [retval][out] */ DOUBLE *pfDuration) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Duration( 
            /* [in] */ DOUBLE fDuration) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Site( 
            /* [retval][out] */ IVideoMediaSourceSite **ppSite) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Site( 
            /* [in] */ IVideoMediaSourceSite *pSite) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE UpdateMediaType( 
            /* [in] */ LONG nWidth,
            /* [in] */ LONG nHeight) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVideoMediaSourceVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVideoMediaSource * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVideoMediaSource * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVideoMediaSource * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IVideoMediaSource * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IVideoMediaSource * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IVideoMediaSource * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IVideoMediaSource * This,
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
        
        DECLSPEC_XFGVIRT(IVideoMediaSource, ResetMediaType)
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ResetMediaType )( 
            IVideoMediaSource * This);
        
        DECLSPEC_XFGVIRT(IVideoMediaSource, SetMediaType)
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SetMediaType )( 
            IVideoMediaSource * This,
            /* [in] */ LONG nWidth,
            /* [in] */ LONG nHeight,
            /* [in] */ VARIANT vCompression);
        
        DECLSPEC_XFGVIRT(IVideoMediaSource, SetMediaTypeAspectRatio)
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SetMediaTypeAspectRatio )( 
            IVideoMediaSource * This,
            /* [in] */ LONG nNumerator,
            /* [in] */ LONG nDenominator);
        
        DECLSPEC_XFGVIRT(IVideoMediaSource, SetMediaTypeRate)
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SetMediaTypeRate )( 
            IVideoMediaSource * This,
            /* [in] */ LONG nNumerator,
            /* [in] */ LONG nDenominator);
        
        DECLSPEC_XFGVIRT(IVideoMediaSource, get_Duration)
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Duration )( 
            IVideoMediaSource * This,
            /* [retval][out] */ DOUBLE *pfDuration);
        
        DECLSPEC_XFGVIRT(IVideoMediaSource, put_Duration)
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Duration )( 
            IVideoMediaSource * This,
            /* [in] */ DOUBLE fDuration);
        
        DECLSPEC_XFGVIRT(IVideoMediaSource, get_Site)
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Site )( 
            IVideoMediaSource * This,
            /* [retval][out] */ IVideoMediaSourceSite **ppSite);
        
        DECLSPEC_XFGVIRT(IVideoMediaSource, put_Site)
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Site )( 
            IVideoMediaSource * This,
            /* [in] */ IVideoMediaSourceSite *pSite);
        
        DECLSPEC_XFGVIRT(IVideoMediaSource, UpdateMediaType)
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *UpdateMediaType )( 
            IVideoMediaSource * This,
            /* [in] */ LONG nWidth,
            /* [in] */ LONG nHeight);
        
        END_INTERFACE
    } IVideoMediaSourceVtbl;

    interface IVideoMediaSource
    {
        CONST_VTBL struct IVideoMediaSourceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVideoMediaSource_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVideoMediaSource_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVideoMediaSource_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVideoMediaSource_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IVideoMediaSource_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IVideoMediaSource_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IVideoMediaSource_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IVideoMediaSource_ResetMediaType(This)	\
    ( (This)->lpVtbl -> ResetMediaType(This) ) 

#define IVideoMediaSource_SetMediaType(This,nWidth,nHeight,vCompression)	\
    ( (This)->lpVtbl -> SetMediaType(This,nWidth,nHeight,vCompression) ) 

#define IVideoMediaSource_SetMediaTypeAspectRatio(This,nNumerator,nDenominator)	\
    ( (This)->lpVtbl -> SetMediaTypeAspectRatio(This,nNumerator,nDenominator) ) 

#define IVideoMediaSource_SetMediaTypeRate(This,nNumerator,nDenominator)	\
    ( (This)->lpVtbl -> SetMediaTypeRate(This,nNumerator,nDenominator) ) 

#define IVideoMediaSource_get_Duration(This,pfDuration)	\
    ( (This)->lpVtbl -> get_Duration(This,pfDuration) ) 

#define IVideoMediaSource_put_Duration(This,fDuration)	\
    ( (This)->lpVtbl -> put_Duration(This,fDuration) ) 

#define IVideoMediaSource_get_Site(This,ppSite)	\
    ( (This)->lpVtbl -> get_Site(This,ppSite) ) 

#define IVideoMediaSource_put_Site(This,pSite)	\
    ( (This)->lpVtbl -> put_Site(This,pSite) ) 

#define IVideoMediaSource_UpdateMediaType(This,nWidth,nHeight)	\
    ( (This)->lpVtbl -> UpdateMediaType(This,nWidth,nHeight) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVideoMediaSource_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_VideoMediaSource;

#ifdef __cplusplus

class DECLSPEC_UUID("41134D44-6AAE-43EF-A8BA-BDF01D348359")
VideoMediaSource;
#endif

#ifndef __IVideoMediaSourceTextureReader_INTERFACE_DEFINED__
#define __IVideoMediaSourceTextureReader_INTERFACE_DEFINED__

/* interface IVideoMediaSourceTextureReader */
/* [unique][nonextensible][oleautomation][dual][uuid][object] */ 


EXTERN_C const IID IID_IVideoMediaSourceTextureReader;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("44BECEC0-FF9C-4B10-9D16-CA41C9FC8250")
    IVideoMediaSourceTextureReader : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Initialize( 
            /* [in] */ IUnknown *pTextureUnknown) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Terminate( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Update( 
            /* [in] */ DOUBLE fTime) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVideoMediaSourceTextureReaderVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVideoMediaSourceTextureReader * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVideoMediaSourceTextureReader * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVideoMediaSourceTextureReader * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IVideoMediaSourceTextureReader * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IVideoMediaSourceTextureReader * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IVideoMediaSourceTextureReader * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IVideoMediaSourceTextureReader * This,
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
        
        DECLSPEC_XFGVIRT(IVideoMediaSourceTextureReader, Initialize)
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IVideoMediaSourceTextureReader * This,
            /* [in] */ IUnknown *pTextureUnknown);
        
        DECLSPEC_XFGVIRT(IVideoMediaSourceTextureReader, Terminate)
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Terminate )( 
            IVideoMediaSourceTextureReader * This);
        
        DECLSPEC_XFGVIRT(IVideoMediaSourceTextureReader, Update)
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Update )( 
            IVideoMediaSourceTextureReader * This,
            /* [in] */ DOUBLE fTime);
        
        END_INTERFACE
    } IVideoMediaSourceTextureReaderVtbl;

    interface IVideoMediaSourceTextureReader
    {
        CONST_VTBL struct IVideoMediaSourceTextureReaderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVideoMediaSourceTextureReader_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVideoMediaSourceTextureReader_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVideoMediaSourceTextureReader_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVideoMediaSourceTextureReader_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IVideoMediaSourceTextureReader_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IVideoMediaSourceTextureReader_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IVideoMediaSourceTextureReader_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IVideoMediaSourceTextureReader_Initialize(This,pTextureUnknown)	\
    ( (This)->lpVtbl -> Initialize(This,pTextureUnknown) ) 

#define IVideoMediaSourceTextureReader_Terminate(This)	\
    ( (This)->lpVtbl -> Terminate(This) ) 

#define IVideoMediaSourceTextureReader_Update(This,fTime)	\
    ( (This)->lpVtbl -> Update(This,fTime) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVideoMediaSourceTextureReader_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_VideoMediaSourceTextureReader;

#ifdef __cplusplus

class DECLSPEC_UUID("E1346019-1C7C-4515-93AE-1A75D3E49852")
VideoMediaSourceTextureReader;
#endif

#ifndef __IAudioMediaSource_INTERFACE_DEFINED__
#define __IAudioMediaSource_INTERFACE_DEFINED__

/* interface IAudioMediaSource */
/* [unique][nonextensible][oleautomation][dual][uuid][object] */ 


EXTERN_C const IID IID_IAudioMediaSource;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("DC37BCBA-5269-47ED-988B-D5F22D2E2B66")
    IAudioMediaSource : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ResetMediaType( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SetMediaType( 
            /* [in] */ BSTR sSubtype,
            /* [in] */ LONG nSampleCount,
            /* [in] */ LONG nChannelCount,
            /* [in] */ LONG nBitDepth) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Duration( 
            /* [retval][out] */ DOUBLE *pfDuration) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Duration( 
            /* [in] */ DOUBLE fDuration) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAudioMediaSourceVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAudioMediaSource * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAudioMediaSource * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAudioMediaSource * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAudioMediaSource * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAudioMediaSource * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAudioMediaSource * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAudioMediaSource * This,
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
        
        DECLSPEC_XFGVIRT(IAudioMediaSource, ResetMediaType)
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ResetMediaType )( 
            IAudioMediaSource * This);
        
        DECLSPEC_XFGVIRT(IAudioMediaSource, SetMediaType)
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SetMediaType )( 
            IAudioMediaSource * This,
            /* [in] */ BSTR sSubtype,
            /* [in] */ LONG nSampleCount,
            /* [in] */ LONG nChannelCount,
            /* [in] */ LONG nBitDepth);
        
        DECLSPEC_XFGVIRT(IAudioMediaSource, get_Duration)
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Duration )( 
            IAudioMediaSource * This,
            /* [retval][out] */ DOUBLE *pfDuration);
        
        DECLSPEC_XFGVIRT(IAudioMediaSource, put_Duration)
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Duration )( 
            IAudioMediaSource * This,
            /* [in] */ DOUBLE fDuration);
        
        END_INTERFACE
    } IAudioMediaSourceVtbl;

    interface IAudioMediaSource
    {
        CONST_VTBL struct IAudioMediaSourceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAudioMediaSource_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAudioMediaSource_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAudioMediaSource_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAudioMediaSource_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAudioMediaSource_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAudioMediaSource_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAudioMediaSource_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAudioMediaSource_ResetMediaType(This)	\
    ( (This)->lpVtbl -> ResetMediaType(This) ) 

#define IAudioMediaSource_SetMediaType(This,sSubtype,nSampleCount,nChannelCount,nBitDepth)	\
    ( (This)->lpVtbl -> SetMediaType(This,sSubtype,nSampleCount,nChannelCount,nBitDepth) ) 

#define IAudioMediaSource_get_Duration(This,pfDuration)	\
    ( (This)->lpVtbl -> get_Duration(This,pfDuration) ) 

#define IAudioMediaSource_put_Duration(This,fDuration)	\
    ( (This)->lpVtbl -> put_Duration(This,fDuration) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAudioMediaSource_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_AudioMediaSource;

#ifdef __cplusplus

class DECLSPEC_UUID("4517A543-908B-41B4-AED9-60E1708F1529")
AudioMediaSource;
#endif
#endif /* __AlaxInfoDirectShowReferenceSource_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


