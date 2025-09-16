#pragma once
#include "cQuat.h"
#include<iostream>
using namespace std;

class cQuatHoi : public cQuat{
    public:
        void Nhap(){
            cQuat ::Nhap();
            cout << "\t\t\t\tDung tich nuoc: ";
            cin >> dungTich;
        }
        string loai() {return "May quat hoi nuoc";};
        unsigned long donGia() {return dungTich * 400;};
};
    
