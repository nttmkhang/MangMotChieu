#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);

void XoaViTri(float[], int&, int);
float LonNhat(float[], int);
void XoaLonNhat(float[], int&);

int main()
{
    float b[500];
    int k;

    cout << "Mang:\n";
    Nhap(b, k);
    cout << "Mang ban dau:";
    Xuat(b, k);

    XoaLonNhat(b, k);
    cout << "\nMang sau khi xoa so lon nhat: ";
    Xuat(b, k);
}

void Nhap(float a[], int& n)
{
    cout << "Nhap n: ";
    cin >> n;
    srand(time(NULL));
    for (int i = 0; i < n; i++)
        a[i] = -100.0 + (rand() / (RAND_MAX / (100.0 - (-100.0))));
}

void Xuat(float a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << setw(10) << setprecision(5) << a[i];
}

void XoaViTri(float a[], int& n, int k)
{
    for (int i = k; i <= n - 2; i++)
        a[i] = a[i + 1];
    n--;
}

float LonNhat(float a[], int n)
{
    float lc = a[0];
    for (int i = 0; i < n; i++)
        if (a[i] > lc)
            lc = a[i];
    return lc;
}

void XoaLonNhat(float a[], int& n)
{
    float ln = LonNhat(a, n);
    for (int i = n - 1; i >= 0; i--)
        if (a[i] == ln)
            XoaViTri(a, n, i);
}