#pragma once
#include "cSuaTam.h"
#include "cDauGoi.h"
#include "cNuocHoa.h"
#include<iostream>
using namespace std;

class cGoi{
    protected: 
        cNuocHoa* hoa;
        cDauGoi* dau;
        cSuaTam* sua;   
        string ma, ten;
        unsigned int daugoi, suatam, nuochoa;
    public:
        cGoi(){
            hoa = NULL;
            dau = NULL;
            sua = NULL;
        }
        virtual ~cGoi(){
            delete hoa;
            delete dau;
            delete sua;
        }
        virtual void Nhap(){
            cout << "\tNhap ma so: ";
            cin.ignore();
            getline(cin, ma);
            cout << "\tNhap ten goi san pham: ";
            getline(cin, ten);
        }
        virtual void Xuat(ostream& out){
            out << "Goi san pham: " << ma << " " << loai() << " " << ten << " " << giaTri() << endl;
            hoa->Xuat(out);
            dau->Xuat(out);
            sua->Xuat(out);
        }
        virtual string loai() = 0;
        virtual unsigned long giaTri() = 0;
};