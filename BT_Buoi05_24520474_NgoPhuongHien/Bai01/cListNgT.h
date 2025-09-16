// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#pragma once
#include <iostream>
#include "NgoaiThanh.h"
#include "ChuyenXe.h"
#include <vector>

class cListNgT
{
private:
    std ::vector<NgoaiThanh> ngt;
    unsigned int n;

public:
    cListNgT(unsigned int n = 0);
    void NhapNgt();
    void XuatNgt();
    unsigned long TongDoanhThuNgT();
};