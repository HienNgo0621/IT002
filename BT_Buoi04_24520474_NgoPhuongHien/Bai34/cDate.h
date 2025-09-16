// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#pragma once
#include <iostream>

class cDate
{
private:
    int year, month, day;

public:
    friend class cTime;
    cDate(int y = 1, int m = 1, int d = 1) : year(y), month(m), day(d) {}
    friend std ::istream &operator>>(std ::istream &in, cDate &a);
    friend std ::ostream &operator<<(std ::ostream &out, const cDate &a);
    double giay() const;
    bool isLeapYear();
    bool isValid();
    void Format();
    cDate operator+(int d);
    cDate operator-(int d);
    cDate operator--();
    cDate operator++();
    cDate operator-(const cDate &a);
};
