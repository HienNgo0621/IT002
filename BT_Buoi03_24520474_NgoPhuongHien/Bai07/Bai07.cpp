// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#include <iostream>
#include <string>
#include "Date.h"
#include "DSNhanVien.h"
#include <vector>
using namespace std;

int main()
{
    DSNhanVien a;
    int n;
    cout << "Nhap so luong nhan vien van phong: ";
    cin >> n;
    cout << "\nNhap danh sach nhan vien van phong." << endl;
    a.Nhap(n);

    cout << "\nDanh sach nhan vien van phong." << endl;
    a.Xuat();
    cout << endl;

    cout << "\nNhan vien van phong co luong cao nhat." << endl;
    DSNhanVien maxLuong = a.maxLuong();
    maxLuong.Xuat();

    cout << "\nTong luong cong ty phai tra: " << a.TongLuong() << endl;

    cout << "\nNhan vien van phong co tuoi cao nhat." << endl;
    DSNhanVien maxTuoi = a.maxTuoi();
    maxTuoi.Xuat();

    cout << "\nDanh sach nhan vien van phong tang dan theo luong." << endl;
    DSNhanVien tang = a.Tang();
    tang.Xuat();

    system("pause");
    return 0;
}