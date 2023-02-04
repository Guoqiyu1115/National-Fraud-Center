#define _CRT_SECURE_NO_WARNINGS 
#include<iostream>
#include<Windows.h>
using namespace std;
int main()
{
    char s[100] = "start ";
    system(strcat(s, _pgmptr));
}