#pragma once
#include <iostream>
#include <vector>

class PhanSo
{
private:
    int iTuSo;
    int iMauSo;
    void RutGon();

public:
    friend class cDSPhanSo;
    PhanSo(int t = 0, int m = 1);
    friend std ::istream &operator>>(std ::istream &in, PhanSo &a);
    friend std ::ostream &operator<<(std ::ostream &out, const PhanSo &a);
    friend PhanSo operator+(const PhanSo &a, const PhanSo &b);
    friend bool operator<(const PhanSo &a, const PhanSo &b);
    friend int Partition(std ::vector<PhanSo> &v, int low, int high);
    int getTu() { return iTuSo; }
};