#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
bool KTNguyenTo(int);
int DemNguyenTo(int[], int);
int TongNguyenTo(int[], int);
float TrungBinhCong(int[], int);


int main()
{
    int b[500];
    int k;

    Nhap(b, k);

    cout << "\nMang ban dau:";
    Xuat(b, k);

    float kq = TrungBinhCong(b, k);
    cout << "\n\nTrung binh cong cac gia tri nguyen to: " << kq;
    
    cout << "\n\n\n\nKet thuc";
    return 1;
}

void Nhap(int a[], int& n)
{
    cout << "Nhap n:";
    cin >> n;
    srand(time(NULL));
    for (int i = 0; i < n; i++)
        a[i] = -100.0 + (rand() / (RAND_MAX / (100.0 - (-100.0))));
}

void Xuat(int a[], int n)
{
    for (int i = 0; i <= n - 1; i++)
        cout << setw(10) << setprecision(5) << a[i];
}

bool KTNguyenTo(int k)
{
    int dem = 0;
    for (int i = 1; i <= k; i++)
        if (k % i == 0)
            dem = dem + 1;
    if (dem == 2)
        return true;
    return false;
}

int DemNguyenTo(int a[], int n)
{
    int d = 0;
    for (int i = 0; i <= n - 1; i++)
        if (KTNguyenTo(a[i]) == true)
            d = d + 1;
    return d;
}

int TongNguyenTo(int a[], int n)
{
    int s = 0;
    for (int i = 0; i <= n - 1; i++)
        if (KTNguyenTo(a[i]) == true)
            s = s + a[i];
    return s;
}

float TrungBinhCong(int a[], int n)
{
    int ss = TongNguyenTo(a, n);
    int dd = DemNguyenTo(a, n);
    if (dd == 0)
        return 0;
    return (float)ss / dd;
}