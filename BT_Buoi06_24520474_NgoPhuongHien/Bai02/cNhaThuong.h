// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#pragma once
#include <iostream>
#include "cNha.h"
using namespace std;

class cNhaThuong : public cNha
{
public:
    string loai() { return "Nha thuong"; }
    unsigned long thanhTien() { return dientich * gia * 0.9; }
};