// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#include "cDaiHoc.h"
#include "cCaoDang.h"
#include "cSinhVien.h"
#include <iostream>
#include <vector>
using namespace std;

class listSinhVien
{
private:
    vector<cSinhVien *> sv;

public:
    listSinhVien() {}
    listSinhVien(const vector<cSinhVien *> &a)
    {
        sv = a;
    }
    ~listSinhVien()
    {
        for (int i = 0; i < sv.size(); i++)
        {
            delete sv[i];
        }
        sv.clear();
    }
    void NhapDS()
    {
        unsigned int n;
        cout << "Nhap so luong sinh vien trong danh sach: ";
        cin >> n;
        sv.resize(n);
        for (int i = 0; i < n; i++)
        {
            unsigned int he;
            cout << "+ Chon he cua sinh vien (1 - cao dang, 2 - dai hoc): ";
            cin >> he;
            if (he == 1)
            {
                sv[i] = new cCaoDang;
            }
            else
                sv[i] = new cDaiHoc;
            sv[i]->Nhap();
        }
    }

    void XuatDS()
    {
        for (int i = 0; i < sv.size(); i++)
        {
            sv[i]->Xuat();
        }
    }

    listSinhVien duDKTN()
    {
        vector<cSinhVien *> tn;
        for (int i = 0; i < sv.size(); i++)
        {
            if (sv[i]->XetTN())
                tn.push_back(sv[i]);
        }
        return listSinhVien(tn);
    }

    listSinhVien khongDuDKTN()
    {
        vector<cSinhVien *> ktn;
        for (int i = 0; i < sv.size(); i++)
        {
            if (!sv[i]->XetTN())
                ktn.push_back(sv[i]);
        }
        return listSinhVien(ktn);
    }

    listSinhVien maxDTBDaiHoc()
    {
        vector<cSinhVien *> maxDH;
        float max = 0;
        for (int i = 0; i < sv.size(); i++)
        {
            if (sv[i]->loai() == "dai hoc" && max < sv[i]->getDTB())
                max = sv[i]->getDTB();
        }
        for (int i = 0; i < sv.size(); i++)
        {
            if (sv[i]->loai() == "dai hoc" && max == sv[i]->getDTB())
                maxDH.push_back(sv[i]);
        }
        return listSinhVien(maxDH);
    }

    listSinhVien maxDTBCaoDang()
    {
        vector<cSinhVien *> maxCD;
        float max = 0;
        for (int i = 0; i < sv.size(); i++)
        {
            if (sv[i]->loai() == "cao dang" && max < sv[i]->getDTB())
                max = sv[i]->getDTB();
        }
        for (int i = 0; i < sv.size(); i++)
        {
            if (sv[i]->loai() == "cao dang" && max == sv[i]->getDTB())
                maxCD.push_back(sv[i]);
        }
        return listSinhVien(maxCD);
    }

    void soSV_KhongDuDKTN()
    {
        unsigned int cntcd = 0, cntdh = 0;
        for (int i = 0; i < sv.size(); i++)
        {
            if (!sv[i]->XetTN())
            {
                if (sv[i]->loai() == "cao dang")
                    cntcd++;
                else
                    cntdh++;
            }
        }
        cout << "So sinh vien cao dang khong du dieu kien tot nghiep: " << cntcd << endl;
        cout << "So sinh vien dai hoc khong du dieu kien tot nghiep: " << cntdh << endl;
    }
};