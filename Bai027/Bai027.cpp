#include <iostream>
#include <cmath>
#include <ctime>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
float Amdau(float[], int);
void Lietke(float[], int);


int main()
{
    float b[500];
    int k;

    Nhap(b, k);

    cout << "\nMang ban dau: ";
    Xuat(b, k);

    cout << "\n\nCac vi tri ma gia tri tai vi tri do bang gia tri thuc dau tien: ";
    Lietke(b, k);

    cout << "\n\n\n\nKet thuc";
    return 1;
}

void Nhap(float a[], int& n)
{
    cout << "Hay nhap n: ";
    cin >> n;
    srand(time(NULL));
    for (int i = 0; i <= n - 1; i++)
        a[i] = -100.0 + (rand() / (RAND_MAX / (100.0 - (-100.0))));
}

void Xuat(float a[], int n)
{
    for (int i = 0; i <= n - 1; i++)
        cout << setw(10) << setprecision(5) << a[i];
}

float Amdau(float a[], int n)
{
    for (int i = 0; i <= n - 1; i++)
        if (a[i] < 0)
            return a[i];
    return 0;
}

void Lietke(float a[], int n)
{
    float ad = Amdau(a, n);
    if (ad == 0)
        cout << "\n Khong co gia tri am";
    return;
    for (int i = 0; i <= n - 1; i++)
        if (a[i] == ad)
            cout << i;
}