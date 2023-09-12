#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
int DemCucTieu(float a[], int);
int DemCucDai(float a[], int);
int DemCucTri(float a[], int);


int main()
{
    float b[500];
    int k;

    Nhap(b, k);

    cout << "\nMang ban dau:";
    Xuat(b, k);

    int kq = DemCucTri(b, k);
    cout << "\n\nSo luong phan tu cuc tri trong mang: " << kq;
    
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


int DemCucTieu(float a[], int n)
{
    if (n <= 1)
        return 0;
    int dem = 0;
    if (a[0] < a[1])
        dem++;
    for (int i = 1; i <= n - 2; i++)
        if (a[i] < a[i + 1] && a[i] < a[i - 1])
            dem++;
    if (a[n - 1] < a[n - 2])
        dem++;
    return dem;
}

int DemCucDai(float a[], int n)
{
    if (n <= 1)
        return 0;
    int dem = 0;
    if (a[0] > a[1])
        dem++;
    for (int i = 1; i <= n - 2; i++)
        if (a[i] > a[i + 1] && a[i] > a[i - 1])
            dem++;
    if (a[n - 1] > a[n - 2])
        dem++;
    return dem;
}

int DemCucTri(float a[], int n)
{
    int d1 = DemCucTieu(a, n);
    int d2 = DemCucDai(a, n);
    return (d1 + d2);
}