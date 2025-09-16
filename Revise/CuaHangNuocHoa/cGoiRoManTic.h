#pragma once
#include "cSuaTam.h"
#include "cDauGoi.h"
#include "cNuocHoa.h"
#include "cGoi.h"
#include "cNuocHoaHong.h"
#include "cDauGoiDau.h"
#include "cDauGoiKho.h"
#include "cSuaTamKho.h"
#include "cSuaTamNhon.h"
#include<iostream>
using namespace std;

class cGoiRoManTic : public cGoi{
    public:
        void Nhap(){
            cGoi ::Nhap();
            cout << "\tNuoc hoa:\n";
            hoa = new cNuocHoaHong;
            hoa ->Nhap();
            cout << "\tChon dau goi (1 - cho toc kho, 2 - cho toc dau): ";
            cin >> daugoi;
            if (daugoi == 1) dau = new cDauGoiKho;
            else dau = new cDauGoiDau;
            dau ->Nhap();
            cout << "\tChon sua tam (1 - cho da kho, 2 - cho da nhon): ";
            cin >> suatam;
            if (suatam == 1) sua = new cSuaTamKho;
            else sua = new cSuaTamNhon;
            sua->Nhap();
        }
        string loai() {return "Romantic";}
        unsigned long giaTri() {return hoa->donGia() + dau->donGia() + sua->donGia();}
};