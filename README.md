
<div align="center">
<img src="https://i.ibb.co/ZHWnhRC/logo.png">
Simple Taskbar Tool written in C++
</div>

> :warning: **Windows 11 Patched**: Will be fixed in later update

<br>

# What is XtheTaskbar?
 
<p>XtheTaskbar is a utility software that is used to make the taskbar on the Windows operating system transparent, providing a sleek and modern look to the desktop. It can be useful for users who prefer a cleaner and more aesthetically pleasing interface or who wish to customize their desktop appearance according to their preferences.</p> 

# How to compile the yourself

1. Open CMD
2. type ``g++ -o (the file name you want).exe (what you named it).cpp``

Code for you:

```cpp
#include  <fstream>

#include  <iostream>

#include  <chrono>

#include  <ctime>

#include  <Windows.h>

  

int  main()

{

std::ofstream  logFile("logxttb.txt");

  

if (!logFile.is_open())

{

std::cout  <<  "Error opening log file make sure it hasn't been deleted."  <<  std::endl;

return  1;

}

  

std::time_t  currentTime  =  std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());

  

logFile  <<  "Program started at "  <<  std::ctime(&currentTime) <<  std::endl;

  

HWND  taskbar  =  FindWindow("Shell_TrayWnd", NULL);

  

if (taskbar  ==  NULL)

{

logFile  <<  "Error finding taskbar window!"  <<  std::endl;

return  1;

}

  

ShowWindow(taskbar, SW_HIDE);

  

system("pause");

  

ShowWindow(taskbar, SW_SHOW);

  

logFile  <<  "Taskbar hidden successfully"  <<  std::endl;

logFile  <<  "\nThanks for using XtheTaskBar"  <<  std::endl;

  

logFile.close();

  

return  0;

}
```

# Updates

**First Version** 0.0.1: ``Added EXE and MD``
