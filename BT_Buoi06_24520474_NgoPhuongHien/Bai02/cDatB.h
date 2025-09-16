// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#pragma once
#include <iostream>
#include "cDat.h"
using namespace std;

class cDatB : public cDat
{
public:
    string loai()
    {
        return "loai B";
    }
    unsigned long thanhTien() { return dientich * gia; };
};