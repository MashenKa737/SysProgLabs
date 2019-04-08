// IconOverlay12.h : Declaration of the CIconOverlay12

#pragma once
#include "resource.h"       // main symbols



#include "IconOverlays_i.h"



#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;


// CIconOverlay12

class ATL_NO_VTABLE CIconOverlay12 :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CIconOverlay12, &CLSID_IconOverlay12>,
	public IDispatchImpl<IIconOverlay12, &IID_IIconOverlay12, &LIBID_IconOverlaysLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CIconOverlay12()
	{
	}

DECLARE_REGISTRY_RESOURCEID(117)


BEGIN_COM_MAP(CIconOverlay12)
	COM_INTERFACE_ENTRY(IIconOverlay12)
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

OBJECT_ENTRY_AUTO(__uuidof(IconOverlay12), CIconOverlay12)
