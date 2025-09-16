// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#pragma once
#include <iostream>

class cPhanSo
{
private:
    int iTu;
    int iMau;
    void RutGon();

public:
    cPhanSo(int t = 0, int m = 1);
    friend std ::istream &operator>>(std ::istream &in, cPhanSo &a);
    friend std ::ostream &operator<<(std ::ostream &out, cPhanSo &a);
    int getTu();
    int getMau();
    void setTu(int);
    void setMau(int);
    cPhanSo operator+(const cPhanSo &a);
    cPhanSo operator-(const cPhanSo &a);
    cPhanSo operator*(const cPhanSo &a);
    cPhanSo operator/(const cPhanSo &a);
    bool operator==(const cPhanSo &a);
    bool operator>(const cPhanSo &a);
    bool operator<(const cPhanSo &a);
};