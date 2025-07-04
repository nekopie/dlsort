
#include <windows.h>
#include <initguid.h>
#include <KnownFolders.h>
#include <ShlObj.h>
#include <wchar.h>
#include "FindDLFolder.hpp"
#include "CheckOrganizers.hpp"
#include <fcntl.h>
#include <io.h>

int wmain(void) {
    PWSTR dlpath = FindDLFolder();
    wprintf(L"%ls\n", dlpath);
    OrgFolders org;
    org.CreateDir(dlpath);
    return 0;
}