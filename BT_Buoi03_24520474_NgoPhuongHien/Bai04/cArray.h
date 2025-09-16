#pragma once
#include <vector>

class cArray
{
private:
    std ::vector<int> arr;

public:
    cArray() {}
    cArray(const std ::vector<int> &a);
    cArray(int n);
    void Xuat();
    int DemX(int x);
    bool isTangDan();
    bool Tim_minLe(int &minLe);
    bool Tim_MaxSNT(int &maxNT);
    cArray TangDan();
    cArray GiamDan();
};