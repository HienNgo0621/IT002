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

class Venus : public cDong {
    public:
        void Nhap() override{
            cout << "\tLoai CPU (1 - loai Alpha, 2 - Beta): "; cin >> loaicpu;
            if (loaicpu == 1) {
                cpu = new Alpha;
            } else {
                cpu = new Beta;
            }
            cout << "\t\t";
            cpu->Nhap();
            cout << "\tMan hinh:\n";
            cout << "\t\tDo phan giai (1 - HD, 2 - FULLHD): ";
            cin >> doPhanGiai;
            if (doPhanGiai == 1) mh = new HD;
            else mh = new FULLHDChonLua;
            cout << "\t\t";
            mh->Nhap();

            cout << "\tLoai vo smartphone (1 - loai nhom, 2 - loai nhua): "; 
            cin >> loaivo;
            cout << "\t\t";
            if (loaivo == 1) vo = new cNhom;
            else vo = new cNhua;
            vo->Nhap();
        }
        unsigned long giaNhap() override{
            return ((vo->giaNhap() + cpu->giaNhap() + mh->giaNhap()) * 1.3);
        }
};