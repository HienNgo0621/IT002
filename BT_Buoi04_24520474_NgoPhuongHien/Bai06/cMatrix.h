// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#pragma once
#include <vector>
#include <iostream>

class cMatrix
{
private:
    std ::vector<std ::vector<float>> mt;
    int n, m;

public:
    friend class cVector;
    cMatrix(int row = 0, int column = 0);
    cMatrix(const std ::vector<std ::vector<float>> &a);
    friend std ::istream &operator>>(std ::istream &in, cMatrix &a);
    friend std ::ostream &operator<<(std ::ostream &out, const cMatrix &a);
    cMatrix operator+(const cMatrix &a);
    cMatrix operator-(const cMatrix &a);
    cMatrix operator*(const cMatrix &a);
    cMatrix operator*(float a);
    cMatrix ChuyenVi();
    bool operator==(const cMatrix &a);
};