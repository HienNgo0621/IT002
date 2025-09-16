#pragma once
#include<iostream>
#include "cManHinh.h"
#include "CPU.h"
#include "cVo.h"
using namespace std;

class cDong {
    protected:
        CPU* cpu;
        cVo* vo;
        cManHinh* mh;
        unsigned int loaicpu, doPhanGiai, loaivo;
    public:
        cDong(){
            cpu = NULL;
            mh = NULL;
            vo = NULL;
        }
        virtual ~cDong(){
            delete cpu;
            delete mh;
            delete vo;
        }
        virtual void Nhap() = 0;
        virtual unsigned long giaNhap() = 0;
        virtual void Xuat(ostream& out) {
            cpu->Xuat(out);
            mh->Xuat(out);
            vo->Xuat(out);
        }
        cManHinh* getMH() {return mh;}
};