#ifndef TIME_H
#define TIME_H


class Time
{
    private:
        int hour;
        int minute;
        char mark[50];
    public:
        void setHour(int a);
        int getHour();
        void setMinute(int b);
        int getMinute();
        void setMark(char c[50]);
        void showTime();
};

#endif // TIME_H
