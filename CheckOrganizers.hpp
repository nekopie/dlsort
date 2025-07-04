#pragma once
#include <windows.h>
#include <string>

class OrgFolders {
private:
    std::wstring Organizers[7] = {
        L"image", L"docs", L"video", L"sound", L"executable", L"compressed", L"misc"
    };

public:
    void CreateDir(PWSTR dlpath);
    void OrgCreate();
};