#include <fstream>
#include <iostream>
#include <chrono>
#include <ctime>
#include <Windows.h>

int main()
{
    std::ofstream logFile("logxttb.txt");

    if (!logFile.is_open())
    {
        std::cout << "Error opening log file make sure it hasn't been deleted." << std::endl;
        return 1;
    }

    std::time_t currentTime = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());

    logFile << "Program started at " << std::ctime(&currentTime) << std::endl;

    HWND taskbar = FindWindow("Shell_TrayWnd", NULL);

    if (taskbar == NULL)
    {
        logFile << "Error finding taskbar window!" << std::endl;
        return 1;
    }

    ShowWindow(taskbar, SW_HIDE);

    system("pause");

    ShowWindow(taskbar, SW_SHOW);

    logFile << "Taskbar hidden successfully" << std::endl;
    logFile << "\nThanks for using XtheTaskBar" << std::endl;

    logFile.close();

    return 0;
}
