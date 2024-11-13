#include "EntryPoint.h"
#include "Main.h"
#include <Windows.h> 
#include <thread>

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved) {
    switch (ul_reason_for_call) {
    case DLL_PROCESS_ATTACH:
        AllocConsole();
        FILE* stream;
        freopen_s(&stream, "CONOUT$", "w", stdout);
        freopen_s(&stream, "CONIN$", "r", stdin);
        std::thread(EntryPoint).detach();
        SetConsoleTitleA("");
        system("cls");

        HWND hwnd = GetConsoleWindow();
        LONG style = GetWindowLong(hwnd, GWL_EXSTYLE);
        SetWindowLong(hwnd, GWL_EXSTYLE, style | WS_EX_LAYERED);
        SetLayeredWindowAttributes(hwnd, 0, 150, LWA_ALPHA);

        // Set the console window to always be on top
        SetWindowPos(hwnd, HWND_TOPMOST, 0, 0, 0, 0, SWP_NOMOVE | SWP_NOSIZE);
        break;
    }
    return TRUE;
}