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
    float giaTriDT(float x);
};