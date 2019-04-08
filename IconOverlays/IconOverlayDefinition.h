#pragma once
#include "resource.h"       // main symbols
#include "IconOverlays_i.h"
#include "IconOverlayBase.h"

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
	OBJECT_ENTRY_AUTO(__uuidof(name), C##name)