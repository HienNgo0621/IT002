#pragma once
#include "cYeuTo.h"
#include "cO.h"
#include "cC.h"
#include "cE.h"
#include "cA.h"
#include "cN.h"
#include<iostream>
#include<vector>
using namespace std;

class cNguoi{
    private:
        vector<cYeuTo*> yt;
    public:
        cNguoi() {}
        ~cNguoi() {}
        void NhapTT(){
            cout << "---Nhap thong tin ket qua danh gia tam ly---\n";
            yt.resize(5);
            yt[0] = new cO;
            yt[1] = new cC;
            yt[2] = new cE;
            yt[3] = new cA;
            yt[4] = new cN;
            for (int i = 0; i < 5; i ++){
                yt[i]->Nhap();
            }
        }
        void XuatTT(){
            for (int i = 0; i < 5; i ++){
                yt[i]->Xuat();
            }
        }
        bool luuY(){
            return (yt[1]->getChiSo() <= 30 || yt[4]->getChiSo() >= 70 || (yt[2]->getChiSo() <= 30 && yt[4]->getChiSo() >= 70));
        }
};