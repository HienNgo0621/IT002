// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#pragma once
#include "cCaoDang.h"
#include "cDaiHoc.h"
#include <iostream>
#include <vector>

class cListSinhVien
{
private:
    std ::vector<cCaoDang> cd;
    std ::vector<cDaiHoc> dh;

public:
    cListSinhVien() {}
    cListSinhVien(const std ::vector<cCaoDang> &a, const std ::vector<cDaiHoc> &b);
    void NhapCD(unsigned int n);
    void NhapDH(unsigned int n);
    void XuatDS();
    cListSinhVien DuDKTN();
    cListSinhVien KhongDuDKTN();
    cListSinhVien DTB_CaoNhat_DaiHoc();
};