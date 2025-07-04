#include <iostream>
#include <windows.h>
#include <fileapi.h>
#include <cstdio>
#include "CheckOrganizers.hpp"
#include <cwchar>
#include <string>

void OrgFolders::CreateDir(PWSTR dlpath){
        wchar_t buffer[260];
        std::wstring FinDir[7];
        for (int i = 0; i < 7; i++ ){
        swprintf(buffer, 260,  L"%ls\\%ls", dlpath, Organizers[i].c_str());
        FinDir[i] = buffer; 
        wprintf(L"%ls\n", FinDir[i].c_str());
    }
 }
void OrgFolders::OrgCreate() {
    DWORD GetFileAttributesA;
}
