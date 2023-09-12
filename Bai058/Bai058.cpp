#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
float LonNhat(float[], int);
int DemLonNhat(float[], int);


int main()
{
    float b[500];
    int k;

    Nhap(b, k);
    
    cout << "\nMang ban dau:";
    Xuat(b, k);

    float kq = LonNhat(b, k);
    cout << "\n\nGia tri lon nhat trong mang: " << kq;
    
    int dem = DemLonNhat(b, k);
    cout << "\n\nSo luong gia tri lon nhat trong mang: " << dem;
    
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

float LonNhat(float a[], int n)
{
    float lc = a[0];
    for (int i = 0; i <= n - 1; i++)
        if (a[i] > lc)
            lc = a[i];
    return lc;
}

int DemLonNhat(float a[], int n)
{
    int dem = 0;
    float ln = LonNhat(a, n);
    for (int i = 0; i <= n - 1; i++)
        if (a[i] == ln)
            dem++;
    return dem;
}