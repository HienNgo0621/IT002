// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#include "cBo.h"
#include "cCuu.h"
#include "cDe.h"
#include "cGiaSuc.h"
#include <iostream>
#include <vector>
#include <ctime>
using namespace std;

int main()
{
    srand(time(NULL));
    vector<cGiaSuc *> gs(3);
    gs[0] = new cBo;
    gs[1] = new cCuu;
    gs[2] = new cDe;

    unsigned int b, c, d;
    cout << "Nhap so luong bo: ";
    cin >> b;
    cout << "Nhap so luong cuu: ";
    cin >> c;
    cout << "Nhap so luong de: ";
    cin >> d;

    cout << "\nCac tieng keu trong trai.\n";
    cout << "Bo: " << gs[0]->keu() << endl;
    cout << "Cuu: " << gs[1]->keu() << endl;
    cout << "De: " << gs[2]->keu() << endl;

    // tinh tong so con
    unsigned int tongBo = b, tongCuu = c, tongDe = d;
    for (int i = 1; i <= b; i++)
    {
        tongBo += gs[0]->sinhCon();
    }

    for (int i = 1; i <= c; i++)
    {
        tongCuu += gs[1]->sinhCon();
    }

    for (int i = 1; i <= d; i++)
    {
        tongDe += gs[2]->sinhCon();
    }

    // tinh so lit sua

    float suaBo = 0, suaCuu = 0, suaDe = 0;
    for (int i = 0; i < b; i++)
    {
        suaBo += gs[0]->choSua();
    }

    for (int i = 0; i < c; i++)
    {
        suaCuu += gs[1]->choSua();
    }

    for (int i = 0; i < d; i++)
    {
        suaDe += gs[2]->choSua();
    }

    cout << "\n---Thong ke---\n";
    cout << "Bo\t" << tongBo << " con\t" << suaBo << " lit sua" << endl;
    cout << "Cuu\t" << tongCuu << " con\t" << suaCuu << " lit sua" << endl;
    cout << "De\t" << tongDe << " con\t" << suaDe << " lit sua" << endl;

    system("pause");
    return 0;
}

/*
- Khong dung lien ket dong (khong da hinh):

+ Thiet ke don gian, thuong dung cac cau truc re nhanh nhu if, switch.

+ Moi lan them loai con vat moi phai sua lai ham xu ly.

+ Ma nguon dai, roi va kho quan ly.

+ Tinh mo rong va linh hoat thap.

+ Chi can kien thuc co ban ve lap trinh.

- Co dung lien ket dong (da hinh):

+ Su dung ke thua va ham ao virtual trong lop cha.

+ Moi loai con vat se co mot lop rieng ke thua tu lop cha.

+ Dung con tro hoac tham chieu den lop cha de goi ham ao.

+ De mo rong, chi can them lop moi, khong can sua ma cu.

+ Ma nguon gon gang, de quan ly, dung tinh huong doi tuong.

- Uu diem cua cach dung lien ket dong (da hinh):

+ Mo rong de dang, chi can them lop moi.

+ Giam phu thuoc giua cac thanh phan trong chuong trinh.

+ De bao tri va phat trien ve sau.

+ Ap dung dung ban chat lap trinh huong doi tuong.

+ Ma nguon ro rang, de doc va chuyen nghiep hon.
*/