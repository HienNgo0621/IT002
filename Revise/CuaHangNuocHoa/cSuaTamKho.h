#pragma once
#include "cSuaTam.h"
#include<iostream>
using namespace std;

class cSuaTamKho : public cSuaTam{
    public:
        string loai() {return "Da kho";}
        unsigned long donGia() {return dungTich * 20;}
};