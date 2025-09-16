// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#pragma once
#include <iostream>

class cGiaSuc
{
public:
    virtual unsigned int sinhCon() = 0;
    virtual float choSua() = 0;
    virtual std ::string keu() = 0;
    virtual ~cGiaSuc() {}
};