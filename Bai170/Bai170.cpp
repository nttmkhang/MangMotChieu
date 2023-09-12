#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);

void ThemBaoToan(float[], int&, float);

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


    ThemBaoToan(b, k, x);
    cout << "Mang sau khi them bao toan x vao: ";
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

void ThemBaoToan(float a[], int& n, float x)
{
    int i = n - 1;
    while (i >= 0 && a[i] > x)
    {
        a[i + 1] = a[i];
        i--;
    }
    a[i + 1] = x;
    n++;
}
