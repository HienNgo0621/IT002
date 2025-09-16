// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#pragma once
#include "cDate.h"
#include <iostream>

class cTime
{
private:
    short hrs, mins, secs;

public:
    cTime(short h = 0, short m = 0, short s = 0) : hrs(h), mins(m), secs(s) {}
    friend std ::istream &operator>>(std ::istream &in, cTime &a);
    friend std ::ostream &operator<<(std ::ostream &out, const cTime &a);
    void Format(cDate &a);
    double giay() const;
    cTime operator-(const cTime &a);
    cTime operator+(short s);
    cTime operator-(short s);
    cTime operator--();
    cTime operator++();
};