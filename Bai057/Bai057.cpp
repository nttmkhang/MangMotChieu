#include <iostream>
#include <cmath>
#include <ctime>
#include <iomanip>
#include <cstdlib>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int DemChan(int[], int);
int DemLe(int[], int);
int TuongQuan(int[], int);


int main()
{
    int b[500];
    int k;
    Nhap(b, k);

    cout << "\nMang ban dau: ";
    Xuat(b, k);
    
    int kq = TuongQuan(b, k);
    
    if (kq == -1)
        cout << "\n\nSo luong so chan nhieu hon so luong so le.";
    
    if (kq == 0)
        cout << "\n\nSo luong so chan bang so luong so le.";
    
    if (kq == 1)
        cout << "\n\nSo luong so le nhieu hon so luong so chan.";
    
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

int DemChan(int a[], int n)
{
    int dem = 0;
    for (int i = 0; i <= n - 1; i++)
        if (a[i] % 2 == 0)
            dem++;
    return dem;
}

int DemLe(int a[], int n)
{
    int dem = 0;
    for (int i = 0; i <= n - 1; i++)
        if (a[i] % 2 != 0)
            dem++;
    return dem;
}

int TuongQuan(int a[], int n)
{
    int x = DemChan(a, n);
    int y = DemLe(a, n);
    if (x > y)
        return -1;
    if (x < y)
        return 1;
    return 0;
}