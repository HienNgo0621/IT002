// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#pragma once
#include<iostream>
using namespace std;

class cNhanVien{
    protected:
        string ma, hoten, sdt, mail;
        unsigned int tuoi;
        unsigned long luongcb;
    public:
        cNhanVien(string m = "", string ten = "", string sdt = "", string mail = "", unsigned int tuoi = 0, unsigned lcb = 0) : ma(m), hoten(ten), sdt(sdt), mail(mail), tuoi(tuoi), luongcb(lcb) {}
        virtual ~cNhanVien(){}
        virtual void Nhap() {
            cout << "Nhap ma nhan vien: "; 
            cin.ignore();
            getline(cin, ma);
            cout << "Nhap ho ten: ";
            getline(cin, hoten);
            cout << "Nhap tuoi: "; 
            cin >> tuoi;
            cout << "Nhap so dien thoai: "; cin >> sdt;
            cout << "Nhap email: "; cin >> mail;
            cout << "Nhap luong co ban: "; cin >> luongcb;
        }
        virtual void Xuat(){
            cout << loai() << ": " << ma << "\t" << hoten << "\t" << tuoi << " tuoi\t" << sdt << "\t" << mail << "\t" << luongcb << " VND\t";
        }
        virtual unsigned long tinhLuong() = 0;
        virtual string loai() = 0;
};