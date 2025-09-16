#pragma once
#include "cNuocHoa.h"
#include<iostream>
using namespace std;

class cNuocHoaHong : public cNuocHoa{
    public:
        virtual string loai() {return "Hoa hong";}
        virtual unsigned long donGia() {return dungTich * 20;}
        virtual string tieuChuan() {return "Tieu chuan";}
};