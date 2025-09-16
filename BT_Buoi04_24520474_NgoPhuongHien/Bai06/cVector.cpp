// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#include "cVector.h"
#include "cMatrix.h"
#include <vector>
#include <iostream>
#include <cmath>
using namespace std;

cVector ::cVector(int n)
{
    this->n = n;
    vt.resize(n);
}

cVector ::cVector(const std ::vector<float> &a)
{
    vt = a;
    n = a.size();
}

istream &operator>>(istream &in, cVector &a)
{
    cout << "Nhap so chieu cua vector: ";
    in >> a.n;
    a.vt.resize(a.n);
    cout << "Nhap toa do vector.\n";
    for (int i = 0; i < a.vt.size(); i++)
    {
        cout << "Toa do thu " << i + 1 << ": ";
        in >> a.vt[i];
    }
    return in;
}

ostream &operator<<(ostream &out, const cVector &a)
{
    for (int i = 0; i < a.vt.size(); i++)
    {
        out << a.vt[i] << endl;
    }
    return out;
}

cVector cVector ::operator+(const cVector &a)
{
    vector<float> tong;
    if (vt.size() == a.vt.size())
    {
        for (int i = 0; i < vt.size(); i++)
        {
            tong.push_back(vt[i] + a.vt[i]);
        }
        return cVector(tong);
    }
    else
    {
        cout << "Loi! Khong the thuc hien phep tinh, tra ve vector dau tien." << endl;
        return *this;
    }
}

cVector cVector ::operator-(const cVector &a)
{
    vector<float> hieu;
    if (vt.size() == a.vt.size())
    {
        for (int i = 0; i < vt.size(); i++)
        {
            hieu.push_back(vt[i] - a.vt[i]);
        }
        return cVector(hieu);
    }
    else
    {
        cout << "Loi! Khong the thuc hien phep tinh, tra ve vector dau tien." << endl;
        return *this;
    }
}

cVector cVector ::operator*(float a)
{
    vector<float> tich;
    for (int i = 0; i < vt.size(); i++)
    {
        tich.push_back(a * vt[i]);
    }
    return cVector(tich);
}

float cVector ::TichVoHuong(const cVector &a)
{
    float sum = 0;
    if (vt.size() == a.vt.size())
    {
        for (int i = 0; i < vt.size(); i++)
        {
            sum += vt[i] * a.vt[i];
        }
        return sum;
    }
    else
    {
        cout << "Loi! Khong the thuc hien phep tinh, tra ve NAN." << endl;
        return NAN;
    }
}

bool cVector ::operator==(const cVector &a)
{
    if (vt.size() != a.vt.size())
        return false;
    else
    {
        for (int i = 0; i < vt.size(); i++)
        {
            if (vt[i] != a.vt[i])
                return false;
        }
    }
    return true;
}

cVector cVector ::TichMT_VT(const cMatrix &a)
{
    vector<float> tich(a.n, 0);
    if (vt.size() == a.mt[0].size())
    {
        for (int i = 0; i < a.mt.size(); i++)
        {
            for (int j = 0; j < vt.size(); j++)
            {
                tich[i] += vt[j] * a.mt[i][j];
            }
        }
        return cVector(tich);
    }
    else
    {
        throw invalid_argument("Loi! Ma tran va Vector khong phu hop, tra ve Vector.");
    }
}
