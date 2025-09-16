#pragma once
#include "cConVat.h"
#include<iostream>
using namespace std;

class cEch : public cConVat{
    public:
        string loai() {return "Ech";}
        bool iskhongTheoQuyLuat() override {
            return (giaidoan[0] < 1 || giaidoan[0] > 3 || giaidoan[1] < 6 || 
            giaidoan[1] > 9 || giaidoan[2] < 1 || giaidoan[2] > 4 || giaidoan[3] != 4 ||
            giaidoan[4] < 2 || giaidoan[4] > 4);
        }
        ~cEch() {}

};