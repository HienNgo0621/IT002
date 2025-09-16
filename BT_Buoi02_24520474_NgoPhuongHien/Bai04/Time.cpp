#include <iostream>
#include "Time.h"
using namespace std;

Time ::Time(short h, short m, short s)
{
    hrs = h;
    mins = m;
    secs = s;
}

void Time ::Input()
{
    do
    {
        cout << "Nhap gio (>= 0): ";
        cin >> hrs;
    } while (hrs < 0);
    do
    {
        cout << "Nhap phut (>= 0): ";
        cin >> mins;
    } while (mins < 0);
    do
    {
        cout << "Nhap giay(>= 0): ";
        cin >> secs;
    } while (secs < 0);
}

void Time ::Output()
{
    Format();
    cout << hrs << " gio " << mins << " phut " << secs << " giay" << endl;
}

void Time ::Format()
{
    while (secs >= 60 || secs < 0)
    {
        if (secs >= 60)
        {
            secs = secs - 60;
            mins = mins + 1;
        }
        else if (secs < 0)
        {
            secs = 60 + secs;
            mins = mins - 1;
        }
    }

    while (mins >= 60 || mins < 0)
    {
        if (mins >= 60)
        {
            mins = mins - 60;
            hrs = hrs + 1;
        }
        else if (mins < 0)
        {
            mins = 60 + mins;
            hrs = hrs - 1;
        }
    }

    while (hrs >= 24 || hrs < 0)
    {
        if (hrs >= 24)
        {
            hrs = hrs - 24;
        }
        else if (hrs < 0)
        {
            hrs = 24 + hrs;
        }
    }
}

Time Time ::IncreaseTime(const Time &a)
{
    Time increase;
    increase.hrs = hrs + a.hrs;
    increase.mins = mins + a.mins;
    increase.secs = secs + a.secs;
    increase.Format();
    return increase;
}

Time Time ::DecreaseTime(const Time &a)
{
    Time decrease;
    decrease.hrs = hrs - a.hrs;
    decrease.mins = mins - a.mins;
    decrease.secs = secs - a.secs;
    decrease.Format();
    return decrease;
}

short Time ::getHour()
{
    return hrs;
}

short Time ::getMin()
{
    return mins;
}

short Time ::getSec()
{
    return secs;
}

void Time ::setHour(short h)
{
    hrs = h;
}

void Time ::setMin(short m)
{
    mins = m;
}

void Time ::setSec(short s)
{
    secs = s;
}