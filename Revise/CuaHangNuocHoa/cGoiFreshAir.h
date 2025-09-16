#pragma once
#include "cSuaTam.h"
#include "cDauGoi.h"
#include "cNuocHoa.h"
#include "cGoi.h"
#include "cNuocHoaHong.h"
#include "cNuocHoaCuc.h"
#include "cDauGoiKho.h"
#include "cSuaTamKho.h"
#include "cSuaTamNhon.h"
#include<iostream>
using namespace std;

class cGoiFreshAir : public cGoi{
    public:
        void Nhap(){
            cGoi ::Nhap();
            cout << "\tNuoc hoa (1 - hoa hong, 2 - hoa cuc): ";
            cin >> nuochoa;
            if (nuochoa == 1) hoa = new cNuocHoaHong;
            else hoa = new cNuocHoaCuc;
            hoa ->Nhap();
            cout << "\tChon dau goi: cho toc kho\n";
            dau = new cDauGoiKho;
            dau ->Nhap();
            cout << "\tChon sua tam (1 - cho da kho, 2 - cho da nhon): ";
            cin >> suatam;
            if (suatam == 1) sua = new cSuaTamKho;
            else sua = new cSuaTamNhon;
            sua->Nhap();
        }
        string loai() {return "Fresh-Air";}
        unsigned long giaTri() {return hoa->donGia() + dau->donGia() + sua->donGia();}
};