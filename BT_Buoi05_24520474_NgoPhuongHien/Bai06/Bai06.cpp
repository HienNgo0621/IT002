// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#include "cListSinhVien.h"
#include <iostream>
using namespace std;

int main()
{
    cListSinhVien a;
    unsigned int x, y;
    cout << "---Nhap thong tin sinh vien cao dang---\n";
    a.NhapCD(x);
    cout << "\n---Nhap thong tin sinh vien dai hoc---\n";
    a.NhapDH(y);

    cout << "\n---Danh sach cac sinh vien---\n";
    a.XuatDS();

    cout << "\n---Dach sach cac sinh vien du dieu kien tot nghiep---\n";
    cListSinhVien dudk = a.DuDKTN();
    dudk.XuatDS();

    cout << "\n---Dach sach cac sinh vien khong du dieu kien tot nghiep---\n";
    cListSinhVien kdudk = a.KhongDuDKTN();
    kdudk.XuatDS();

    cout << "\n---Sinh vien dai hoc co diem trung binh cao nhat---\n";
    cListSinhVien maxDTB = a.DTB_CaoNhat_DaiHoc();
    maxDTB.XuatDS();

    system("pause");
    return 0;
}