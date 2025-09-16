// Mã số sinh viên:24520474
// Họ và tên: Ngô Phương Hiền
// Ngày sinh:21/06/2006
// Lớp: IT002.P26.1

#pragma once
#include <iostream>
#include <string>
#include "SachGK.h"
#include "SachTK.h"
#include <vector>

class DSSach
{
private:
    std ::vector<SachGK> gk;
    std ::vector<SachTK> tk;
    int x, y;

public:
    DSSach() {}
    DSSach(const std ::vector<SachGK> &a, const std ::vector<SachTK> &b);
    void Nhap();
    void Xuat();
    DSSach MinThanhTien();
    DSSach NXB_GK(std ::string);
};