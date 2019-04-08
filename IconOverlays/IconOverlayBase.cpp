#include "stdafx.h"
#include "IconOverlayBase.h"

IconOverlayBase::IconOverlayBase(const int iconIndex, wchar_t const* condition) {
	this->iconIndex = iconIndex;
	this->condition = _wcsdup(condition);
}

IconOverlayBase::~IconOverlayBase() {
	free(this->condition);
}

// IShellIconOverlayIdentifier::GetOverlayInfo
// returns The Overlay Icon Location to the system
HRESULT IconOverlayBase::GetOverlayInfo(
	__RPC__out_ecount_full_string(cchMax) LPWSTR pwszIconFile,
	int cchMax,
	__RPC__out int *pIndex,
	__RPC__out DWORD *pdwFlags) {
	// Get module's full path
	GetModuleFileNameW(_AtlBaseModule.GetModuleInstance(), pwszIconFile, cchMax);

	// Use first icon in the resource
	*pIndex = iconIndex;
	*pdwFlags = ISIOI_ICONFILE | ISIOI_ICONINDEX;
	return S_OK;
}

// IShellIconOverlayIdentifier::GetPriority
// returns the priority of this overlay 0 being the highest. 
HRESULT IconOverlayBase::GetPriority(__RPC__out int *pPriority) {
	// we want highest priority 
	*pPriority = 0;
	return S_OK;
}

// IShellIconOverlayIdentifier::IsMemberOf
// Returns whether the object should have this overlay or not 
HRESULT IconOverlayBase::IsMemberOf(__RPC__in_string LPCWSTR pwszPath, DWORD dwAttrib) {
	wchar_t *s = _wcsdup(pwszPath);
	HRESULT r = S_FALSE;

	if (pathEndsWith(pwszPath, condition)) {
		r = S_OK;
	}

	free(s);

	return r;
	//return S_OK;
}

bool IconOverlayBase::pathEndsWith(wchar_t const* source, wchar_t const* substr) {
	size_t sourceLen = wcslen(source);
	size_t substrLen = wcslen(substr);
	if (substrLen > sourceLen) {
		return false;
	}
	for (size_t i = 1; i <= substrLen; i++) {
		if (source[sourceLen - i] != substr[substrLen - i]) {
			return false;
		}
	}
	return true;
}