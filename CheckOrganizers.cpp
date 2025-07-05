#include <iostream>
#include <windows.h>
#include <fileapi.h>
#include <cstdio>
#include "CheckOrganizers.hpp"
#include <cwchar>
#include <string>
#include <vector>

void OrgFolders::CreateDir(PWSTR dlpath){
        wchar_t buffer[260];
        
        for (int i = 0; i < 7; i++ ){
        swprintf(buffer, 260,  L"%ls\\%ls", dlpath, Organizers[i].c_str());
        FinDir[i] = buffer; 
        wprintf(L"%ls\n", FinDir[i].c_str());
    }
 }
void OrgFolders::OrgCreate() {
    
    for (int i = 0; i < 7; i++ ){
        DWORD attr = GetFileAttributesW(FinDir[i].c_str());
        if( attr == INVALID_FILE_ATTRIBUTES){
            CreateDirectoryW(FinDir[i].c_str(), NULL);
        };
    }
}
