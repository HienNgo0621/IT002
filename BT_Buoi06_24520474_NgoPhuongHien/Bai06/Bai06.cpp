// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#include "cKhachHang.h"
#include "cLoaiA.h"
#include "cLoaiB.h"
#include "cLoaiC.h"
#include <vector>
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream in("XYZ.INP");
    ofstream out("XYZ.OUT");

    vector<cKhachHang *> ds;
    unsigned int x, y, z;
    in >> x >> y >> z;
    for (int i = 0; i < x; i++)
    {
        cKhachHang *kh = new cLoaiA;
        kh->Nhap(in);
        ds.push_back(kh);
    }

    for (int i = 0; i < y; i++)
    {
        cKhachHang *kh = new cLoaiB;
        kh->Nhap(in);
        ds.push_back(kh);
    }

    for (int i = 0; i < z; i++)
    {
        cKhachHang *kh = new cLoaiC;
        kh->Nhap(in);
        ds.push_back(kh);
    }

    out << "---Danh sach khach hang---\n";

    for (int i = 0; i < x + y + z; i++)
    {
        ds[i]->Xuat(out);
        out << endl;
    }

    unsigned long sum = 0;
    for (int i = 0; i < x + y + z; i++)
    {
        sum += ds[i]->soTien();
    }

    out << "Tong so tien cong ty thu duoc: " << sum << endl;
    for (int i = 0; i < ds.size(); i++)
    {
        delete ds[i];
    }
    ds.clear();

    in.close();
    out.close();

    system("pause");
    return 0;
}