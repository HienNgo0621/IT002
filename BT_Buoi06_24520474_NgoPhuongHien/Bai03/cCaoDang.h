// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#pragma once
#include "cSinhVien.h"
#include <iostream>

class cCaoDang : public cSinhVien
{
private:
    float diemtn;

public:
    cCaoDang(float tn = 0) : diemtn(tn) {}
    void Nhap();
    void Xuat();
    bool XetTN();
    string loai() { return "cao dang"; }
};