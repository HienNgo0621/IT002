// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#pragma once
#include "cSinhVien.h"
#include <iostream>

class cDaiHoc : public cSinhVien
{
private:
    std ::string tenlv;
    float diemlv;

public:
    cDaiHoc(std ::string tenlv = "", float lv = 0) : tenlv(tenlv), diemlv(lv) {}
    void Nhap();
    void Xuat();
    bool XetTN();
    string loai() { return "dai hoc"; }
};