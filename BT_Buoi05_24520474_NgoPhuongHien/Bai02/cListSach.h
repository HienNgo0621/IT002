// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#pragma once
#include "cSach.h"
#include "cSachGK.h"
#include "cSachTK.h"
#include <vector>
#include <iostream>

class cListSach
{
private:
    std ::vector<cSachGK> gk;
    std ::vector<cSachTK> tk;
    unsigned int n, m;

public:
    cListSach(int n = 0, int m = 0);
    cListSach(const std ::vector<cSachGK> &g, const std ::vector<cSachTK> &t);
    void NhapGK();
    void NhapTK();
    void XuatGK();
    void XuatTK();
    unsigned long tongThanhTienGK();
    unsigned long tongThanhTienTK();
    double TBDonGiaTK();
    cListSach NXB_GK(std ::string);
};