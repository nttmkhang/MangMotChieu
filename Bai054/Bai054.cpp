#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
bool KTDoiXung(int);
int DemDoiXung(int[], int);


int main()
{
    int b[500];
    int k;

    Nhap(b, k);

    cout << "\nMang ban dau:";
    Xuat(b, k);

    int kq = DemDoiXung(b, k);
    cout << "\n\nSo luong gia tri doi xung trong mang: " << kq;
    
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

bool KTDoiXung(int n)
{
    int t = n;
    int dn = 0;
    int dv;

    while (t != 0)
    {
        dv = t % 10;
        dn = dn * 10 + dv;
        t = t / 10;
    }

    if (dn == n)
        return true;
    return false;
}

int DemDoiXung(int a[], int n)
{
    int dem = 0;
    for (int i = 0; i <= n - 1; i++)
        if (KTDoiXung(a[i]) == true)
            dem++;
    return dem;
}