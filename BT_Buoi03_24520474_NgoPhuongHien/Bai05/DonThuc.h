#pragma once
#include <iostream>

class DonThuc
{
private:
    short iMu;
    float iHeSo;

public:
    friend class cDaThuc;
    DonThuc(short m = 0, float h = 0) : iMu(m), iHeSo(h) {};
    // friend std ::istream &operator >> (std ::istream &in, DonThuc &a);
    // friend std ::ostream &operator << (std ::ostream &out, const DonThuc &a);
    float giaTri(float x);
    friend DonThuc operator+(const DonThuc &a, const DonThuc &b);
    friend DonThuc operator-(const DonThuc &a, const DonThuc &b);
};