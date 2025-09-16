// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#include <iostream>
#include <cmath>
#include "Complex_Number.h"
using namespace std;

int main()
{
    Complex_Number x, y;
    x.Input();
    y.Input();
    Complex_Number Sum = x.Sum(y);
    cout << "Tong hai so phuc: ";
    Sum.Output();
    Complex_Number Sub = x.Sub(y);
    cout << "\nHieu hai so phuc: ";
    Sub.Output();
    Complex_Number Mult = x.Mult(y);
    cout << "\nTich hai so phuc: ";
    Mult.Output();
    Complex_Number Div = x.Div(y);
    cout << "\nThuong hai so phuc: ";
    Div.Output();

    system("pause");
    return 0;
}