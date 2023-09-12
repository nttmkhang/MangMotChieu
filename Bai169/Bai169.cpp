#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);

void ThemViTri(float[], int&, float, int);

int main()
{
    float b[500];
    int k;

    cout << "Mang:\n";
    Nhap(b, k);
    cout << "Mang ban dau:";
    Xuat(b, k);

    float x;
    cout << "\nNhap gia tri muon them x: ";
    cin >> x;

    int vt;
    cout << "Nhap vi tri muon them vao vt: ";
    cin >> vt;

    ThemViTri(b, k, x, vt);
    cout << "Mang sau khi them x vao vi tri k: ";
    Xuat(b, k);

    return 1;
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

void ThemViTri(float a[], int& n, float x, int k)
{
    for (int i = n; i >= k + 1; i--)
        a[i] = a[i - 1];
    a[k] = x;
    n++;
}
