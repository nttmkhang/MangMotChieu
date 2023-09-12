#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
float TongDuong(float[], int);


int main()
{
    float b[500];
    int k;

    Nhap(b, k);

    cout << "\nMang ban dau:";
    Xuat(b, k);

    float kq = TongDuong(b, k);
    cout << "\n\nTong cac gia tri duong: " << kq;

    cout << "\n\n\n\nKet thuc";
    return 1;
}

void Nhap(float a[], int& n)
{
    cout << "Nhap n:";
    cin >> n;
    srand(time(NULL));
    for (int i = 0; i < n; i++)
        a[i] = rand() % (200 + 1) - 100;
}

void Xuat(float a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << setw(8) << a[i];
}

float TongDuong(float a[], int n)
{
    float s = 0;
    for (int i = 0; i <= n - 1; i++)
        if (a[i] > 0)
            s = s + a[i];
    return s;
}