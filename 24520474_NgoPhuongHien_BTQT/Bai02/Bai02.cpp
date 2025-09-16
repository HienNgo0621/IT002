// Mã số sinh viên:24520474
// Họ và tên: Ngô Phương Hiền
// Ngày sinh:21/06/2006
// Lớp: IT002.P26.1

#include <iostream>
#include <string>
#include "DSSach.h"
#include <vector>
using namespace std;

int main()
{
    DSSach a;
    cout << "Nhap danh sach cac sach cua thu vien truong." << endl;
    a.Nhap();

    cout << "\nDanh sach cac sach cua thu vien truong." << endl;
    a.Xuat();

    DSSach minTT = a.MinThanhTien();
    cout << "\nCac sach co thanh tien phai tra it nhat." << endl;
    minTT.Xuat();

    string nxb_CanTim;
    cin.ignore();
    cout << "Nhap ten nha xuat ban sach giao khoa can tim: ";
    getline(cin, nxb_CanTim);
    DSSach nxb = a.NXB_GK(nxb_CanTim);
    nxb.Xuat();

    system("pause");
    return 0;
}