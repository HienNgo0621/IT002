// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#pragma once
#include "cMatrix.h"
#include <vector>
#include <iostream>

class cVector
{
private:
    std ::vector<float> vt;
    int n;

public:
    cVector(int n = 0);
    cVector(const std ::vector<float> &a);
    friend std ::istream &operator>>(std ::istream &in, cVector &a);
    friend std ::ostream &operator<<(std ::ostream &out, const cVector &a);
    cVector operator+(const cVector &a);
    cVector operator-(const cVector &a);
    cVector operator*(float a);
    float TichVoHuong(const cVector &a);
    bool operator==(const cVector &a);
    cVector TichMT_VT(const cMatrix &a);
};