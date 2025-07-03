#include <windows.h>
#include <initguid.h>
#include <KnownFolders.h>
#include <ShlObj.h>
#include <wchar.h>
#include "FindDLFolder.hpp"

PWSTR FindDLFolder(){
    PWSTR path = NULL;

    HRESULT hr = SHGetKnownFolderPath(FOLDERID_Downloads, 0, NULL, &path);

    if (SUCCEEDED(hr)) {
            return path;
    }
    else
    {
        return NULL;
    }
}