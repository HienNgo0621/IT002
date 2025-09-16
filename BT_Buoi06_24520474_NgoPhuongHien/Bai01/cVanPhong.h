// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#pragma once
#include "cNhanVien.h"
#include <iostream>

class cVanPhong : public cNhanVien
{
private:
    unsigned int ngaylamviec;

public:
    cVanPhong(unsigned int ngay = 0) : ngaylamviec(ngay) {}
    void Nhap() override;
    void Xuat() override;
    unsigned long tinhLuong() override;
    std ::string loai() override { return "Van Phong"; }
};