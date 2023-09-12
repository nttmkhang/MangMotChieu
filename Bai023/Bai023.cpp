#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void Lietke(int[], int);


int main()
{
    int b[500];
    int k;

    Nhap(b, k);

    cout << "\nMang ban dau: ";
    Xuat(b, k);

    cout << "\n\nCac gia tri chan co lan can cung la gia tri chan: ";
    Lietke(b, k);
    
    cout << "\n\n\n\nKet thuc";
    return 1;
}

void Nhap(int a[], int& n)
{
    cout << "Hay nhap n: ";
    cin >> n;
    srand(time(NULL));
    for (int i = 0; i <= n - 1; i++)
    {
        a[i] = -100.0 + (rand() / (RAND_MAX / (100.0 - (-100.0))));
    }
}

void Xuat(int a[], int n)
{
    for (int i = 0; i <= n - 1; i++)
    {
        cout << setw(10) << setprecision(5) << a[i];
    }
}

void Lietke(int a[], int n)
{
    if (n <= 1)
    {
        return;
    }
    if (a[0] % 2 == 0 && a[1] % 2 == 0)
    {
        cout << setw(10) << setprecision(5) << a[0];
    }
    for (int i = 0; i <= n - 2; i++)
    {
        if (a[i] % 2 == 0)
        {
            if (a[i - 1] % 2 == 0 || a[i + 1] % 2 == 0)
            {
                cout << setw(10) << setprecision(5) << a[i];
            }
        }
    }
    if (a[n - 1] % 2 == 0 && a[n - 2] % 2 == 0)
    {
        cout << setw(10) << setprecision(5) << a[n - 1];
    }
}