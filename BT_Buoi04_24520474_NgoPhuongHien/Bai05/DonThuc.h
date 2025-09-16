// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#pragma once
#include <iostream>

class DonThuc
{
private:
    short iMu;
    float iHeSo;

public:
    friend class cDaThuc;
    DonThuc(short m = 0, float h = 0) : iMu(m), iHeSo(h) {};
    float giaTri(float x);
    friend DonThuc operator+(const DonThuc &a, const DonThuc &b);
    friend DonThuc operator-(const DonThuc &a, const DonThuc &b);
    friend DonThuc operator*(const DonThuc &a, const DonThuc &b);
    friend DonThuc operator/(const DonThuc &a, const DonThuc &b);
};