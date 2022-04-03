#include <iostream>
#include <cstring>
#include "Time.h"
#include "windows.h"

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Time one;
    one.setHour(12);
    one.setMinute(56);
    one.setMark("Пара по ООП");
    one.showTime();
    return 0;
}
