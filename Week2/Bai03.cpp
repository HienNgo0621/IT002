// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#include<iostream>
#include<cmath>
using namespace std;

class Complex_Number{
    private:
        float iRealPart, iImaginaryPart;
    public:
        Complex_Number(float r = 0, float i = 0);
        void Input();
        void Output() const;
        Complex_Number Sum(const Complex_Number &b);
        Complex_Number Sub(const Complex_Number &b);
        Complex_Number Mult(const Complex_Number &b);
        Complex_Number Div(const Complex_Number &b);
};

Complex_Number ::Complex_Number(float r, float i){
    iRealPart = r;
    iImaginaryPart = i;
}

void Complex_Number ::Input(){
    cout << "Nhap phan thuc: "; cin >> iRealPart;
    cout << "Nhap phan ao: "; cin >> iImaginaryPart;
}

void Complex_Number ::Output() const{
    if (iImaginaryPart == 0){
        cout << iRealPart << endl;
    }
    else if (iImaginaryPart == 1){
        cout << iRealPart << "+i" << endl;
    }
    else if (iImaginaryPart == -1){
        cout << iRealPart << "-i" << endl;
    }
    else if (iImaginaryPart < 0){
        cout << iRealPart << iImaginaryPart << "i" << endl;
    }
    else {
        cout << iRealPart << "+" << iImaginaryPart << "i" << endl;
    }
}

Complex_Number Complex_Number ::Sum(const Complex_Number &b){
    Complex_Number sum;
    sum.iRealPart = iRealPart + b.iRealPart;
    sum.iImaginaryPart = iImaginaryPart + b.iImaginaryPart;
    return sum;
}

Complex_Number Complex_Number ::Sub(const Complex_Number &b){
    Complex_Number sub;
    sub.iRealPart = iRealPart - b.iRealPart;
    sub.iImaginaryPart = iImaginaryPart - b.iImaginaryPart;
    return sub;
}
Complex_Number Complex_Number ::Mult(const Complex_Number &b){
    Complex_Number mul;
    mul.iRealPart = iRealPart * b.iRealPart - iImaginaryPart * b.iImaginaryPart;
    mul.iImaginaryPart = iRealPart * b.iImaginaryPart + iImaginaryPart * b.iRealPart;
    return mul;
}

Complex_Number Complex_Number ::Div(const Complex_Number &b){
    Complex_Number div;
    float k = (pow(b.iRealPart, 2) + pow(b.iImaginaryPart, 2));
    div.iRealPart = (iRealPart * b.iRealPart + iImaginaryPart * b.iImaginaryPart) / k;
    div.iImaginaryPart = (iImaginaryPart * b.iRealPart - iRealPart * b.iImaginaryPart) / k;
    return div;
}

int main (){
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

