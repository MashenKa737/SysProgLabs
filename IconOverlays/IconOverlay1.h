// IconOverlay1.h : Declaration of the CIconOverlay1

#pragma once
#include "resource.h"       // main symbols
#include "IconOverlays_i.h"
#include "IconOverlayBase.h"
#include "IconOverlayDefinition.h"

#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;

// CIconOverlay1

class ATL_NO_VTABLE CIconOverlay1 :
	public IconOverlayBase,
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CIconOverlay1, &CLSID_IconOverlay1>,
	public IDispatchImpl<IIconOverlay1, &IID_IIconOverlay1, &LIBID_IconOverlaysLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CIconOverlay1(): IconOverlayBase(0, L"\\1.txt")	{
	}

DECLARE_REGISTRY_RESOURCEID(106)

BEGIN_COM_MAP(CIconOverlay1)
	COM_INTERFACE_ENTRY(IIconOverlay1)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(IShellIconOverlayIdentifier)
END_COM_MAP()

	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct() {
		return S_OK;
	}

	void FinalRelease()	{
	}

};

OBJECT_ENTRY_AUTO(__uuidof(IconOverlay1), CIconOverlay1)

ICON_OVERLAY(IconOverlay2, 107, 1, L"\\2.txt")
ICON_OVERLAY(IconOverlay3, 108, 2, L"\\3.txt")
ICON_OVERLAY(IconOverlay4, 109, 3, L"\\4.txt")
ICON_OVERLAY(IconOverlay5, 110, 4, L"\\5.txt")
ICON_OVERLAY(IconOverlay6, 111, 5, L"\\6.txt")
ICON_OVERLAY(IconOverlay7, 112, 6, L"\\7.txt")
ICON_OVERLAY(IconOverlay8, 113, 7, L"\\8.txt")
ICON_OVERLAY(IconOverlay9, 114, 8, L"\\9.txt")
ICON_OVERLAY(IconOverlay10, 115, 9, L"\\10.txt")
ICON_OVERLAY(IconOverlay11, 116, 10, L"\\11.txt")
ICON_OVERLAY(IconOverlay12, 117, 11, L"\\12.txt")
ICON_OVERLAY(IconOverlay13, 118, 12, L"\\13.txt")
ICON_OVERLAY(IconOverlay14, 119, 13, L"\\14.txt")
ICON_OVERLAY(IconOverlay15, 120, 14, L"\\15.txt")
ICON_OVERLAY(IconOverlay16, 121, 15, L"\\16.txt")