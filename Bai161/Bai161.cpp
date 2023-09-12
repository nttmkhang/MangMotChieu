#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);

void XoaViTri(float[], int&, int);
void XoaAm(float[], int&);


int main()
{
    float b[500];
    int k;

    cout << "Mang:\n";
    Nhap(b, k);
    cout << "Mang ban dau:";
    Xuat(b, k);

    XoaAm(b, k);
    cout << "\nMang sau khi xoa am: ";
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

void XoaAm(float a[], int& n)
{
    for (int i = n - 1; i >= 0; i--)
        if (a[i] < 0)
            XoaViTri(a, n, i);
}
