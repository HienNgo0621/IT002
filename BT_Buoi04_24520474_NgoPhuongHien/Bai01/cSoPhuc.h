// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#pragma once
#include <iostream>

class cSoPhuc
{
private:
    float iThuc;
    float iAo;

public:
    cSoPhuc(float t = 0, float a = 0) : iThuc(t), iAo(a) {}
    friend std ::istream &operator>>(std ::istream &in, cSoPhuc &a);
    friend std ::ostream &operator<<(std ::ostream &out, const cSoPhuc &a);
    cSoPhuc operator+(const cSoPhuc &a);
    cSoPhuc operator-(const cSoPhuc &a);
    cSoPhuc operator*(const cSoPhuc &a);
    cSoPhuc operator/(const cSoPhuc &a);
    bool operator==(const cSoPhuc &a);
    bool operator!=(const cSoPhuc &a);
};