#include<iostream>
#include<Windows.h>
#include<ctime> 
using namespace std;
int main()
{
    HWND hWnd = GetConsoleWindow();
    SetWindowLong(hWnd, GWL_EXSTYLE, WS_EX_TOOLWINDOW);
    srand(time(0));
    int x, y = 0;
    while (1)
    {
        x = rand() % 1000 + 300; //x����ķ�Χ�����Ի� 
        y = rand() % 600 + 300;  //y����ķ�Χ�����Ի� 
        SetCursorPos(x, y); //x,y���Ի��������̶���ֵ ���ɸĳ�������� 
    }
    return 0;
}
