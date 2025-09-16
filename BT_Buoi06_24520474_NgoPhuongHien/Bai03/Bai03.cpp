// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#include <iostream>
#include "listSinhVien.h"
using namespace std;

int main()
{
    listSinhVien a;
    cout << "---Nhap danh sach sinh vien---\n";
    a.NhapDS();
    cout << "\n---Danh sach sinh vien---\n";
    a.XuatDS();

    cout << "\n---Danh sach sinh vien du dieu kien tot nghiep----\n";
    listSinhVien duDK = a.duDKTN();
    duDK.XuatDS();

    cout << "\n---Danh sach sinh vien khong du dieu kien tot nghiep---\n";
    listSinhVien kduDK = a.khongDuDKTN();
    kduDK.XuatDS();

    cout << "\n---Sinh vien dai hoc co diem trung binh cao nhat---\n";
    listSinhVien maxDH = a.maxDTBDaiHoc();
    maxDH.XuatDS();

    cout << "\n---Sinh vien cao dang co diem trung binh cao nhat---\n";
    listSinhVien maxCD = a.maxDTBCaoDang();
    maxCD.XuatDS();
    cout << "\n";
    a.soSV_KhongDuDKTN();

    system("pause");
    return 0;
}