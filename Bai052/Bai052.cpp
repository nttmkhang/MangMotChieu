#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int DemGiaTri(int[], int);


int main()
{
    int b[500];
    int k;

    Nhap(b, k);
    
    cout << "\nMang ban dau:";
    Xuat(b, k);

    int kq = DemGiaTri(b, k);
    cout << "\n\nSo luong gia tri trong mang co chu so tan cung bang 5: " << kq;
    
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
    for (int i = 0; i <= n - 1; i++)
        cout << setw(10) << a[i];
}

int DemGiaTri(int a[], int n)
{
    int dem = 0;
    for (int i = 0; i <= n - 1; i++)
        if (abs(a[i]) % 10 == 5)
            dem++;
    return dem;
}