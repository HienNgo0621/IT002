// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#pragma once
#include "cDat.h"
#include "cNhaPho.h"
#include "cChungCu.h"
#include <iostream>
#include <vector>

class cListGiaoDich
{
private:
    std ::vector<cDat> dat;
    std ::vector<cNhaPho> nha;
    std ::vector<cChungCu> chungcu;

public:
    cListGiaoDich() {}
    cListGiaoDich(const std ::vector<cDat> &d, const std ::vector<cNhaPho> &np, const std ::vector<cChungCu> &cc);
    void NhapDat(unsigned int n);
    void NhapNha(unsigned int n);
    void NhapChungCu(unsigned int n);
    void XuatDat();
    void XuatNha();
    void XuatChungCu();
    void TongSoLuong();
    double TB_ThanhTien_ChungCu();
    cListGiaoDich Max_NhaPho();
    cListGiaoDich GiaoDichThang12();
};