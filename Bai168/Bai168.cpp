#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);

void XoaViTri(int[], int&, int);
void XoaTrung(int[], int&, int);
int TanSuat(int[], int, float);
void XoaPhanTu(int[], int&);

int main()
{
    int b[500];
    int k;

    cout << "Mang:\n";
    Nhap(b, k);

    cout << "Mang ban dau:";
    Xuat(b, k);

    XoaPhanTu(b, k);
    cout << "\nMang sau khi xoa trung x: ";
    Xuat(b, k);

    return 1;
}

void Nhap(int a[], int& n)
{
    cout << "Nhap n : ";
    cin >> n;
    srand(time(NULL));
    for (int i = 0; i <= n - 1; i++)
        a[i] = rand() % (200 + 1) - 100;
}

void Xuat(int a[], int n)
{
    for (int i = 0; i <= n - 1; i++)
        cout << setw(10) << a[i];
}

void XoaViTri(int a[], int& n, int k)
{
    for (int i = k; i <= n - 2; i++)
        a[i] = a[i + 1];
    n--;
}

void XoaTrung(int a[], int& n, int x)
{
    for (int i = n - 1; i >= 0; i--)
        if (a[i] == x)
            XoaViTri(a, n, i);
}

int TanSuat(int a[], int n, float x)
{
    int dem = 0;
    for (int i = 0; i <= n - 1; i++)
        if (a[i] == x)
            dem++;
    return dem;
}

void XoaPhanTu(int a[], int& n)
{
    for (int i = n - 1; i >= 0; i--)
        if (TanSuat(a, n, a[i]) > 1)
            XoaTrung(a, n, a[i]);
}