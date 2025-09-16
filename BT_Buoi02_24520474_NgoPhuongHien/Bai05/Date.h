#pragma once
#include <string>

class Date
{
private:
    int day, month;
    int year;

public:
    Date(int d = 1, int m = 1, int y = 1);
    void Input();
    void Output();
    bool isValid();
    void Format();
    int getDay();
    int getMonth();
    std ::string getDayofWeek();
    int getYear();
    void setDay(int);
    void setMonth(int);
    void setYear(int);
    bool isLeapYear();
    Date IncreaseDate(const Date &a);
    Date DecreaseDate(Date &a);
};