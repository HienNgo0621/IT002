// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#include "cMatrix.h"
#include <vector>
#include <iostream>
#include <cmath>
using namespace std;

cMatrix ::cMatrix(int row, int column)
{
    this->n = row;
    mt.resize(row);
    this->m = column;
    for (int i = 0; i < row; i++)
    {
        mt[i].resize(column);
    }
}

cMatrix ::cMatrix(const std ::vector<std ::vector<float>> &a)
{
    mt = a;
    m = a[0].size();
    n = a.size();
}

istream &operator>>(istream &in, cMatrix &a)
{
    cout << "Nhap so hang cua ma tran: ";
    in >> a.n;
    a.mt.resize(a.n);
    cout << "Nhap so cot cua ma tran: ";
    in >> a.m;
    for (int i = 0; i < a.n; i++)
    {
        a.mt[i].resize(a.m);
    }
    cout << "Nhap ma tran." << endl;
    for (int i = 0; i < a.mt.size(); i++)
    {
        for (int j = 0; j < a.mt[0].size(); j++)
        {
            in >> a.mt[i][j];
        }
    }
    return in;
}

ostream &operator<<(ostream &out, const cMatrix &a)
{
    for (int i = 0; i < a.mt.size(); i++)
    {
        for (int j = 0; j < a.mt[0].size(); j++)
        {
            out << a.mt[i][j] << " ";
        }
        out << "\n";
    }
    return out;
}

cMatrix cMatrix ::operator+(const cMatrix &a)
{
    if (mt.size() != a.mt.size() || mt[0].size() != a.mt[0].size())
    {
        throw invalid_argument("Loi! Hai ma tran khong cung kich thuoc.");
    }
    cMatrix tong(mt.size(), mt[0].size());
    for (int i = 0; i < a.mt.size(); i++)
    {
        for (int j = 0; j < a.mt[0].size(); j++)
        {
            tong.mt[i][j] = mt[i][j] + a.mt[i][j];
        }
    }
    return tong;
}

cMatrix cMatrix ::operator-(const cMatrix &a)
{
    if (mt.size() != a.mt.size() || mt[0].size() != a.mt[0].size())
    {
        throw invalid_argument("Loi! Hai ma tran khong cung kich thuoc.");
    }
    cMatrix hieu(mt.size(), mt[0].size());
    for (int i = 0; i < a.mt.size(); i++)
    {
        for (int j = 0; j < a.mt[0].size(); j++)
        {
            hieu.mt[i][j] = mt[i][j] - a.mt[i][j];
        }
    }
    return hieu;
}

cMatrix cMatrix ::operator*(const cMatrix &a)
{
    if (m != a.n)
    {
        throw invalid_argument("Số cột của ma trận A phải bằng số hàng của ma trận B.");
    }

    vector<vector<float>> tich(n, vector<float>(m, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < a.m; j++)
        {
            for (int k = 0; k < m; k++)
            {
                tich[i][j] += mt[i][k] * a.mt[k][j];
            }
        }
    }

    return cMatrix(tich);
}

cMatrix cMatrix ::operator*(float a)
{
    cMatrix tongK(mt.size(), mt[0].size());
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            tongK.mt[i][j] = a * mt[i][j];
        }
    }
    return tongK;
}

cMatrix cMatrix ::ChuyenVi()
{
    cMatrix CV(mt[0].size(), mt.size());
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            CV.mt[j][i] = mt[i][j];
        }
    }
    return CV;
}

bool cMatrix ::operator==(const cMatrix &a)
{
    if (mt.size() != a.mt.size() || mt[0].size() != a.mt[0].size())
    {
        return false;
    }
    for (int i = 0; i < a.mt.size(); i++)
    {
        for (int j = 0; j < a.mt[0].size(); j++)
        {
            if (mt[i][j] != a.mt[i][j])
                return false;
        }
    }
    return true;
}