#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int ChuSoDau(int);
int TongGiaTri(int[], int);


int main()
{
    int b[500];
    int k;

    Nhap(b, k);

    cout << "\nMang ban dau:";
    Xuat(b, k);

    int kq = TongGiaTri(b, k);
    cout << "\n\nTong cac gia tri co chu so dau tien la le: " << kq;

    cout << "\n\n\n\nKet thuc";
    return 1;
}

void Nhap(int a[], int& n)
{
    cout << "Nhap n:";
    cin >> n;
    srand(time(NULL));
    for (int i = 0; i < n; i++)
        a[i] = rand() % (200 + 1) - 100;
}

void Xuat(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << setw(8) << a[i];
}

int ChuSoDau(int n)
{
    int t = abs(n);
    while (t >= 10)
        t = t / 10;
    return t;
}

int TongGiaTri(int a[], int n)
{
    int s = 0;
    for (int i = 0; i <= n - 1; i++)
    {
        int csd = ChuSoDau(a[i]);
        if (csd % 2 == 1)
            s = s + a[i];
    }
    return s;
}