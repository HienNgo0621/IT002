#pragma once
#include "cDong.h"
#include<iostream>
using namespace std;

class cSmartPhone {
    private:
        cDong* dongsp;
        unsigned int dong;
        string maso;
    public:
        cSmartPhone();
        ~cSmartPhone();
        friend ostream& operator << (ostream& out, const cSmartPhone &a);
        void NhapSP();
};