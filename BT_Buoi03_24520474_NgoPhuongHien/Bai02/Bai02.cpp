// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#include <iostream>
#include <string>
#include<vector>
#include "cDaGiac.h"
using namespace std;

int main()
{
    cDaGiac x;
    cout << "Nhap da giac." << endl;
    x.NhapDG();

    string dg = x.KiemTraDG();
    cout << "Day la da giac: " << dg << endl;
    if (dg != "Khong phai da giac")
    {
        cout << "\nChu vi da giac: " << x.ChuVi() << endl;
        cout << "\nDien tich da giac: " << x.DienTich() << endl;

        cout << "\nNhap toa do muon tinh tien." << endl;
        Diem t;
        t.Nhap();
        cout << "\nDa giac sau khi da tinh tien." << endl;
        cDaGiac tt = x.TinhTienDG(t.getHoanh(), t.getTung());
        tt.XuatDG();

        float goc;
        cout << "\nNhap goc muon quay: ";
        cin >> goc;
        cDaGiac q = x.QuayDG(goc);
        cout << "da giac sau khi quay." << endl;
        q.XuatDG();

        float k1;
        cout << "\nNhap chi so muon phong to: ";
        cin >> k1;
        cDaGiac pt = x.PhongToDG(k1);
        cout << "da giac sau khi phong to." << endl;
        pt.XuatDG();

        float k2;
        cout << "\nNhap chi so muon thu nho: ";
        cin >> k2;
        cDaGiac tn = x.ThuNhoDG(k2);
        cout << "da giac sau khi thu nho." << endl;
        tn.XuatDG();
    }

    system("pause");
    return 0;
}
