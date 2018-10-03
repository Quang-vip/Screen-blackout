#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
    SendMessage(HWND_BROADCAST, WM_SYSCOMMAND, SC_MONITORPOWER, (LPARAM)2);
    exit(1);
    //Sleep(10000);
    //SendMessage(HWND_BROADCAST, WM_SYSCOMMAND, SC_MONITORPOWER, (LPARAM)-1);
    return 0;
}
