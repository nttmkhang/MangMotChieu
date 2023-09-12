#include <iostream>
#include <cmath>
#include <ctime>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int HangChuc(int);
float TongCacGiaTri(int[], int);


int main()
{
    int b[500];
    int k;

    Nhap(b, k);
    
    cout << "\nMang ban dau: ";
    Xuat(b, k);
    
    float kq = TongCacGiaTri(b, k);
    cout << "\n\nTong cua cac so nguyen co chu so hang chuc la 5 trong mang : " << kq;
    
    cout << "\n\n\n\nKet thuc";
    return 0;
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

int HangChuc(int n)
{
    int t = abs(n);
    return (t / 10) % 100;
}

float TongCacGiaTri(int a[], int n)
{
    int s = 0;
    for (int i = 0; i <= n - 1; i++)
        if (HangChuc(a[i]) == 5)
            s += a[i];
    return s;
}