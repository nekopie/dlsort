
#include <windows.h>
#include <initguid.h>
#include <KnownFolders.h>
#include <ShlObj.h>
#include <wchar.h>
#include "FindDLFolder.hpp"

int wmain(void) {

    PWSTR dlpath = FindDLFolder();
    wprintf(L"%ls\n", dlpath);
    return 0;
}