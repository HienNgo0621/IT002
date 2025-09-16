#pragma once
#include "PhanSo.h"
#include <vector>

class cDSPhanSo
{
private:
    std ::vector<PhanSo> ds;
    int n;

public:
    cDSPhanSo() : n(0) {}
    cDSPhanSo(const std ::vector<PhanSo> &ds);
    void NhapDS();
    void XuatDS();
    PhanSo Tong();
    PhanSo PSLonNhat();
    PhanSo PSNhoNhat();
    bool Tu_maxSNT(PhanSo &maxTu);
    friend void QuickSort(std ::vector<PhanSo> &v, int low, int high);
    cDSPhanSo DS_Tang();
    cDSPhanSo DS_Giam();
};