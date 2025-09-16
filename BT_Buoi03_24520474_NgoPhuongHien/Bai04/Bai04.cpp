// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#include <iostream>
#include <vector>
#include <algorithm>
#include "cArray.h"
using namespace std;

int main()
{
    cout << "Nhap so phan tu cua mang: ";
    int n;
    cin >> n;
    cArray a(n);

    cout << "\nCac phan tu cua mang (sau khi tao ngau nhien tu -100 den 100)." << endl;
    a.Xuat();

    cout << "\nNhap so x muon tim: ";
    int x;
    cin >> x;
    cout << "\nSo lan xuat hien cua x trong mang: " << a.DemX(x) << endl;

    cout << "\nKiem tra tinh tang dan cua mang: " << (a.isTangDan() ? "Co" : "Khong") << endl;

    int minLe, maxNT;
    cout << "\nPhan tu le nho nhat trong mang: ";
    if (a.Tim_minLe(minLe))
    {
        cout << minLe << endl;
    }
    else
        cout << "Khong co" << endl;

    cout << "\nSo nguyen to lon nhat trong mang: ";
    if (a.Tim_MaxSNT(maxNT))
    {
        cout << maxNT << endl;
    }
    else
        cout << "Khong co" << endl;

    cArray tang = a.TangDan();
    cout << "\nSap xep mang theo thu tu tang dan." << endl;
    tang.Xuat();

    cArray giam = a.GiamDan();
    cout << "\nSap xep mang theo thu tu giam dan." << endl;
    giam.Xuat();

    system("pause");
    return 0;
}