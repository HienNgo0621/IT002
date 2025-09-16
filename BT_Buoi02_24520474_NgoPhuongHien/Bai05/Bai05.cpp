// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#include <iostream>
#include <string>
#include "Date.h"
using namespace std;

int main()
{
    Date x;
    x.Input();
    while (!x.isValid())
    {
        cout << "\nThoi gian khong hop le! Moi nhap lai: " << endl;
        x.Input();
    }

    if (x.isLeapYear())
        cout << "La nam nhuan." << endl;
    else
        cout << "Khong phai nam nhuan." << endl;

    cout << "\nNhap thoi gian muon tang: " << endl;
    Date a;
    a.Input();
    Date in = x.IncreaseDate(a);
    cout << "Thoi gian sau khi tang: ";
    in.Output();
    cout << endl;

    cout << "\nNhap thoi gian muon giam: " << endl;
    Date b;
    b.Input();
    Date de = x.DecreaseDate(b);
    cout << "Thoi gian sau khi giam: ";
    de.Output();
    cout << endl;

    cout << "Thoi gian muon thay doi: " << endl;
    Date change;
    change.Input();
    while (!change.isValid())
    {
        cout << "\nThoi gian thay doi khong hop le! Moi Nhap lai." << endl;
        change.Input();
    }
    x.setDay(change.getDay());
    x.setMonth(change.getMonth());
    x.setYear(change.getYear());
    cout << "\nThoi gian sau khi thay doi: ";
    x.Output();

    system("pause");
    return 0;
}