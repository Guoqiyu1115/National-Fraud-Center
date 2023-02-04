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
        x = rand() % 1000 + 300; //x坐标的范围，可以换 
        y = rand() % 600 + 300;  //y坐标的范围，可以换 
        SetCursorPos(x, y); //x,y可以换成两个固定的值 即可改成鼠标锁定 
    }
    return 0;
}
