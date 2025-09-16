#include <iostream>
#include <vector>
#include <algorithm>
#include "cArray.h"
using namespace std;

cArray ::cArray(int n)
{
    arr.resize(n);
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 201 - 100;
    }
}

cArray ::cArray(const vector<int> &a)
{
    arr = a;
}

void cArray ::Xuat()
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int cArray ::DemX(int x)
{
    short cnt = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (x == arr[i])
            cnt++;
    }
    return cnt;
}

bool cArray ::isTangDan()
{
    for (int i = 0; i < arr.size() - 1; i++)
    {
        if (arr[i] > arr[i + 1])
            return false;
    }
    return true;
}

bool cArray ::Tim_minLe(int &minLe)
{
    bool found = false;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] % 2 != 0)
        {
            if (!found || arr[i] < minLe)
            {
                minLe = arr[i];
                found = true;
            }
        }
    }
    return found;
}

bool isPrime(int a)
{
    if (a < 2)
        return false;
    for (int i = 2; i * i <= a; i++)
    {
        if (a % i == 0)
            return false;
    }
    return true;
}

bool cArray ::Tim_MaxSNT(int &maxNT)
{
    bool found = false;
    for (int i = 0; i < arr.size(); i++)
    {
        if (isPrime(arr[i]))
        {
            if (!found || arr[i] > maxNT)
            {
                maxNT = arr[i];
                found = true;
            }
        }
    }
    return found;
}

void Swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

// QuickSort
int Partition(vector<int> &v, int low, int high)
{
    int pivot = v[high];
    int i = low - 1;

    for (int j = low; j < high; j++)
    {
        if (v[j] < pivot)
        {
            i++;
            Swap(v[i], v[j]);
        }
    }
    Swap(v[i + 1], v[high]);
    return i + 1;
}

// Ham QuickSort de quy
void QuickSort(vector<int> &v, int low, int high)
{
    if (low < high)
    {
        int pi = Partition(v, low, high);
        QuickSort(v, low, pi - 1);
        QuickSort(v, pi + 1, high);
    }
}

cArray cArray ::TangDan()
{
    QuickSort(arr, 0, arr.size() - 1);
    return cArray(arr);
}

cArray cArray ::GiamDan()
{
    vector<int> arrCopy = arr;
    reverse(arrCopy.begin(), arrCopy.end());
    return cArray(arrCopy);
}