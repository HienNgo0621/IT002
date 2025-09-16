// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#include <iostream>
#include <cstring>
#include "String.h"
using namespace std;

int main()
{
    {
        String str;
        cout << "Nhap chuoi mac dinh: ";
        str.Input();
        cout << "Do dai chuoi la: " << str.StringLength() << endl;

        cout << "Nhap chuoi muon noi: ";
        char *a = new char[100];
        cin.getline(a, 100);
        cout << "Hai chuoi da duoc noi. ";
        str.StringCat(a);
        str.Output();
        delete[] a;

        cout << "\nChuoi sau khi dao nguoc: ";
        char *rev = str.ReverseString();
        cout << rev << endl;
        delete[] rev;

        cout << "Da duoc in hoa. ";
        str.UpperString();
        str.Output();

        cout << "Da duoc in thuong. ";
        str.LowerString();
        str.Output();
    }

    system("pause");
    return 0;
}