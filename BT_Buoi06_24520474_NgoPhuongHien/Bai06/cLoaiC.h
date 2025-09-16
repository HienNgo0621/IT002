// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#pragma once
#include "cKhachHang.h"
#include <iostream>
using namespace std;

class cLoaiC : public cKhachHang
{
public:
    unsigned long soTien()
    {
        return soluong * dongia * 0.5 * thue();
    }
    string loai() { return "dac biet"; }
    ~cLoaiC() {}
};