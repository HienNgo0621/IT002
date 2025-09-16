#pragma once
#include "cConVat.h"
#include<iostream>
using namespace std;

class cMuoi : public cConVat{
    public:
        string loai() {return "Muoi";}
        bool iskhongTheoQuyLuat() override {
            return (giaidoan[0] < 1 || giaidoan[0] > 3 || giaidoan[1] < 4 || 
            giaidoan[1] > 10 || giaidoan[2] < 2 || giaidoan[2] > 3 ||
            giaidoan[3] < 5 || giaidoan[3] > 8);
        }
        ~cMuoi() {}

};