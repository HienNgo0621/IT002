// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#include "cTime.h"
#include "cDate.h"
#include "InterestRate.h"
#include <iostream>
using namespace std;

double TienLai(double money, float interestRate, double soGiay)
{
    if (soGiay < 0)
    {
        cout << "Thoi gian khong hop le!" << endl;
        return 0;
    }
    return (money * interestRate * soGiay / (365 * 24 * 3600));
}

int main()
{
    InterestRate a, b;
    cout << "Nhap thoi gian gui tien.\n";
    a.Nhap();
    cout << "Nhap thoi gian rut tien.\n";
    b.Nhap();
    cout << "Nhap so tien gui vao: ";
    double money;
    cin >> money;
    cout << "Nhap lai suat (<=1): ";
    float rate;
    cin >> rate;
    double soGiay = b.soGiay(a);
    cout << "So tien lai nhan duoc khi rut la (xap xi): " << TienLai(money, rate, soGiay) << endl;

    system("pause");
    return 0;
}