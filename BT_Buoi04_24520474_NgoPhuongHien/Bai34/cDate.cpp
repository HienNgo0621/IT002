// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#include "cTime.h"
#include "cDate.h"
#include <iostream>
using namespace std;

istream &operator>>(istream &in, cDate &a)
{
    cout << "Nhap ngay: ";
    in >> a.day;
    cout << "Nhap thang: ";
    in >> a.month;
    cout << "Nhap nam: ";
    in >> a.year;
    cout << endl;
    return in;
}

ostream &operator<<(ostream &out, const cDate &a)
{
    out << "Ngay " << a.day << " thang " << a.month << " nam " << a.year << endl;
    return out;
}

bool cDate ::isLeapYear()
{
    if (year % 4 != 0 || (year % 100 == 0 && year % 400 != 0))
        return false;
    return true;
}

bool cDate::isValid()
{
    if (year <= 0 || month < 1 || month > 12 || day < 1)
        return false;

    int DaysInMonth[] = {0, 31, isLeapYear() ? 29 : 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    return day <= DaysInMonth[month];
}

double cDate ::giay() const
{
    return ((year * 365.25 + month * 30.44 + day) * 86400);
}

void cDate ::Format()
{
    while (!isValid())
    {
        while (month < 1)
        {
            month += 12;
            year -= 1;
        }
        while (month > 12)
        {
            month -= 12;
            year += 1;
        }
        int DaysInMonth[] = {0, 31, isLeapYear() ? 29 : 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; // chi duoc cap nhap thang 2 mot lan, can cap nhat lai
        int maxDays = DaysInMonth[month];

        while (day > maxDays)
        {
            day -= maxDays;
            month += 1;
            if (month > 12)
            {
                month = 1;
                year += 1;
            }
            DaysInMonth[2] = isLeapYear() ? 29 : 28;
            maxDays = DaysInMonth[month];
        }

        while (day <= 0)
        {
            month -= 1;
            if (month <= 0)
            {
                month = 12;
                year -= 1;
            }
            DaysInMonth[2] = (isLeapYear() ? 29 : 28);
            maxDays = DaysInMonth[month];
            day += maxDays;
        }
    }
}

cDate cDate ::operator+(int d)
{
    cDate inc;
    inc.year = year;
    inc.month = month;
    inc.day = day + d;
    inc.Format();
    return inc;
}

cDate cDate ::operator-(int d)
{
    cDate dec;
    dec.year = year;
    dec.month = month;
    dec.day = day - d;
    dec.Format();
    return dec;
}

cDate cDate ::operator--()
{
    cDate dec;
    dec.year = year;
    dec.month = month;
    dec.day = day - 1;
    dec.Format();
    return dec;
}

cDate cDate ::operator++()
{
    cDate inc;
    inc.year = year;
    inc.month = month;
    inc.day = day + 1;
    inc.Format();
    return inc;
}

cDate cDate ::operator-(const cDate &a)
{
    cDate distance;
    distance.day = day - a.day;
    distance.month = month - a.month;
    distance.year = year - a.year;
    distance.Format();
    return distance;
}
