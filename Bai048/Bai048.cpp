#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
float TichDuong(float[], int);
int DemDuong(float[], int);
float TrungBinhNhan(float[], int);


int main()
{
    float b[500];
    int k;

    Nhap(b, k);
    
    cout << "\nMang ban dau:";
    Xuat(b, k);

    float kq = TrungBinhNhan(b, k);
    cout << "\n\nTrung binh nhan cua cac gia tri thuc duong trong mang la: " << kq;
    
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

float TichDuong(float a[], int n)
{
    float T = 1;
    for (int i = 0; i <= n - 1; i++)
        if (a[i] > 0)
            T = T * a[i];
    return T;
}

int DemDuong(float a[], int n)
{
    int dem = 0;
    for (int i = 0; i <= n - 1; i++)
        if (a[i] > 0)
            dem++;
    return dem;
}

float TrungBinhNhan(float a[], int n)
{
    float t = TichDuong(a, n);
    float d = DemDuong(a, n);
    if (d == 0)
        return 0;
    return pow(t, (float)1 / d);
}