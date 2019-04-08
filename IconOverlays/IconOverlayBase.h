#pragma once
#include "resource.h"       // main symbols
#include "IconOverlays_i.h"

#include <shlobj.h>
#include <comdef.h>

using namespace ATL;

class IconOverlayBase : public IShellIconOverlayIdentifier {
    int iconIndex;
    wchar_t* condition;

    static bool pathEndsWith(wchar_t const* source, wchar_t const* substr);

public:
    IconOverlayBase(const int iconIndex, wchar_t const* condition);
    HRESULT STDMETHODCALLTYPE GetOverlayInfo(LPWSTR pwszIconFile, int cchMax, int * pIndex, DWORD * pdwFlags);
    HRESULT STDMETHODCALLTYPE GetPriority(int * pPriority);
    HRESULT STDMETHODCALLTYPE IsMemberOf(LPCWSTR pwszPath, DWORD dwAttrib);
    ~IconOverlayBase();
};
