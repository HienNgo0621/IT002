#include "SanPham.h"
#include "Tranh.h"
#include "CD.h"
#include "KhachHang.h"
#include "HoaDon.h"
#include "listHD.h"
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    listHD ds;
    cout << "---Nhap danh sach cac hoa don---\n";
    ds.NhapDS();
    cout << "\n---Danh sach cac hoa don---\n";
    ds.XuatDS();
    cout << "\n===> Tong thu nhap cua cua hang: " << ds.tongThuNhap() << endl;
    listHD khmax = ds.muaMax();
    cout<< "\n---Cac khang hang mua nhieu nhat o cua hang---\n";
    khmax.XuatDS();
    system("pause");
    return 0;
}