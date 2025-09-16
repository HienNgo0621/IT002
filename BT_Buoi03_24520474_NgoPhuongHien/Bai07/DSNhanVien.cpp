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

istream &operator>>(istream &in, cNhanVienVP &a)
{
    cout << "Nhap ma so nhan vien: ";
    in >> a.id;
    cout << "Nhap ho va ten nhan vien: ";
    in >> ws;
    getline(in, a.name);
    cout << "Nhap ngay sinh nhan vien." << endl;
    a.birth.Input();
    cout << "Nhap luong nhan vien: ";
    in >> a.salary;
    return in;
}

ostream &operator<<(std ::ostream &out, const cNhanVienVP &a)
{
    out << a.id << " " << a.name << " ";
    a.birth.Output();
    out << " " << a.salary;
    return out;
}

string cNhanVienVP ::getId()
{
    return id;
}

string cNhanVienVP ::getName()
{
    return name;
}

long long cNhanVienVP ::getSalary()
{
    return salary;
}

void cNhanVienVP ::setId(string id)
{
    id = id;
}
void cNhanVienVP ::setName(string n)
{
    name = n;
}

void cNhanVienVP ::setSalary(long long s)
{
    salary = s;
}

DSNhanVien ::DSNhanVien(const std ::vector<cNhanVienVP> &a)
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

DSNhanVien DSNhanVien ::maxLuong()
{
    vector<cNhanVienVP> max;
    long long maxLuong = ds[0].salary;
    for (int i = 0; i < ds.size(); i++)
    {
        if (maxLuong < ds[i].salary)
            maxLuong = ds[i].salary;
    }

    for (int i = 0; i < ds.size(); i++)
    {
        if (maxLuong == ds[i].salary)
            max.push_back(ds[i]);
    }
    return DSNhanVien(max);
}

long long DSNhanVien ::TongLuong()
{
    long long sum = 0;
    for (int i = 0; i < ds.size(); i++)
    {
        sum += ds[i].salary;
    }
    return sum;
}

DSNhanVien DSNhanVien ::maxTuoi()
{
    vector<cNhanVienVP> max;
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

void Swap(cNhanVienVP &a, cNhanVienVP &b)
{
    cNhanVienVP temp = a;
    a = b;
    b = temp;
}

int Partition(vector<cNhanVienVP> &v, int low, int high)
{
    cNhanVienVP pivot = v[high];
    int i = low - 1;

    for (int j = low; j < high; j++)
    {
        if (v[j].getSalary() < pivot.getSalary())
        {
            i++;
            Swap(v[i], v[j]);
        }
    }
    Swap(v[i + 1], v[high]);
    return i + 1;
}

// Ham QuickSort de quy
void QuickSort(vector<cNhanVienVP> &v, int low, int high)
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
