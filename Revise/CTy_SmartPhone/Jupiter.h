#pragma once
#include<iostream>
#include "CPU.h"
#include "Alpha.h"
#include "Beta.h"
#include "Gamma.h"
#include "cManHinh.h"
#include "HD.h"
#include "FULLHDChonLua.h"
#include "FullHDChongLoa.h"
#include "cVo.h"
#include "cNhom.h"
#include "cNhua.h"
#include "cDong.h"
using namespace std;

class Jupiter : public cDong {
    public:
        void Nhap() override{
            cout << "\tLoai CPU: Gamma\n";
            cpu = new Gamma;
            cout << "\t\t";
            cpu->Nhap();
            cout << "\tMan hinh:\n";
            cout << "\t\tDo phan giai: FULLHD (Co chong loa)\n";
            mh = new FullHDChongLoa;
            cout << "\t\t";
            mh->Nhap();
            cout << "\tLoai vo smartphone: loai nhom\n";
            vo = new cNhom;
            cout << "\t\t";
            vo->Nhap();
        }
        unsigned long giaNhap() override{
            return ((vo->giaNhap() + cpu->giaNhap() + mh->giaNhap()) * 1.8);
        }
};