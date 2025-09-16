// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#pragma once
#include <iostream>
#include <vector>
#include "cChungCu.h"
#include "cChungCu1.h"
#include "cChungCu15.h"
#include "cChungCuConLai.h"
#include "cDat.h"
#include "cDatA.h"
#include "cDatB.h"
#include "cDatC.h"
#include "cNha.h"
#include "cNhaCaoCap.h"
#include "cNhaThuong.h"
using namespace std;

class cChonGiaoDich
{
private:
    unsigned int loaigd, loaidat, loainha, vtri;
    vector<cGiaoDich *> gd;

public:
    cChonGiaoDich() {}
    cChonGiaoDich(const vector<cGiaoDich *> &a)
    {
        gd = a;
    }
    ~cChonGiaoDich()
    {
        for (int i = 0; i < gd.size(); i++)
        {
            delete gd[i];
        }
        gd.clear();
    }
    void NhapGD()
    {
        unsigned int n;
        cout << "Nhap so luong giao dich: ";
        cin >> n;
        gd.resize(n);
        for (int i = 0; i < n; i++)
        {
            cout << "Chon loai giao dich (1 - dat, 2 - nha pho, 3 - chung cu): ";
            cin >> loaigd;
            if (loaigd == 1)
            {
                cout << "Chon loai dat (1 - A, 2 - B, 3 - C): ";
                cin >> loaidat;
                if (loaidat == 1)
                    gd[i] = new cDatA;
                else if (loaidat == 2)
                    gd[i] = new cDatB;
                else
                    gd[i] = new cDatC;
            }
            else if (loaigd == 2)
            {
                cout << "Chon loai nha (1 - cao cap, 2 - thuong): ";
                cin >> loainha;
                if (loainha == 1)
                    gd[i] = new cNhaCaoCap;
                else
                    gd[i] = new cNhaThuong;
            }
            else
            {
                cout << "Chon vi tri tang: ";
                cin >> vtri;
                if (vtri == 1)
                {
                    gd[i] = new cChungCu1;
                }
                else if (vtri >= 15)
                {
                    gd[i] = new cChungCu15;
                }
                else
                {
                    gd[i] = new cChungCuConLai;
                }
            }
            gd[i]->Nhap();
        }
    }
    void tongTungLoai()
    {
        unsigned int cntdat = 0, cntnha = 0, cntcc = 0;
        for (int i = 0; i < gd.size(); i++)
        {
            if (gd[i]->loai() == "loai A" || gd[i]->loai() == "loai B" || gd[i]->loai() == "loai C")
            {
                cntdat++;
            }
            else if (gd[i]->loai() == "Nha cao cap" || gd[i]->loai() == "Nha thuong")
            {
                cntnha++;
            }
            else
                cntcc++;
        }
        cout << "Tong cac giao dich dat: " << cntdat << endl;
        cout << "Tong cac giao dich nha: " << cntnha << endl;
        cout << "Tong cac giao dich chung cu: " << cntcc << endl;
    }

    unsigned long TBThanhTienChungCu()
    {
        unsigned long sum = 0;
        unsigned int cntcc = 0;
        for (int i = 0; i < gd.size(); i++)
        {
            if (gd[i]->loai() == "tang 1" || gd[i]->loai() == "cac tang tren 15" || gd[i]->loai() == "cac tang con lai")
            {
                sum += gd[i]->thanhTien();
                cntcc++;
            }
        }
        return (sum / cntcc);
    }

    cChonGiaoDich maxTTNhaPho()
    {
        vector<cGiaoDich *> maxnha;
        unsigned long max = 0;
        for (int i = 0; i < gd.size(); i++)
        {
            if ((gd[i]->loai() == "Nha cao cap" || gd[i]->loai() == "Nha thuong") && max < gd[i]->thanhTien())
            {
                max = gd[i]->thanhTien();
            }
        }

        for (int i = 0; i < gd.size(); i++)
        {
            if ((gd[i]->loai() == "Nha cao cap" || gd[i]->loai() == "Nha thuong") && max == gd[i]->thanhTien())
            {
                maxnha.push_back(gd[i]);
            }
        }
        return cChonGiaoDich(maxnha);
    }

    cChonGiaoDich GD12_2024()
    {
        vector<cGiaoDich *> thang12_2024;
        for (int i = 0; i < gd.size(); i++)
        {
            if (gd[i]->getThang() == 12 && gd[i]->getNam() == 2024)
                thang12_2024.push_back(gd[i]);
        }
        return cChonGiaoDich(thang12_2024);
    }

    void XuatGD()
    {
        for (int i = 0; i < gd.size(); i++)
        {
            gd[i]->Xuat();
        }
    }
};