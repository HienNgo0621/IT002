// MSSV: 24520474
// Ho ten: Ngo Phuong Hien
// Ngay sinh: 21/06/2006
// Lop: IT002.P26

#include <iostream>

using namespace std;

struct SinhVien
{
    string hoten;
    float toan, van;
    float dtb;
};

void NhapSV(SinhVien a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        cout << "Ho ten sinh vien " << i + 1 << ": ";
        getline(cin, a[i].hoten);
        cout << "Diem toan: ";
        cin >> a[i].toan;
        cout << "Diem van: ";
        cin >> a[i].van;
    }
}

void Diem_TB(SinhVien a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        a[i].dtb = (a[i].toan + a[i].van) / 2;
    }
}

void DiemTB_cao_nhat(SinhVien a[], int n)
{
    float max = a[0].dtb;
    for (int i = 1; i < n; i++)
    {
        if (a[i].dtb > max)
        {
            max = a[i].dtb;
        }
    }

    cout << "\nSinh vien co diem trung binh cao nhat: " << endl;
    for (int i = 0; i < n; i++)
    {
        if (a[i].dtb == max)
            cout << "Ho ten: " << a[i].hoten << ", Diem toan: " << a[i].toan << ", Diem Van: " << a[i].van << ", Diem trung binh: " << a[i].dtb << endl;
    }
}

void DiemTB_thap_nhat(SinhVien a[], int n)
{
    float min = a[n - 1].dtb;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i].dtb < min)
            min = a[i].dtb;
    }

    cout << "\nSinh vien co diem trung binh thap nhat: " << endl;
    for (int i = 0; i < n; i++)
    {
        if (a[i].dtb == min)
            cout << "Ho ten: " << a[i].hoten << ", Diem toan: " << a[i].toan << ", Diem Van: " << a[i].van << ", Diem trung binh: " << a[i].dtb << endl;
    }
}

int main()
{
    int n;
    cout << "Nhap so luong sinh vien: ";
    cin >> n;
    SinhVien x[n], sv_max, sv_min;
    NhapSV(x, n);
    Diem_TB(x, n);
    DiemTB_cao_nhat(x, n);
    DiemTB_thap_nhat(x, n);

    system("pause");
    return 0;
}