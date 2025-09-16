#pragma once
#include <string>
#include "cCandidate.h"
#include <vector>

class cListCandidate
{
private:
    std ::vector<cCandidate> ds;
    int n;

public:
    cListCandidate() : n(0) {}
    cListCandidate(const std ::vector<cCandidate> &a);
    void Nhap(int n);
    void Xuat();
    cCandidate MaxDiem();
    cListCandidate LonHon15();
    cListCandidate Giam();
};