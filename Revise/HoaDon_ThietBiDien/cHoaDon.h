#pragma once
#include "cLanh.h"
#include "cQuat.h"
#include "cQuatDien.h"
#include "cQuatDung.h"
#include "cQuatHoi.h"
#include "cLanh1.h"
#include "cLanh2.h"
#include<vector>
#include<iostream>
using namespace std;

class cHoaDon{
    private:
        cQuat* q;
        cLanh* l;
        unsigned int loaimay, loai, soluong;
    public:
        cHoaDon(){}
        ~cHoaDon(){
            q = NULL;
            l = NULL;           
        }
        void NhapHD(){
            cout << "\t\t\tChon loai thiet bi dien (1 - may quat, 2 - may lanh): "; cin >> loai;
            if (loai == 1) {
                cout << "\t\t\t\tChon loai may quat (1 - may quat dung, 2 - may quat hoi nuoc, 3 - may quat sac dien): "; cin >> loaimay;
                if (loaimay == 1) q = new cQuatDung;
                else if (loaimay == 2) q = new cQuatHoi;
                else q = new cQuatDien;
                q->Nhap();
            }
            else {  
                cout << "\t\t\t\tChon loai may lanh (1 - may lanh 1 chieu, 2 - may lanh 2 chieu): "; cin >> loaimay;
                if (loaimay == 1) l = new cLanh1;
                else l = new cLanh2;
                l->Nhap();
            }
            cout << "\t\t\tSo luong ban ra: "; cin >> soluong; 
        }
        void XuatHD(ostream& out){
            if (loai == 1) {
                q->Xuat(out); 
                
            } else {
                l->Xuat(out);
            }
            out << soluong << endl;
        }

        unsigned long tongGia(){
            if (loai == 1) {
                return q->donGia() * soluong;
                
            } else {
                return l->donGia() * soluong;
            }    
        }
};