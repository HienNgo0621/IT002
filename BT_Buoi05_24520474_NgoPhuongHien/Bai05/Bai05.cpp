// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#include "cListNhanVien.h"
#include <vector>
#include <iostream>
using namespace std;

int main()
{
    cListNhanVien a;
    unsigned int x, y;
    cout << "---Nhap danh sach nhan vien san xuat---\n";
    a.NhapSX(x);
    cout << "\n---Nhap danh sach nhan vien van phong---\n";
    a.NhapVP(y);

    cout << "\nDanh sach thong tin cua nhan vien.\n";
    a.XuatDS();

    cout << "\nTong luong ma cong ty phai tra cho nhan vien: " << a.tinhTongLuong() << endl;
    system("pause");
    return 0;
}