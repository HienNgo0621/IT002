#include <iostream>
#include <string>
#include <cmath>
#include "cTamGiac.h"
using namespace std;

void Diem ::Nhap()
{
    cout << "Nhap hoanh do: ";
    cin >> iHoanhDo;
    cout << "Nhap tung do: ";
    cin >> iTungDo;
}

void Diem ::Xuat() const
{
    cout << "(" << iHoanhDo << ", " << iTungDo << ")" << endl;
}

float Diem ::KhoangCach2Diem(const Diem &a)
{
    double dis = sqrt(pow((iHoanhDo - a.iHoanhDo), 2) + pow((iTungDo - a.iTungDo), 2));
    return dis;
}

Diem Diem ::TinhTien(float a, float b)
{
    Diem tt;
    tt.iHoanhDo = iHoanhDo + a;
    tt.iTungDo = iTungDo + b;
    return tt;
}

Diem Diem ::Quay(float goc)
{
    Diem q;
    float rad = goc * M_PI / 180;
    q.iHoanhDo = iHoanhDo * cos(rad) - iTungDo * sin(rad);
    q.iTungDo = iHoanhDo * sin(rad) + iTungDo * cos(rad);
    return q;
}

Diem Diem ::DiChuyenkLan(float k)
{
    return Diem(k * iHoanhDo, k * iTungDo);
}

void cTamGiac ::NhapTG()
{
    cout << "Nhap dinh A." << endl;
    A.Nhap();
    cout << "\nNhap dinh B." << endl;
    B.Nhap();
    cout << "\nNhap dinh C." << endl;
    C.Nhap();
}

void cTamGiac ::XuatTG() const
{
    cout << "A";
    A.Xuat();
    cout << "\nB";
    B.Xuat();
    cout << "\nC";
    C.Xuat();
}

bool LaTamGiacVuong(float a, float b, float c)
{
    return fabs(a * a + b * b - c * c) < 1e-5;
}

string cTamGiac ::KiemTraTG()
{
    float AB = A.KhoangCach2Diem(B);
    float BC = B.KhoangCach2Diem(C);
    float AC = A.KhoangCach2Diem(C);
    if ((AB + AC > BC) &&
        (AB + BC > AC) &&
        (AC + BC > AB))
    {
        if (AB == BC && BC == AC)
        {
            return "Tam giac deu";
        }

        else if (LaTamGiacVuong(AB, BC, AC) || LaTamGiacVuong(AB, AC, BC) || LaTamGiacVuong(AC, BC, AB))
        {
            return "Tam giac vuong";
        }

        else if (AB == BC || AB == AC || BC == AC)
        {
            return "Tam giac can";
        }

        else
            return "Tam giac thuong";
    }
    else
        return "Khong phai tam giac";
}

float cTamGiac ::ChuVi()
{
    return (A.KhoangCach2Diem(B) + B.KhoangCach2Diem(C) + A.KhoangCach2Diem(C));
}

float cTamGiac ::DienTich()
{
    float NuaChuVi = ChuVi() / 2;
    return sqrt(NuaChuVi * (NuaChuVi - A.KhoangCach2Diem(B)) * (NuaChuVi - B.KhoangCach2Diem(C)) * (NuaChuVi - A.KhoangCach2Diem(C)));
}

cTamGiac cTamGiac ::TinhTienTG(float a, float b)
{
    Diem A1 = A.TinhTien(a, b);
    Diem B1 = B.TinhTien(a, b);
    Diem C1 = C.TinhTien(a, b);
    return cTamGiac(A1, B1, C1);
}

cTamGiac cTamGiac ::QuayTG(float goc)
{
    return cTamGiac(A.Quay(goc), B.Quay(goc), C.Quay(goc));
}

cTamGiac cTamGiac ::PhongToTG(float k)
{
    return cTamGiac(A.DiChuyenkLan(k), B.DiChuyenkLan(k), C.DiChuyenkLan(k));
}

cTamGiac cTamGiac ::ThuNhoTG(float k)
{
    return cTamGiac(A.DiChuyenkLan(1 / k), B.DiChuyenkLan(1 / k), C.DiChuyenkLan(1 / k));
}
