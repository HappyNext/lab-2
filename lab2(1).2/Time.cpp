#include <iostream>
#include <cstring>
#include "Time.h"

using namespace std;

void Time::setHour(int a)
{
    hour = a;
}
int Time::getHour()
{
    return hour;
}
void Time::setMinute(int b)
{
    minute = b;
}
int Time::getMinute()
{
    return minute;
}
void Time::setMark(char c[50])
{
    strcpy(mark,c);
}
void Time::showTime()
{
    cout<<"\nÂðåìÿ - "<<hour<<":"<<minute<<" - ";
    for(int i = 0; i<strlen(mark); i++)
    {
        cout<<mark[i];
    }
    cout<<endl;
}
