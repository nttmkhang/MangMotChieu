#include <iostream>
#include <cmath>
#include <ctime>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
float TongCacGiaTri(float[], int);


int main()
{
    float b[500];
    int k;

    Nhap(b, k);
    
    cout << "\nMang ban dau: ";
    Xuat(b, k);
    
    float kq = TongCacGiaTri(b, k);
    cout << "\n\nTong cac gia tri lon hon gia tri xung quanh cua no mang la: " << kq;
    
    cout << "\n\n\n\nKet thuc";
    return 0;
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

float TongCacGiaTri(float a[], int n)
{
    float s = 0;
    for (int i = 0; i < n; i++)
        if (a[i] > a[i - 1] && a[i] > a[i + 1])
            s += a[i];
    return s;
}