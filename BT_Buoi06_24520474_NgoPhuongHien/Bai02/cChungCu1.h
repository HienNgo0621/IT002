// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#pragma once
#include <iostream>
#include "cChungCu.h"
using namespace std;

class cChungCu1 : public cChungCu
{
public:
    string loai() { return "tang 1"; }
    unsigned long thanhTien() { return dientich * gia * 2; }
};