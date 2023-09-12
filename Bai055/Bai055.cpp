#include <iostream>
#include <cmath>
#include <ctime>
#include <iomanip>
#include <cstdlib>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
bool KtNguyenTo(int);
int DemNguyenTo(int[], int);


int main()
{
    int b[500];
    int k;

    Nhap(b, k);
    
    cout << "\nMang ban dau: ";
    Xuat(b, k);
    
    int dem = DemNguyenTo(b, k);
    cout << "\n\nSo luong so nguyen to trong mang:" << dem;
    
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

bool KtNguyenTo(int k)
{
    int dem = 0;
    for (int i = 1; i <= k; i++)
        if (k % i == 0)
            dem++;
    if (dem == 2)
        return true;
    return false;
}

int DemNguyenTo(int a[], int n)
{
    int dem = 0;
    for (int i = 0; i < n; i++)
        if (KtNguyenTo(a[i]))
            dem++;
    return dem;
}