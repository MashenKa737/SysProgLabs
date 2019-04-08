// IconOverlay8.h : Declaration of the CIconOverlay8

#pragma once
#include "resource.h"       // main symbols



#include "IconOverlays_i.h"



#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;


// CIconOverlay8

class ATL_NO_VTABLE CIconOverlay8 :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CIconOverlay8, &CLSID_IconOverlay8>,
	public IDispatchImpl<IIconOverlay8, &IID_IIconOverlay8, &LIBID_IconOverlaysLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CIconOverlay8()
	{
	}

DECLARE_REGISTRY_RESOURCEID(113)


BEGIN_COM_MAP(CIconOverlay8)
	COM_INTERFACE_ENTRY(IIconOverlay8)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()



	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		return S_OK;
	}

	void FinalRelease()
	{
	}

public:



};

OBJECT_ENTRY_AUTO(__uuidof(IconOverlay8), CIconOverlay8)
