﻿#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>

using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
int DemPhanBiet(int[], int);


int main()
{
    int b[500];
    int k;

    Nhap(b, k);

    cout << "\nMang ban dau: ";
    Xuat(b, k);

    int kq = DemPhanBiet(b, k);
    cout << "\n\nSo luong gia tri phan biet trong mang: " << kq;

    cout << "\n\n\n\nKet thuc";
    return 1;
}

void Nhap(int a[], int& n)
{
    cout << "Nhap n:";
    cin >> n;
    srand(time(NULL));
    for (int i = 0; i < n; i++)
        a[i] = rand() % (200 + 1) - 100;
}

void Xuat(int a[], int n)
{
    for (int i = 0; i <= n - 1; i++)
        cout << setw(10) << a[i];
}

int DemPhanBiet(int a[], int n)
{
    int dem = 0;
    for (int i = 0; i <= n - 1; i++)
    {
        bool flag = true;
        for (int j = 0; j < i; j++)
            if (a[i] == a[j])
                flag = false;
        if (flag == true)
            dem++;
    }
    return dem;
}