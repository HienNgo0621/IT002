// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#include <iostream>
#include <string>
#include "Vehicle.h"
using namespace std;

int main()
{
    Vehicle xe1("Nguyen Thi An", "Honda Vision", 42310000, 110.5);
    Vehicle xe2("Nguyen Van Binh", "Air Blade", 40000000, 125);
    cout << "Nhap thong tin cho xe 3" << endl;
    Vehicle xe3;

    cout << "\nBang ke khai thong tin dang ky xe" << endl;
    cout << "Xe 1:" << endl;
    xe1.XuatKeKhai();
    cout << "Xe 2:" << endl;
    xe2.XuatKeKhai();
    cout << "Xe 3: " << endl;
    xe3.XuatKeKhai();

    system("pause");
    return 0;
}