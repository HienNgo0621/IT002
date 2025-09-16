#pragma once
#include "cLanh.h"
#include<iostream>
using namespace std;

class cLanh1 : public cLanh{
    public:
        string loai() {return "May lanh 1 chieu";};
        unsigned long donGia() {
            if (inverter == 1) return 1500;
            else return 1000;
        };
};
