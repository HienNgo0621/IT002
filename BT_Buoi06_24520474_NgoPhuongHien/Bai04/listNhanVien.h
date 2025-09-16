// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#include "cNhanVien.h"
#include "cLapTrinhVien.h"
#include "cKiemChungVien.h"
#include <limits>
#include <iostream>
#include <vector>
using namespace std;

class listNhanVien
{
private:
    vector<cNhanVien *> nv;

public:
    listNhanVien(){}
    listNhanVien(const vector<cNhanVien *> &a)
    {
        nv = a;
    }
    void NhapDS()
    {
        unsigned int n;
        cout << "Nhap so luong nhan vien: ";
        cin >> n;
        nv.resize(n);
        for (int i = 0; i < n; i++)
        {
            unsigned int loainv;
            cout << "+ Chon loai nhan vien (1 - lap trinh vien, 2 - kiem chung vien): ";
            cin >> loainv;
            if (loainv == 1)
                nv[i] = new cLapTrinhVien;
            else
                nv[i] = new cKiemChungVien;
            nv[i]->Nhap();
        }
    }

    void XuatDS()
    {
        for (int i = 0; i < nv.size(); i++)
        {
            nv[i]->Xuat();
        }
    }

    unsigned long tinhLuongTrungBinh()
    {
        unsigned long sum = 0;
        for (int i = 0; i < nv.size(); i++)
        {
            sum += nv[i]->tinhLuong();
        }
        return sum / nv.size();
    }

    listNhanVien luongThapHonTB()
    {
        vector<cNhanVien *> thaptb;
        unsigned long luongtb = tinhLuongTrungBinh();
        for (int i = 0; i < nv.size(); i++)
        {
            if (nv[i]->tinhLuong() < luongtb)
                thaptb.push_back(nv[i]);
        }
        return listNhanVien(thaptb);
    }

    listNhanVien luongCaoNhat()
    {
        vector<cNhanVien *> maxluong;
        unsigned long max = 0;
        for (int i = 0; i < nv.size(); i++)
        {
            unsigned long luong = nv[i]->tinhLuong();
            if (luong > max)
                max = luong;
        }

        for (int i = 0; i < nv.size(); i++)
        {
            if (nv[i]->tinhLuong() == max)
                maxluong.push_back(nv[i]);
        }
        return listNhanVien(maxluong);
    }

    listNhanVien luongThapNhat()
    {
        vector<cNhanVien *> minluong;
        unsigned long min = numeric_limits<unsigned long>::max();
        for (int i = 0; i < nv.size(); i++)
        {
            unsigned long luong = nv[i]->tinhLuong();
            if (luong < min)
                min = luong;
        }

        for (int i = 0; i < nv.size(); i++)
        {
            if (nv[i]->tinhLuong() == min)
                minluong.push_back(nv[i]);
        }
        return listNhanVien(minluong);
    }

    listNhanVien locTheoLoai(string loai)
    {
        vector<cNhanVien *> loc;

        for (int i = 0; i < nv.size(); i++)
        {
            if (nv[i]->loai() == loai)
            {
                loc.push_back(nv[i]);
            }
        }

        return listNhanVien(loc);
    }

    listNhanVien LTVLuongCaoNhat()
    {
        listNhanVien dsltv = this->locTheoLoai("Lap trinh vien");
        return dsltv.luongCaoNhat();
    }

    listNhanVien KCVLuongThapNhat()
    {
        listNhanVien dskcv = this->locTheoLoai("Kiem chung vien");
        return dskcv.luongThapNhat();
    }
};