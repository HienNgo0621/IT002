// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#include <iostream>
#include "Diem.h"
using namespace std;

int main()
{
    Diem x;
    float dx, dy;
    x.Nhap();
    // Diem tinh tien
    cout << "Nhap gia tri hoanh do tinh tien: ";
    cin >> dx;
    cout << "Nhap gia tri tung do tinh tien: ";
    cin >> dy;
    x.TinhTien(dx, dy);
    cout << "Toa do diem sau khi da tinh tien:" << endl;
    x.Xuat();

    // setter getter
    float set_x, set_y;
    cout << "\nNhap gia tri hoanh do moi: ";
    cin >> set_x;
    cout << "Nhap gia tri tung do moi: ";
    cin >> set_y;
    x.setHoanh(set_x);
    x.setTung(set_y);
    float h = x.getHoanh();
    float t = x.getTung();
    cout << "Toa do moi la: (" << h << ", " << t << ")" << endl;
    system("pause");
    return 0;
}