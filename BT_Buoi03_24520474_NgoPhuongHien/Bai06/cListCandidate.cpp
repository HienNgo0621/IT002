#include <string>
#include <iostream>
#include "cListCandidate.h"
#include <vector>
using namespace std;

istream &operator>>(std ::istream &in, cCandidate &a)
{
    cout << "Nhap ma thi sinh: ";
    in >> a.id;
    cout << "Nhap ho va ten thi sinh: ";
    in >> ws;
    getline(in, a.name);
    cout << "Nhap ngay sinh thi sinh: ";
    in >> a.birth;
    cout << "Nhap diem." << endl;
    cout << "Toan: ";
    in >> a.math;
    cout << "Van: ";
    in >> a.lite;
    cout << "Anh van: ";
    in >> a.eng;
    return in;
}

ostream &operator<<(std ::ostream &out, const cCandidate &a)
{
    cout << "Ma so thi sinh: ";
    out << a.id << endl;
    cout << "Ho va ten thi sinh: ";
    out << a.name << endl;
    cout << "Ngay sinh thi sinh: ";
    out << a.birth << endl;
    cout << "Diem cua thi sinh." << endl;
    cout << "Toan: ";
    out << a.math << endl;
    cout << "Van: ";
    out << a.lite << endl;
    cout << "Anh van: ";
    out << a.eng << endl;
    return out;
}

float cCandidate ::TongDiem()
{
    return (math + lite + eng);
}

cListCandidate ::cListCandidate(const vector<cCandidate> &a)
{
    ds = a;
    n = a.size();
}

void cListCandidate ::Nhap(int n)
{
    ds.resize(n);
    for (int i = 0; i < ds.size(); i++)
    {
        cout << "\nNhap thong tin sinh vien thu " << i + 1 << ".\n";
        cin >> ds[i];
    }
}
void cListCandidate ::Xuat()
{
    for (int i = 0; i < ds.size(); i++)
    {
        cout << "\nThong tin sinh vien thu " << i + 1 << ".\n";
        cout << ds[i];
    }
}

cCandidate cListCandidate ::MaxDiem()
{
    cCandidate maxDiem = ds[0];
    for (int i = 0; i < ds.size(); i++)
    {
        if (maxDiem.TongDiem() < ds[i].TongDiem())
            maxDiem = ds[i];
    }
    return maxDiem;
}

void Swap(cCandidate &a, cCandidate &b)
{
    cCandidate temp = a;
    a = b;
    b = temp;
}

int Partition(vector<cCandidate> &v, int low, int high)
{
    cCandidate pivot = v[high];
    int i = low - 1;

    for (int j = low; j < high; j++)
    {
        if (v[j].TongDiem() > pivot.TongDiem())
        {
            i++;
            Swap(v[i], v[j]);
        }
    }
    Swap(v[i + 1], v[high]);
    return i + 1;
}

// Ham QuickSort de quy
void QuickSort(vector<cCandidate> &v, int low, int high)
{
    if (low < high)
    {
        int pi = Partition(v, low, high);
        QuickSort(v, low, pi - 1);
        QuickSort(v, pi + 1, high);
    }
}

cListCandidate cListCandidate ::Giam()
{
    QuickSort(ds, 0, ds.size() - 1);
    return cListCandidate(ds);
}

cListCandidate cListCandidate ::LonHon15()
{
    vector<cCandidate> v;
    for (int i = 0; i < ds.size(); i++)
    {
        if (ds[i].TongDiem() > 15)
            v.push_back(ds[i]);
    }
    return cListCandidate(v);
}