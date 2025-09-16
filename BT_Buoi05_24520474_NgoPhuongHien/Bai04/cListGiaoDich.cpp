// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#include "cDat.h"
#include "cNhaPho.h"
#include "cChungCu.h"
#include "cListGiaoDich.h"
#include <iostream>
#include <vector>
using namespace std;

cListGiaoDich ::cListGiaoDich(const std ::vector<cDat> &d, const std ::vector<cNhaPho> &np, const std ::vector<cChungCu> &cc)
{
    dat = d;
    nha = np;
    chungcu = cc;
}

void cListGiaoDich ::NhapDat(unsigned int n)
{
    cout << "Nhap so giao dich dat: ";
    cin >> n;
    dat.resize(n);
    for (int i = 0; i < n; i++)
    {
        cout << "+ Nhap thong tin giao dich dat thu " << i + 1 << ".\n";
        dat[i].Nhap();
    }
}

void cListGiaoDich ::NhapNha(unsigned int n)
{
    cout << "Nhap so giao dich nha pho: ";
    cin >> n;
    nha.resize(n);
    for (int i = 0; i < n; i++)
    {
        cout << "+ Nhap thong tin giao dich nha pho thu " << i + 1 << ".\n";
        nha[i].Nhap();
    }
}

void cListGiaoDich ::NhapChungCu(unsigned int n)
{
    cout << "Nhap so giao dich can ho chung cu: ";
    cin >> n;
    chungcu.resize(n);
    for (int i = 0; i < n; i++)
    {
        cout << "+ Nhap thong tin giao dich can ho chung cu thu " << i + 1 << ".\n";
        chungcu[i].Nhap();
    }
}

void cListGiaoDich ::XuatDat()
{
    for (int i = 0; i < dat.size(); i++)
    {
        dat[i].Xuat();
    }
}

void cListGiaoDich ::XuatNha()
{
    for (int i = 0; i < nha.size(); i++)
    {
        nha[i].Xuat();
    }
}

void cListGiaoDich ::XuatChungCu()
{
    for (int i = 0; i < chungcu.size(); i++)
    {
        chungcu[i].Xuat();
    }
}

void cListGiaoDich ::TongSoLuong()
{
    unsigned int cnta = 0, cntb = 0, cntc = 0;
    for (int i = 0; i < dat.size(); i++)
    {
        char c = dat[i].getLoaiDat();
        if (c == 'A')
            cnta++;
        else if (c == 'B')
            cntb++;
        else
            cntc++;
    }
    cout << "Tong so luong dat loai A: " << cnta << endl;
    cout << "Tong so luong dat loai B: " << cntb << endl;
    cout << "Tong so luong dat loai C: " << cntc << endl;

    unsigned int cntcc = 0, cntt = 0;
    for (int i = 0; i < nha.size(); i++)
    {
        string s = nha[i].getLoaiNha();
        if (s == "cao cap")
            cntcc++;
        else
            cntt++;
    }
    cout << "Tong so luong nha pho loai cao cap: " << cntcc << endl;
    cout << "Tong so luong nha pho loai thuong: " << cntt << endl;

    unsigned int cnt1 = 0, cnt15 = 0, cntcl = 0;
    for (int i = 0; i < chungcu.size(); i++)
    {
        unsigned char c = chungcu[i].getViTriTang();
        if (c == 1)
            cnt1++;
        else if (c >= 15)
            cnt15++;
        else
            cntcl++;
    }
    cout << "Tong so luong can ho chung cu o tang 1: " << cnt1 << endl;
    cout << "Tong so luong can ho chung cu tu tang 15 tro len: " << cnt15 << endl;
    cout << "Tong so luong can ho chung cu cac tang con lai: " << cntcl << endl;
}

double cListGiaoDich ::TB_ThanhTien_ChungCu()
{
    double sum = 0;
    for (int i = 0; i < chungcu.size(); i++)
    {
        sum += chungcu[i].thanhTien();
    }
    return sum / chungcu.size();
}

cListGiaoDich cListGiaoDich ::Max_NhaPho()
{
    vector<cNhaPho> maxgd;
    double max = nha[0].thanhTien();
    for (int i = 0; i < nha.size(); i++)
    {
        if (max < nha[i].thanhTien())
            max = nha[i].thanhTien();
    }

    for (int i = 0; i < nha.size(); i++)
    {
        if (max == nha[i].thanhTien())
            maxgd.push_back(nha[i]);
    }
    return cListGiaoDich({}, maxgd, {});
}

cListGiaoDich cListGiaoDich ::GiaoDichThang12()
{
    vector<cDat> thang12d;
    vector<cNhaPho> thang12n;
    vector<cChungCu> thang12c;
    for (int i = 0; i < dat.size(); i++)
    {
        if (dat[i].getThang() == 12 && dat[i].getNam() == 2024)
            thang12d.push_back(dat[i]);
    }

    for (int i = 0; i < nha.size(); i++)
    {
        if (nha[i].getThang() == 12 && nha[i].getNam() == 2024)
            thang12n.push_back(nha[i]);
    }

    for (int i = 0; i < dat.size(); i++)
    {
        if (chungcu[i].getThang() == 12 && chungcu[i].getNam() == 2024)
            thang12c.push_back(chungcu[i]);
    }

    return cListGiaoDich(thang12d, thang12n, thang12c);
}