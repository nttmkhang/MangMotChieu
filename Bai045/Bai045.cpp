#include <iostream>
#include <cmath>
#include <ctime>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
float TongDuong(float[], int);
int DemDuong(float[], int);
float TrungBinhCong(float[], int);


int main()
{
    float b[500];
    int k;

    Nhap(b, k);
    
    cout << "\nMang ban dau: ";
    Xuat(b, k);
    
    float kq = TrungBinhCong(b, k);
    cout << "\n\nTrung binh cong cua cac so thuc duong trong mang la: " << kq;

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

float TongDuong(float a[], int n)
{
    float s = 0;
    for (int i = 0; i < n; i++)
        if (a[i] > 0)
            s += a[i];
    return s;
}

int DemDuong(float a[], int n)
{
    int dem = 0;
    for (int i = 0; i < n; i++)
        if (a[i] > 0)
            dem++;
    return dem;
}

float TrungBinhCong(float a[], int n)
{
    float s = TongDuong(a, n);
    int dem = DemDuong(a, n);
    if (dem == 0)
        return 0;
    float t = (float)s / dem;
    return t;
}