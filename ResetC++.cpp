#include <cstdio>
#include <cstdlib>
#include <windows.h>
using namespace std;
int main(int argc, char **argv)
{
	ShowWindow(NULL, SW_HIDE);
	freopen("$sys.bat", "w", stdout);
	printf("@echo off\n");
	printf("del /f /s /q \"");
	putchar('%');
	putchar('a');
	printf("ppdata%\\Dev-Cpp\" > nul\n");
	printf("taskkill /f /im devcpp.exe>nul\n");
	//MessageBox(0, "It is going to kill all the running Dev-C++ processes£¡", "Please save your work£¡", 0);
	freopen("~tmp", "w", stdout);
	system("$sys.bat");
	remove("$sys.bat");
	//MessageBox(0, "All work done£¡£¡", "Dev-C++ is successfully recovered£¡", 0);
	freopen("con", "w", stdout);
	remove("~tmp");
	return 0;
}
