#include <windows.h>
#include <iostream>

int main(){
	std::cout << "MAGIC: edu-torres-malware-sim" << "\n";
	WinExec("calc.exe", SW_SHOW);
	sleep(300);
	CreateFileA("C:\\temp\\dummyedu.txt", GENERIC_WRITE, 0, NULL, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL);
	std::cout << "Se ah ejecutado saludos le desea Edu Torres";
	return 0;
}