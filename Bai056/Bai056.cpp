#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
bool KTHoanThien(int);
int DemHoanThien(int[], int);


int main()
{
    int b[500];
    int k;

    Nhap(b, k);
    cout << "\nMang ban dau:";
    Xuat(b, k);

    int kq = DemHoanThien(b, k);
    cout << "\n\nSo luong so hoan thien trong mang: " << kq;
    
    cout << "\n\n\n\nKet thuc";
    return 1;
}

void Nhap(int a[], int& n)
{
    cout << "Nhap n:";
    cin >> n;
    srand(time(NULL));
    for (int i = 0; i < n; i++)
        a[i] = -100.0 + (rand() / (RAND_MAX / (100.0 - (-100.0))));
}

void Xuat(int a[], int n)
{
    for (int i = 0; i <= n - 1; i++)
        cout << setw(10) << a[i];
}

bool KTHoanThien(int k)
{
    int s = 0;
    for (int i = 1; i <= k; i++)
        if (k % i == 0)
            s = s + i;
    if (s == k)
        return true;
    return false;
}

int DemHoanThien(int a[], int n)
{
    int dem = 0;
    for (int i = 0; i <= n - 1; i++)
        if (KTHoanThien(a[i]) == true)
            dem++;
    return dem;
}