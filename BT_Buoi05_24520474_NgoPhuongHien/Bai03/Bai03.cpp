// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#include "cTienTe.h"
#include "cVang.h"
#include "cListGiaoDich.h"
#include <iostream>
#include <limits>
using namespace std;

int main()
{
    cListGiaoDich a;
    cout << "---Nhap danh sach cac giao dich vang---\n";
    a.NhapVang();
    cout << "\n---Nhap danh sach cac giao dich tien te---\n";
    a.NhapTien();

    cout << "\n- Giao dich vang co thanh tien cao nhat.\n";
    cListGiaoDich maxThanhTienVang = a.Max_Vang();
    maxThanhTienVang.XuatVang();

    cout << "\n- Giao dich ngoai te EURO co gia tri thanh tien thap nhat.\n";
    cListGiaoDich minThanhTienEURO = a.Min_Euro();
    minThanhTienEURO.XuatTien();

    cout << "\n- Cac giao dich co thanh tien tren 1 ty dong.\n";
    cListGiaoDich giaoDichTren1Ty = a.GD_tren_1ty();
    giaoDichTren1Ty.XuatVang();
    giaoDichTren1Ty.XuatTien();

    system("pause");
    return 0;
}