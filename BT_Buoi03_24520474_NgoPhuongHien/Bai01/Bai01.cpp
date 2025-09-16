// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#include <iostream>
#include <string>
#include "cTamGiac.h"
using namespace std;

int main()
{
    Diem A, B, C;
    cTamGiac x(A, B, C);
    cout << "Nhap tam giac ABC." << endl;
    x.NhapTG();

    string tg = x.KiemTraTG();
    cout << "\nDay la tam giac: " << tg << endl;
    if (tg != "Khong phai tam giac")
    {
        cout << "\nChu vi tam giac: " << x.ChuVi() << endl;
        cout << "\nDien tich tam giac: " << x.DienTich() << endl;

        cout << "\nNhap toa do muon tinh tien." << endl;
        Diem t;
        t.Nhap();
        cout << "Tam giac sau khi da tinh tien." << endl;
        cTamGiac tt = x.TinhTienTG(t.getHoanh(), t.getTung());
        tt.XuatTG();

        float goc;
        cout << "\nNhap goc muon quay: ";
        cin >> goc;
        cTamGiac q = x.QuayTG(goc);
        cout << "Tam giac sau khi quay." << endl;
        q.XuatTG();

        float k1;
        cout << "\nNhap chi so muon phong to: ";
        cin >> k1;
        cTamGiac pt = x.PhongToTG(k1);
        cout << "Tam giac sau khi phong to." << endl;
        pt.XuatTG();

        float k2;
        cout << "\nNhap chi so muon thu nho: ";
        cin >> k2;
        cTamGiac tn = x.ThuNhoTG(k2);
        cout << "Tam giac sau khi thu nho." << endl;
        tn.XuatTG();
    }

    system("pause");
    return 0;
}
