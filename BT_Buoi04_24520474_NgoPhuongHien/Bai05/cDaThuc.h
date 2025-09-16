// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#pragma once
#include "DonThuc.h"
#include <vector>

class cDaThuc
{
private:
    std ::vector<DonThuc> d;
    int n;

public:
    cDaThuc() : n(0) {}
    cDaThuc(const std ::vector<DonThuc> &a);
    void Nhap();
    void Xuat();
    cDaThuc Tong(const cDaThuc &b);
    cDaThuc Hieu(const cDaThuc &b);
    cDaThuc Tich(const cDaThuc &b);
    void Thuong(const cDaThuc &b, cDaThuc &Thuong, cDaThuc &Du);
    void Rutgon();
    float giaTriDT(float x);
};