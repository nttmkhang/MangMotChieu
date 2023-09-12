#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
bool ktChinhPhuong(int);
int Tong(int[], int);


int main()
{
    int b[500];
    int k;

    Nhap(b, k);

    cout << "\nMang ban dau:";
    Xuat(b, k);

    int kq = Tong(b, k);
    cout << "\n\nTong cac gia tri chinh phuong: " << kq;

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
    for (int i = 0; i < n; i++)
        cout << setw(8) << a[i];
}

bool ktChinhPhuong(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (i * i == n)
            return true;
        return false;
    }
}

int Tong(int a[], int n)
{
    int s = 0;
    for (int i = 0; i <= n - 1; i++)
        if (ktChinhPhuong(a[i]) == true)
            s = s + a[i];
    return s;
}