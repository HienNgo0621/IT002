#pragma once
#include "cQuat.h"
#include<iostream>
using namespace std;

class cQuatDien : public cQuat{
    public:
        void Nhap(){
            cQuat ::Nhap();
            cout << "\t\t\t\tDung luong pin: ";
            cin >> dungTich;
        }
        string loai() {return "May quat sac dien";};
        unsigned long donGia() {return dungTich * 500;};
};
    
