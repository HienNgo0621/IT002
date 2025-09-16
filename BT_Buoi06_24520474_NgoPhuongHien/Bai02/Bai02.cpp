// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#include <iostream>
#include "cChonGiaoDich.h"

int main()
{
    cChonGiaoDich a;
    a.NhapGD();
    cout << "\n";
    a.tongTungLoai();
    cout << "\nTrung binh thanh tien cua Can ho chung cu: " << a.TBThanhTienChungCu() << endl;
    cout << "\nGiao dich nha pho co gia tri cao nhat: ";
    cChonGiaoDich MaxNhaPho = a.maxTTNhaPho();
    MaxNhaPho.XuatGD();
    cChonGiaoDich thang12 = a.GD12_2024();
    cout << "\nDanh sach cac giao dich thang 12 nam 2024\n";
    thang12.XuatGD();

    system("pause");
    return 0;
}