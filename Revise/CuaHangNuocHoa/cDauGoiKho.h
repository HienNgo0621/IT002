#pragma once
#include "cDauGoi.h"
#include<iostream>
using namespace std;

class cDauGoiKho : public cDauGoi{
    public:
        string loai() {return "Da kho";};
        unsigned long donGia(){return dungTich * 20;}
        string tieuChuan() {return "";}
};