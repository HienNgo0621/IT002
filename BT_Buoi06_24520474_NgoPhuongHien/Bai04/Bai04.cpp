// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#include "listNhanVien.h"
#include<limits>
#include<iostream>
#include<vector>
using namespace std;

int main(){
    listNhanVien a;
    cout << "---Nhap danh sach nhan vien---\n";
    a.NhapDS();

    cout << "\n---Danh sach nhan vien---\n";
    a.XuatDS();

    listNhanVien thapHonTB = a.luongThapHonTB();
    cout << "\n---Danh sach nhan vien co luong thap hon luong trung binh---\n";
    thapHonTB.XuatDS();

    listNhanVien luongcaonhat = a.luongCaoNhat();
    cout << "\n---Danh sach nhan vien co luong cao nhat---\n";
    luongcaonhat.XuatDS();

    listNhanVien luongthapnhat = a.luongThapNhat();
    cout << "\n---Danh sach nhan vien co luong thap nhat---\n";
    luongthapnhat.XuatDS();

    listNhanVien LTVluongcaonhat = a.LTVLuongCaoNhat();
    cout << "\n---Danh sach lap trinh vien co luong cao nhat---\n";
    LTVluongcaonhat.XuatDS();

    listNhanVien KCVluongthapnhat = a.KCVLuongThapNhat();
    cout << "\n---Danh sach kiem chung vien co luong thap nhat---\n";
    KCVluongthapnhat.XuatDS();

    system("pause");
    return 0;
}