#pragma once
#include <string>

class Date
{
private:
    int day, month;
    int year;

public:
    friend class cNhanVienVP;
    Date(int d = 1, int m = 1, int y = 1) : day(d), month(m), year(y) {}
    void Input();
    void Output() const;
    bool isValid();
    int getDay();
    int getMonth();
    int getYear();
    void setDay(int);
    void setMonth(int);
    void setYear(int);
    bool isLeapYear();
    long long TongNgay();
};