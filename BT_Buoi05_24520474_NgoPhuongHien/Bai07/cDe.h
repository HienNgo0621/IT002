// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#pragma once
#include "cGiaSuc.h"
#include <iostream>

class cDe : public cGiaSuc
{
public:
    unsigned int sinhCon();
    float choSua();
    std ::string keu();
};