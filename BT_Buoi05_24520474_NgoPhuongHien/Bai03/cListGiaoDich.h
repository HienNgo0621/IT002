// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#pragma once
#include "cGiaoDich.h"
#include "cVang.h"
#include "cTienTe.h"
#include <iostream>
#include <vector>

class cListGiaoDich
{
private:
    std ::vector<cVang> v;
    std ::vector<cTienTe> t;
    unsigned int n, m;

public:
    cListGiaoDich(int n = 0, int m = 0);
    cListGiaoDich(const std ::vector<cVang> &v, const std ::vector<cTienTe> &t);
    void NhapVang();
    void NhapTien();
    void XuatVang();
    void XuatTien();
    cListGiaoDich Max_Vang();
    cListGiaoDich Min_Euro();
    cListGiaoDich GD_tren_1ty();
};
