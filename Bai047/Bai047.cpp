#include <iostream>
#include <cmath>
#include <ctime>
#include <iomanip>
using namespace std;

void Nhap(float[], int&, float&);
void Xuat(float[], int);
float TongGiaTri(float[], int, float);
int DemGiaTri(float[], int, float);
float TrungBinhCong(float[], int, float);


int main()
{
    float b[500];
    int k;
    float x;

    Nhap(b, k, x);
    
    cout << "\nMang ban dau: ";
    Xuat(b, k);
    
    float kq = TrungBinhCong(b, k, x);
    cout << "\n\nTrung binh cong cua cac so thuc lon hon x trong mang la: " << kq;
    
    cout << "\n\n\n\nKet thuc";
    return 0;
}

void Nhap(float a[], int& n, float& x)
{
    cout << "Hay nhap n: ";
    cin >> n;
    cout << "Hay nhap x: ";
    cin >> x;
    srand(time(NULL));
    for (int i = 0; i <= n - 1; i++)
        a[i] = -100.0 + (rand() / (RAND_MAX / (100.0 - (-100.0))));
}

void Xuat(float a[], int n)
{
    for (int i = 0; i <= n - 1; i++)
        cout << setw(10) << setprecision(5) << a[i];
}

float TongGiaTri(float a[], int n, float x)
{
    float s = 0;
    for (int i = 0; i < n; i++)
        if (a[i] > x)
            s += a[i];
    return s;
}

int DemGiaTri(float a[], int n, float x)
{
    int dem = 0;
    for (int i = 0; i < n; i++)
        if (a[i] > x)
            dem++;
    return dem;
}

float TrungBinhCong(float a[], int n, float x)
{
    float s = TongGiaTri(a, n, x);
    int dem = DemGiaTri(a, n, x);
    if (dem == 0)
        return 0;
    float t = (float)s / dem;
    return t;
}