#pragma once
#include "cNuocHoa.h"
#include<iostream>
using namespace std;

class cNuocHoaCuc : public cNuocHoa{
    public:
        virtual string loai() {return "Hoa cuc";}
        virtual unsigned long donGia() {return dungTich * 15;}
        virtual string tieuChuan() {return "";}
};