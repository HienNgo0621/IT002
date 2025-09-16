#pragma once
#include "cSuaTam.h"
#include<iostream>
using namespace std;

class cSuaTamNhon : public cSuaTam{
    public:
        string loai() {return "Da nhon";}
        unsigned long donGia() {return dungTich * 40;}
};