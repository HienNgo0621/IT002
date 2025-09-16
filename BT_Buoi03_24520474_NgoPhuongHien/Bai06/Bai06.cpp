// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#include <string>
#include <iostream>
#include "cListCandidate.h"
#include <vector>
using namespace std;

int main()
{
    cListCandidate a;
    int n;
    cout << "Nhap so luong thi sinh: ";
    cin >> n;
    a.Nhap(n);

    cListCandidate Hon15 = a.LonHon15();
    cout << "\nDanh sach thi sinh co tong diem lon hon 15." << endl;
    Hon15.Xuat();

    cout << "\nThi sinh co tong diem cao nhat." << endl;
    cCandidate maxD = a.MaxDiem();
    cout << maxD;

    cout << "\nDanh sach thi sinh giam dan theo tong diem." << endl;
    cListCandidate giam = a.Giam();
    giam.Xuat();

    system("pause");
    return 0;
}
