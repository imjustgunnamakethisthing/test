#include <windows.h>

using namespace std;

int main()
{
    //ShellExecute(NULL, "open", "c:\windows\system32\cmd.exe", NULL, NULL, SW_SHOWNORMAL);

    SHELLEXECUTEINFO ShExecInfo = {0};
    ShExecInfo.cbSize = sizeof(SHELLEXECUTEINFO);
    ShExecInfo.fMask = SEE_MASK_NOCLOSEPROCESS;
    ShExecInfo.hwnd = NULL;
    ShExecInfo.lpVerb = NULL;
    ShExecInfo.lpFile = "c:\\windows\\system32\\cmd.exe";		
    ShExecInfo.lpParameters = "";	
    ShExecInfo.lpDirectory = NULL;
    ShExecInfo.nShow = SW_SHOW;
    ShExecInfo.hInstApp = NULL;	
    ShellExecuteEx(&ShExecInfo);
    WaitForSingleObject(ShExecInfo.hProcess,INFINITE);    
    
    return 0;
}
