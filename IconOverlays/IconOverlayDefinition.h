#pragma once
#include "resource.h"       // main symbols
#include "IconOverlays_i.h"
#include "IconOverlayBase.h"

#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

#define ICON_OVERLAY(name, registryResourceId, iconResourceId, conditionFileName)\
	class ATL_NO_VTABLE C##name :\
		public IconOverlayBase,\
		public CComObjectRootEx<CComSingleThreadModel>,\
		public CComCoClass<C##name, &CLSID_##name>,\
		public IDispatchImpl<I##name, &IID_I##name, &LIBID_IconOverlaysLib, /*wMajor =*/ 1, /*wMinor =*/ 0>\
	{\
	public:\
		C##name() : IconOverlayBase(iconResourceId, conditionFileName) {\
		}\
		DECLARE_REGISTRY_RESOURCEID(registryResourceId)\
		BEGIN_COM_MAP(C##name)\
			COM_INTERFACE_ENTRY(I##name)\
			COM_INTERFACE_ENTRY(IDispatch)\
			COM_INTERFACE_ENTRY(IShellIconOverlayIdentifier)\
		END_COM_MAP()\
		DECLARE_PROTECT_FINAL_CONSTRUCT()\
		HRESULT FinalConstruct() {\
			return S_OK;\
		}\
		void FinalRelease() {\
		}\
	};\
	OBJECT_ENTRY_AUTO(__uuidof(name), C##name)\