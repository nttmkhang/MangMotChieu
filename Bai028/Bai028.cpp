﻿#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
float Duong(float[], int);
float Duongnhonhat(float[], int);
void Lietke(float[], int);


int main()
{
    float b[500];
    int k;

    Nhap(b, k);

    cout << "\nMang ban dau: ";
    Xuat(b, k);

    cout << "\n\nVi tri co gia tri duong nho nhat trong mang: ";
    Lietke(b, k);

    cout << "\n\n\n\nKet thuc";
    return 1;
}

void Nhap(float a[], int& n)
{
    cout << "Nhap n:";
    cin >> n;
    srand(time(NULL));
    for (int i = 0; i < n; i++)
        a[i] = -100.0 + (rand() / (RAND_MAX / (100.0 - (-100.0))));
}

void Xuat(float a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << setw(10) << setprecision(5) << a[i];
}

float Duong(float a[], int n)
{
    for (int i = 0; i <= n - 1; i++)
        if (a[i] > 0)
            return a[i];
    return -1;
}

float Duongnhonhat(float a[], int n)
{
    float lc = Duong(a, n);
    if (lc == -1)
        return -1;
    for (int i = 0; i <= n - 1; i++)
        if (a[i] > 0 && a[i] < lc)
            lc = a[i];
    return lc;
}

void Lietke(float a[], int n)
{
    float dd = Duongnhonhat(a, n);
    if (dd == -1)
    {
        cout << "\nKhong co gia tri duong";
        return;
    }
    for (int i = 0; i <= n - 1; i++)
        if (a[i] == dd)
            cout << setw(10) << setprecision(5) << i;
}