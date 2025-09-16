// Mã số sinh viên:24520474
// Họ và tên: Ngô Phương Hiền
// Ngày sinh:21/06/2006
// Lớp: IT002.P26.1

#include "SVCD.h"
#include "SVDH.h"
#include "DSSV.h"
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    DSSV a;
    cout << "Nhap danh sach sinh vien." << endl;
    a.Nhap();

    cout << "\nDanh sach sinh vien." << endl;
    a.Xuat();

    cout << "\nSo sinh vien du dieu kien tot nghiep: " << a.SVDuDKTN() << endl;

    DSSV maxDTB = a.MaxDTB();
    cout << "\nSinh vien dai hoc co diem trung binh cao nhat." << endl;
    maxDTB.Xuat();

    system("pause");
    return 0;
}