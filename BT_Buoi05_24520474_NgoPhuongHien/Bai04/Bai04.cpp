// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#include "cListGiaoDich.h"
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cListGiaoDich a;
    unsigned int x, y, z;
    cout << "---Danh sach giao dich dat---\n";
    a.NhapDat(x);
    cout << "\n---Danh sach giao dich nha pho---\n";
    a.NhapNha(y);
    cout << "\n---Danh sach giao dich can ho chung cu---\n";
    a.NhapChungCu(z);

    cout << "\nTong so luong cua tung loai.\n";
    a.TongSoLuong();

    cout << "\nTrung binh thanh tien cua can ho chung cu: " << a.TB_ThanhTien_ChungCu() << endl;

    cListGiaoDich maxgiatri = a.Max_NhaPho();
    cout << "\nGiao dich nha pho co gia tri (thanh tien) cao nhat.\n";
    maxgiatri.XuatNha();

    cout << "\nDanh sach cac giao dich cua thang 12 nam 2024.\n";
    cListGiaoDich gdthang12 = a.GiaoDichThang12();
    gdthang12.XuatDat();
    gdthang12.XuatNha();
    gdthang12.XuatChungCu();

    system("pause");
    return 0;
}