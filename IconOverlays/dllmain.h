// dllmain.h : Declaration of module class.

class CIconOverlaysModule : public ATL::CAtlDllModuleT< CIconOverlaysModule > {
public:
    DECLARE_LIBID(LIBID_IconOverlaysLib)
    DECLARE_REGISTRY_APPID_RESOURCEID(IDR_ICONOVERLAYS, "{20047940-0c74-45bd-bae8-52ebee052193}")
};

extern class CIconOverlaysModule _AtlModule;
