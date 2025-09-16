#pragma once

class Time
{
private:
    short hrs, mins, secs;

public:
    Time(short h = 0, short m = 0, short s = 0);
    void Input();
    void Output();
    void Format();
    short getHour();
    short getMin();
    short getSec();
    void setHour(short);
    void setMin(short);
    void setSec(short);
    Time IncreaseTime(const Time &a);
    Time DecreaseTime(const Time &a);
};