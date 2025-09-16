// Mã số sinh viên:24520474
// Họ và tên: Ngô Phương Hiền
// Ngày sinh:21/06/2006
// Lớp: IT002.P26.1

#pragma once
#include "SVCD.h"
#include "SVDH.h"
#include <iostream>
#include <vector>

class DSSV
{
private:
    std ::vector<SVCD> cd;
    std ::vector<SVDH> dh;
    int x, y;

public:
    DSSV() {}
    DSSV(const std ::vector<SVCD> &a, const std ::vector<SVDH> &b);
    void Nhap();
    void Xuat();
    int SVDuDKTN();
    DSSV MaxDTB();
};