// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#include "cCuu.h"
#include "cGiaSuc.h"
#include <iostream>
using namespace std;

unsigned int cCuu ::sinhCon()
{
    return rand() % 3;
}

float cCuu ::choSua()
{
    return rand() % 6;
}

string cCuu ::keu()
{
    return "Beee...e...e";
}