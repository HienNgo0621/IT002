// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#include "cTime.h"
#include "cDate.h"
#include <iostream>
using namespace std;

istream &operator>>(istream &in, cTime &a)
{
    do
    {
        cout << "Nhap gio (>= 0): ";
        in >> a.hrs;
        cout << "Nhap phut (>= 0): ";
        in >> a.mins;
        cout << "Nhap giay(>= 0): ";
        in >> a.secs;
    } while (a.secs < 0 || a.mins < 0 || a.hrs < 0);
    return in;
}

ostream &operator<<(ostream &out, const cTime &a)
{
    out << a.hrs << " gio " << a.mins << " phut " << a.secs << " giay" << endl;
    return out;
}

void cTime ::Format(cDate &a)
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
            a.day += 1;
        }
        else if (hrs < 0)
        {
            hrs = 24 + hrs;
            a.day -= 1;
        }
    }
}

double cTime ::giay() const
{
    return (hrs * 3600 + mins * 60 + secs);
}

cTime cTime::operator-(const cTime &a)
{
    cTime distance;
    distance.secs = secs - a.secs;
    distance.mins = mins - a.mins;
    distance.hrs = hrs - a.hrs;
    return distance;
}

cTime cTime ::operator+(short s)
{
    cTime cong;
    cong.hrs = hrs;
    cong.mins = mins;
    cong.secs = secs + s;
    return cong;
}

cTime cTime ::operator-(short s)
{
    cTime tru;
    tru.hrs = hrs;
    tru.mins = mins;
    tru.secs = secs - s;
    return tru;
}

cTime cTime ::operator++()
{
    cTime cong1;
    cong1.hrs = hrs;
    cong1.mins = mins;
    cong1.secs = secs + 1;
    return cong1;
}

cTime cTime ::operator--()
{
    cTime tru1;
    tru1.hrs = hrs;
    tru1.mins = mins;
    tru1.secs = secs - 1;
    return tru1;
}