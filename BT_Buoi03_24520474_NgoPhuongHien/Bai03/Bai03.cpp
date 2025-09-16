// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#include <iostream>
#include <vector>
#include <cmath>
#include "cDSPhanSo.h"
using namespace std;

int main()
{
    cDSPhanSo ds;
    ds.NhapDS();

    cout << "\nTong cac phan so: ";
    PhanSo Tong = ds.Tong();
    cout << Tong << endl;

    cout << "Phan so lon nhat: ";
    PhanSo max = ds.PSLonNhat();
    cout << max << endl;

    cout << "Phan so nho nhat: ";
    PhanSo min = ds.PSNhoNhat();
    cout << min << endl;

    cout << "Phan so co tu la so nguyen to lon nhat: ";
    PhanSo maxPrime;
    if (ds.Tu_maxSNT(maxPrime))
    {
        ;
        cout << maxPrime << endl;
    }
    else
        cout << "Khong co" << endl;

    cout << "\nDanh sach phan so tang dan: " << endl;
    cDSPhanSo tang = ds.DS_Tang();
    tang.XuatDS();

    cout << "Danh sach phan so giam dan: " << endl;
    cDSPhanSo giam = ds.DS_Giam();
    giam.XuatDS();

    system("pause");
    return 0;
}
