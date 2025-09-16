// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#include <iostream>
#include "cSoPhuc.h"
using namespace std;

int main()
{
    cSoPhuc a, b;
    cout << "Nhap so phuc thu nhat." << endl;
    cin >> a;
    cout << "Nhap so phuc thu hai." << endl;
    cin >> b;

    cSoPhuc tong = a + b;
    cout << "Tong hai so phuc: " << tong;

    cSoPhuc hieu = a - b;
    cout << "Hieu hai so phuc: " << hieu;

    cSoPhuc tich = a * b;
    cout << "Tich hai so phuc: " << tich;

    cSoPhuc thuong = a / b;
    cout << "Thuong hai so phuc: " << thuong;

    if (a == b)
    {
        cout << "Hai so phuc bang nhau" << endl;
    }
    else
        cout << "Hai so phuc khac nhau" << endl;

    system("pause");
    return 0;
}