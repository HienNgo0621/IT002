#include <iostream>
#include <cmath>
#include "Complex_Number.h"
using namespace std;

Complex_Number ::Complex_Number(float r, float i)
{
    iRealPart = r;
    iImaginaryPart = i;
}

void Complex_Number ::Input()
{
    cout << "Nhap phan thuc: ";
    cin >> iRealPart;
    cout << "Nhap phan ao: ";
    cin >> iImaginaryPart;
}

void Complex_Number ::Output() const
{
    if(iRealPart == 0){
        cout << iImaginaryPart << "i" << endl;
    }
    else if (iImaginaryPart == 0)
    {
        cout << iRealPart << endl;
    }
    else if (iImaginaryPart == 1)
    {
        cout << iRealPart << "+i" << endl;
    }
    else if (iImaginaryPart == -1)
    {
        cout << iRealPart << "-i" << endl;
    }
    else if (iImaginaryPart < 0)
    {
        cout << iRealPart << iImaginaryPart << "i" << endl;
    }
    else
    {
        cout << iRealPart << "+" << iImaginaryPart << "i" << endl;
    }
}

Complex_Number Complex_Number ::Sum(const Complex_Number &b)
{
    Complex_Number sum;
    sum.iRealPart = iRealPart + b.iRealPart;
    sum.iImaginaryPart = iImaginaryPart + b.iImaginaryPart;
    return sum;
}

Complex_Number Complex_Number ::Sub(const Complex_Number &b)
{
    Complex_Number sub;
    sub.iRealPart = iRealPart - b.iRealPart;
    sub.iImaginaryPart = iImaginaryPart - b.iImaginaryPart;
    return sub;
}
Complex_Number Complex_Number ::Mult(const Complex_Number &b)
{
    Complex_Number mul;
    mul.iRealPart = iRealPart * b.iRealPart - iImaginaryPart * b.iImaginaryPart;
    mul.iImaginaryPart = iRealPart * b.iImaginaryPart + iImaginaryPart * b.iRealPart;
    return mul;
}

Complex_Number Complex_Number ::Div(const Complex_Number &b)
{
    Complex_Number div;
    float k = (pow(b.iRealPart, 2) + pow(b.iImaginaryPart, 2));
    div.iRealPart = (iRealPart * b.iRealPart + iImaginaryPart * b.iImaginaryPart) / k;
    div.iImaginaryPart = (iImaginaryPart * b.iRealPart - iRealPart * b.iImaginaryPart) / k;
    return div;
}