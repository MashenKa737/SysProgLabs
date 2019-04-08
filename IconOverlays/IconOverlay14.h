// IconOverlay14.h : Declaration of the CIconOverlay14

#pragma once
#include "resource.h"       // main symbols



#include "IconOverlays_i.h"



#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;


// CIconOverlay14

class ATL_NO_VTABLE CIconOverlay14 :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CIconOverlay14, &CLSID_IconOverlay14>,
	public IDispatchImpl<IIconOverlay14, &IID_IIconOverlay14, &LIBID_IconOverlaysLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CIconOverlay14()
	{
	}

DECLARE_REGISTRY_RESOURCEID(119)


BEGIN_COM_MAP(CIconOverlay14)
	COM_INTERFACE_ENTRY(IIconOverlay14)
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

OBJECT_ENTRY_AUTO(__uuidof(IconOverlay14), CIconOverlay14)
