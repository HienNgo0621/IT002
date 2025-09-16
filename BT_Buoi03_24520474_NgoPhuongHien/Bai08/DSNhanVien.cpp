#include <iostream>
#include <string>
#include "Date.h"
#include "DSNhanVien.h"
#include <vector>
using namespace std;

void Date ::Input()
{
    cout << "Nhap ngay: ";
    cin >> day;
    cout << "Nhap thang: ";
    cin >> month;
    cout << "Nhap nam: ";
    cin >> year;
}

void Date ::Output() const
{
    cout << day << "/" << month << "/" << year;
}

bool Date ::isValid()
{
    if (year <= 0 || month < 1 || month > 12 || day < 1)
        return false;

    int DaysInMonth[] = {0, 31, isLeapYear() ? 29 : 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    return day <= DaysInMonth[month];
}

bool Date ::isLeapYear()
{
    if (year % 4 != 0 || (year % 100 == 0 && year % 400 != 0))
        return false;
    return true;
}

long long Date ::TongNgay()
{
    long long tong_year = 0;
    int tong_month = 0;

    for (int i = 1; i < year; i++)
    {
        if (i % 4 == 0 && (i % 100 != 0 || i % 400 == 0))
            tong_year += 366;
        else
            tong_year += 365;
    }

    for (int i = 1; i < month; i++)
    {
        if (isLeapYear() && i == 2)
            tong_month += 29;
        else if (!isLeapYear() && i == 2)
            tong_month += 28;
        else if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
            tong_month += 31;
        else
            tong_month += 30;
    }

    return (tong_year + tong_month + day);
}

int Date ::getDay()
{
    return day;
}

int Date ::getMonth()
{
    return month;
}

int Date ::getYear()
{
    return year;
}

void Date ::setDay(int d)
{
    day = d;
}

void Date ::setMonth(int m)
{
    month = m;
}

void Date ::setYear(int y)
{
    year = y;
}

istream &operator>>(istream &in, cNhanVienSX &a)
{
    cout << "Nhap ma so nhan vien: ";
    in >> a.id;
    cout << "Nhap ho va ten nhan vien: ";
    in >> ws;
    getline(in, a.name);
    cout << "Nhap ngay sinh nhan vien." << endl;
    a.birth.Input();
    cout << "Nhap so san pham da gia cong: ";
    in >> a.product;
    cout << "Nhap don gia mot san pham: ";
    in >> a.valpro;
    return in;
}

ostream &operator<<(std ::ostream &out, cNhanVienSX a)
{
    out << a.id << " " << a.name << " ";
    a.birth.Output();
    out << " " << a.Salary();
    return out;
}

string cNhanVienSX ::getId()
{
    return id;
}

string cNhanVienSX ::getName()
{
    return name;
}

int cNhanVienSX ::getProDuct()
{
    return product;
}

long long cNhanVienSX ::getVal()
{
    return valpro;
}

void cNhanVienSX ::cNhanVienSX ::setId(string id)
{
    id = id;
}

void cNhanVienSX ::setName(string n)
{
    name = n;
}

void cNhanVienSX ::setProDuct(int p)
{
    product = p;
}

void cNhanVienSX ::setVal(long long v)
{
    valpro = v;
}

long long cNhanVienSX ::Salary()
{
    return ((long long)product * valpro);
}

DSNhanVien ::DSNhanVien(const std ::vector<cNhanVienSX> &a)
{
    ds = a;
    n = a.size();
}

void DSNhanVien ::Nhap(int n)
{
    ds.resize(n);
    for (int i = 0; i < ds.size(); i++)
    {
        cout << "Nhap nhan vien thu " << i + 1 << "." << endl;
        cin >> ds[i];
        cout << endl;
    }
}

void DSNhanVien ::Xuat()
{
    for (int i = 0; i < ds.size(); i++)
    {
        cout << ds[i] << endl;
    }
}

DSNhanVien DSNhanVien ::minLuong()
{
    vector<cNhanVienSX> min;
    long long minLuong = ds[0].Salary();
    for (int i = 0; i < ds.size(); i++)
    {
        if (minLuong > ds[i].Salary())
            minLuong = ds[i].Salary();
    }

    for (int i = 0; i < ds.size(); i++)
    {
        if (minLuong == ds[i].Salary())
            min.push_back(ds[i]);
    }
    return DSNhanVien(min);
}

long long DSNhanVien ::TongLuong()
{
    long long sum = 0;
    for (int i = 0; i < ds.size(); i++)
    {
        sum += ds[i].Salary();
    }
    return sum;
}

DSNhanVien DSNhanVien ::maxTuoi()
{
    vector<cNhanVienSX> max;
    long long maxTuoi = ds[0].birth.TongNgay();
    for (int i = 0; i < ds.size(); i++)
    {
        if (ds[i].birth.TongNgay() < maxTuoi)
            maxTuoi = ds[i].birth.TongNgay(); // ngay lon thi tuoi nho
    }

    for (int i = 0; i < ds.size(); i++)
    {
        if (ds[i].birth.TongNgay() == maxTuoi)
            max.push_back(ds[i]);
    }
    return DSNhanVien(max);
}

void Swap(cNhanVienSX &a, cNhanVienSX &b)
{
    cNhanVienSX temp = a;
    a = b;
    b = temp;
}

int Partition(vector<cNhanVienSX> &v, int low, int high)
{
    cNhanVienSX pivot = v[high];
    int i = low - 1;

    for (int j = low; j < high; j++)
    {
        if (v[j].Salary() < pivot.Salary())
        {
            i++;
            Swap(v[i], v[j]);
        }
    }
    Swap(v[i + 1], v[high]);
    return i + 1;
}

// Ham QuickSort de quy
void QuickSort(vector<cNhanVienSX> &v, int low, int high)
{
    if (low < high)
    {
        int pi = Partition(v, low, high);
        QuickSort(v, low, pi - 1);
        QuickSort(v, pi + 1, high);
    }
}

DSNhanVien DSNhanVien ::Tang()
{
    QuickSort(ds, 0, ds.size() - 1);
    return DSNhanVien(ds);
}
