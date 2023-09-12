#include <iostream>
#include <cmath>
#include <ctime>
#include <iomanip>
#include <cstdlib>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int DemGiaTri(int[], int);


int main()
{
    int b[500];
    int k;

    Nhap(b, k);
    
    cout << "\nMang ban dau: ";
    Xuat(b, k);
    
    int dem = DemGiaTri(b, k);
    cout << "\n\nSo luong cac phan tu ke nhau ma ca hai deu chan: " << dem;

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
        cout << setw(10) << a[i];
}

int DemGiaTri(int a[], int n)
{
    if (n <= 1)
        return 0;
    int dem = 0;
    if (a[0] % 2 == 0 && a[1] % 2 == 0)
        dem++;
    for (int i = 1; i <= n - 2; i++)
        if (a[i] % 2 == 0)
            if (a[i - 1] % 2 == 0 || a[i + 1] % 2 == 0)
                dem++;
    if (a[n - 1] % 2 == 0 && a[n - 2] % 2 == 0)
        dem++;
    return dem;
}