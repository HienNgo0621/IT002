// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#pragma once
#include <iostream>
#include "NoiThanh.h"
#include "ChuyenXe.h"
#include <vector>

class cListNT
{
private:
    std ::vector<NoiThanh> nt;
    unsigned int n;

public:
    cListNT(unsigned int n = 0);
    void NhapNt();
    void XuatNt();
    unsigned long TongDoanhThuNT();
};