#include <iostream>
#include <cmath>
#include <ctime>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int ChuSoDau(int);
int TongCacGiaTri(int[], int);


int main()
{
    int b[500];
    int k;

    Nhap(b, k);
    
    cout << "\nMang ban dau: ";
    Xuat(b, k);
    
    float kq = TongCacGiaTri(b, k);
    cout << "\n\nTong cac gia tri co chu so dau la chu so chan trong mang : " << kq;

    cout << "\n\n\n\nKet thuc";
    return 1;
}

void Nhap(int a[], int& n)
{
    cout << "Hay nhap n: ";
    cin >> n;
    srand(time(NULL));
    for (int i = 0; i <= n - 1; i++)
        a[i] = -100.0 + (rand() / (RAND_MAX / (100.0 - (-100.0))));
}

void Xuat(int a[], int n)
{
    for (int i = 0; i <= n - 1; i++)
        cout << setw(10) << setprecision(5) << a[i];
}

int ChuSoDau(int n)
{
    int t = abs(n);
    while (t >= 10)
        t /= 10;
    return t;
}

int TongCacGiaTri(int a[], int n)
{
    int s = 0;
    for (int i = 0; i <= n - 1; i++)
        if (ChuSoDau(a[i]) % 2 == 0)
            s = s + a[i];
    return s;
}