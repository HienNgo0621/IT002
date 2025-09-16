// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#include "cBo.h"
#include "cGiaSuc.h"
#include <iostream>
using namespace std;

unsigned int cBo ::sinhCon()
{
    return rand() % 2;
}

float cBo ::choSua()
{
    return rand() % 21;
}

string cBo ::keu()
{
    return "Mo...o...o";
}