// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#pragma once
#include <iostream>
#include "cChungCu.h"
using namespace std;

class cChungCuConLai : public cChungCu
{
public:
    string loai() { return "cac tang con lai"; }
    unsigned long thanhTien() { return dientich * gia; }
};