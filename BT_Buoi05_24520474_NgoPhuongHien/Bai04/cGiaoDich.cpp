// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#include "cGiaoDich.h"
#include <iostream>
using namespace std;

void cGiaoDich ::Nhap()
{
    cout << "Nhap ma giao dich: ";
    cin.ignore();
    getline(cin, ma);
    cout << "Nhap ngay, thang, nam giao dich (ngay thang nam): ";
    cin >> ngay >> thang >> nam;

    cout << "Nhap don gia: ";
    cin >> gia;

    cout << "Nhap dien tich: ";
    cin >> dientich;
}

void cGiaoDich ::Xuat()
{
    cout << ma << " " << ngay << "/" << thang << "/" << nam << " " << gia << " " << dientich << " ";
}

unsigned int cGiaoDich ::getThang()
{
    return thang;
};

unsigned int cGiaoDich ::getNam()
{
    return nam;
}