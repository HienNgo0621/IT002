// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#pragma once
#include "cTime.h"
#include "cDate.h"
#include <iostream>

class InterestRate
{
private:
    cTime t;
    cDate d;

public:
    InterestRate() {}
    void Nhap();
    void Xuat();
    void Format();
    double soGiay(const InterestRate &a);
};