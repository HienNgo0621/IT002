// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#include <iostream>
#include "ChuyenXe.h"
using namespace std;

void ChuyenXe ::Nhap()
{
    cout << "Nhap ma so chuyen: ";
    cin.ignore();
    getline(cin, ms);
    cout << "Nhap ho ten tai xe: ";
    getline(cin, ten);
    cout << "Nhap so xe: ";
    getline(cin, sxe);
    cout << "Nhap doanh thu: ";
    cin >> doanhthu;
}

void ChuyenXe ::Xuat()
{
    cout << "Ma so chuyen: " << ms << endl;
    cout << "Ho va ten tai xe: " << ten << endl;
    cout << "Bien so xe: " << sxe << endl;
    cout << "Doanh thu chuyen xe: " << doanhthu << endl;
}

unsigned long ChuyenXe ::getDoanhThu()
{
    return doanhthu;
}