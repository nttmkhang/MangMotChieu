#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
float TongCucTieu(float a[], int);


int main()
{
    float b[500];
    int k;

    Nhap(b, k);

    cout << "\nMang ban dau:";
    Xuat(b, k);

    float kq = TongCucTieu(b, k);
    cout << "\n\nTong cac gia tri cuc tieu: " << kq;

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
    for (int i = 0; i <= n - 1; i++)
        cout << setw(10) << setprecision(5) << a[i];
}

float TongCucTieu(float a[], int n)
{
    float s = 0;
    if (n == 1)
        s = s + a[0];
    for (int i = 1; i <= n - 2; i++)
        if (a[i] < a[i + 1] && a[i] < a[i - 1])
            s = s + a[i];
    if (a[n - 1] < a[n - 2])
        s = s + a[n - 1];
    return s;
}