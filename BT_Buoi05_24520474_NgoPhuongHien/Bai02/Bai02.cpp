// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#include "cSach.h"
#include "cSachGK.h"
#include "cSachTK.h"
#include "cListSach.h"
#include <vector>
#include <iostream>
using namespace std;

int main()
{
    cListSach a;
    cout << "Nhap danh sach cac sach cua thu vien truong." << endl;
    cout << "---Danh sach cac sach giao khoa---\n";
    a.NhapGK();
    cout << "\n---Danh sach cac sach tham khao---\n";
    a.NhapTK();

    cout << "\nDanh sach cac sach cua thu vien truong." << endl;
    cout << "---Danh sach cac sach giao khoa---\n";
    a.XuatGK();
    cout << "Tong thanh tien: " << a.tongThanhTienGK() << endl;

    cout << "\n---Danh sach cac sach tham khao---\n";
    a.XuatTK();
    cout << "Tong thanh tien: " << a.tongThanhTienTK() << endl;
    cout << "Trung binh cong don gia cua cac sach tham khao: " << a.TBDonGiaTK() << endl;

    string nxb_CanTim;
    cin.ignore();
    cout << "\nNhap ten nha xuat ban sach giao khoa can tim: ";
    getline(cin, nxb_CanTim);
    cListSach nxb = a.NXB_GK(nxb_CanTim);
    nxb.XuatGK();

    system("pause");
    return 0;
}