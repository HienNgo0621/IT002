// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#include "cVector.h"
#include "cMatrix.h"
#include <vector>
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cVector a, b;
    cMatrix x, y;
    cout << "Nhap vector thu nhat.\n";
    cin >> a;
    cout << "Nhap vector thu hai.\n";
    cin >> b;
    cout << "Tong hai vector:\n"
         << a + b << endl;
    ;
    cout << "Hieu hai vector:\n"
         << a - b << endl;
    cout << "Nhap so muon nhan: ";
    float t;
    cin >> t;
    cout << "Tich vector thu nhat voi mot so:\n"
         << a * t << endl;
    cout << "Tich vector thu hai voi mot so:\n"
         << b * t << endl;
    float k = a.TichVoHuong(b);
    cout << "Tich vo huong cua hai vector: " << k << endl;
    if (a == b)
    {
        cout << "Hai vector bang nhau.\n";
    }
    else
    {
        cout << "Hai vector khong bang nhau.\n";
    }

    cout << endl;
    cout << "Nhap ma tran thu nhat.\n";
    cin >> x;
    cout << "Nhap ma tran thu hai.\n";
    cin >> y;
    cout << "Tong hai ma tran.\n"
         << x + y << endl;
    ;
    cout << "Hieu hai ma tran.\n"
         << x - y << endl;
    cout << "Nhap so muon nhan: ";
    float z;
    cin >> z;
    cout << "Tich ma tran thu nhat voi mot so.\n"
         << x * z << endl;
    cout << "Tich ma tran thu hai voi mot so.\n"
         << y * z << endl;
    cout << "Ma tran chuyen vi cua ma tran thu nhat.\n"
         << x.ChuyenVi() << endl;
    cout << "Ma tran chuyen vi cua ma tran thu hai.\n"
         << y.ChuyenVi() << endl;
    if (x == y)
    {
        cout << "Hai ma tran bang nhau.\n";
    }
    else
    {
        cout << "Hai ma tran khong bang nhau.\n";
    }
    cout << endl;

    cout << "Tich giua ma tran (thu nhat) va vector (thu nhat).\n"
         << a.TichMT_VT(x) << endl;
    cout << "Tich hai ma tran.\n"
         << x * y << endl;

    system("pause");
    return 0;
}