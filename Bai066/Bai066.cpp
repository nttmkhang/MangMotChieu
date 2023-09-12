#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>

using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
bool KTNguyenTo(int);
int DemNguyenTo(int[], int);


int main()
{
    int b[500];
    int k;

    Nhap(b, k);

    cout << "\nMang ban dau: ";
    Xuat(b, k);

    int kq = DemNguyenTo(b, k);
    cout << "\n\nSo luong gia tri nguyen to phan biet trong mang: " << kq;

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

bool KTNguyenTo(int k)
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
    {
        int flag = 1;
        for (int j = 0; j <= i - 1; j++)
            if (a[j] == a[i])
                flag = 0;
        if (KTNguyenTo(a[i]) && flag == 1)
            dem++;
    }
    return dem;
}