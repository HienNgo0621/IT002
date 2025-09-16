// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#include "cDe.h"
#include "cGiaSuc.h"
#include <iostream>
using namespace std;

unsigned int cDe ::sinhCon()
{
    return rand() % 3;
}

float cDe ::choSua()
{
    return rand() % 11;
}

string cDe ::keu()
{
    return "Be...be...be";
}