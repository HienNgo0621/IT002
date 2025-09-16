// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#pragma once
#include "cSanXuat.h"
#include "cVanPhong.h"
#include <vector>
#include <iostream>

class cListNhanVien
{
private:
    std ::vector<cSanXuat> sx;
    std ::vector<cVanPhong> vp;

public:
    cListNhanVien() {}
    // cListNhanVien(const std ::vector<cSanXuat> &a, const std ::vector<cVanPhong> &b);
    void NhapSX(unsigned n);
    void NhapVP(unsigned n);
    void XuatDS();
    unsigned long tinhTongLuong();
};