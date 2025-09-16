// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#include <iostream>
#include "cListNgT.h"
#include "cListNT.h"
using namespace std;

int main()
{
    cListNT x;
    cListNgT y;
    x.NhapNt();
    y.NhapNgt();
    x.XuatNt();
    unsigned long dtnt = x.TongDoanhThuNT(), dtngt = y.TongDoanhThuNgT();
    cout << "Tong doanh thu chuyen xe noi thanh: " << dtnt << endl;
    y.XuatNgt();
    cout << "\nTong doanh thu chuyen xe ngoai thanh: " << dtngt << endl;
    cout << "\nTong doanh thu cua tat ca cac chuyen xe: " << dtnt + dtngt << endl;
    system("pause");
    return 0;
}
