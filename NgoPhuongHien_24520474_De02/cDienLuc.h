#pragma once
#include<iostream>
using namespace  std;

class cDienLuc{
    protected:
        string ma, ten, diachi;
        unsigned int chisocu, chisomoi, ngay, thang, nam;
    public:
        cDienLuc(string m = "", string t = "", string dc = "", unsigned int cu = 0, unsigned int moi = 0, unsigned int day = 1, unsigned int month = 1, unsigned int year = 1) : ma(m), ten(t), diachi(dc), chisocu(cu), chisomoi(moi), ngay(day), thang(month), nam(year) {}
        virtual void Nhap(){
            cout << "Nhap ma khach hang: ";
            cin.ignore(); getline(cin, ma);
            cout << "Nhap ten khach khang (cong ty): "; 
            getline(cin, ten);
            cout << "Nhap dia chi: "; 
            getline(cin, diachi);
            cout << "Nhap chi so dong ho dien ky truoc (cu): "; cin >> chisocu;
            cout << "Nhap chi so dong ho dien hien tai (moi): "; cin >> chisomoi;
            cout << "Nhap phat hanh hoa don (ngay thang nam): "; cin >> ngay >> thang >> nam; 
        }
        virtual void Xuat(){
            cout << ma << " " << ten << " " << diachi << " Chi so cu: " << chisocu << " Chi so moi: " << chisomoi << " " << tienThanhToan() << " Ngay phat hanh: " << ngay << "/" << thang << "/" << nam << " ";
        }
        virtual unsigned long tienDien() = 0;
        unsigned int soKW(){
            return chisomoi - chisocu;
        }
        unsigned long thueGTGT(){
            return tienDien() * 0.1;
        }
        virtual unsigned long tienUuDai() = 0;
        unsigned long tienThanhToan(){
            return tienDien() + thueGTGT() - tienUuDai();
        }
        unsigned int getThang(){return thang;}
        unsigned int getNam(){return nam;}
        virtual string loaikh() {return "";}
        virtual ~cDienLuc() {}
};