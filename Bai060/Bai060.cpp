#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
int DemGiaTri(float a[], int);


int main()
{
    float b[500];
    int k;

    Nhap(b, k);
    
    cout << "\nMang ban dau:";
    Xuat(b, k);

    int kq = DemGiaTri(b, k);
    cout << "\n\nSo luong gia tri thuc ke nhau ma hai so do trai dau: " << kq;

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


int DemGiaTri(float a[], int n)
{
    int dem = 0;
    if (n <= 1)
        return 0;
    if (a[0] * a[1] < 0)
        dem++;
    for (int i = 1; i <= n - 1; i++)
        if (a[i] * a[i + 1] < 0 || a[i] * a[i - 1] < 0)
            dem++;
    if (a[n - 1] * a[n - 2] < 0)
        dem++;
    return dem;
}