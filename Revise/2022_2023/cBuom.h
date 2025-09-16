#pragma once
#include "cConVat.h"
#include<iostream>
using namespace std;

class cBuom : public cConVat{
    public:
        string loai() {return "Buom";}
        bool iskhongTheoQuyLuat() override {
            return (giaidoan[0] < 3 || giaidoan[0] > 8 || giaidoan[1] < 15 || 
            giaidoan[1] > 16 || giaidoan[2] != 10 ||
            giaidoan[3] < 2 || giaidoan[3] > 3);
        }
        ~cBuom() {}

};