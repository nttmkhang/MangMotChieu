#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
int ktKhong(int[], int);

int main()
{
    int a[500];
    int n;

    cout << "Mang:\n";
    Nhap(a, n);
    cout << "Mang ban dau:";
    Xuat(a, n);
    if (ktKhong(a,n) == 0)
        cout << "Mang khong ton tai gia tri khong";
    else
        cout << "Mang co ton tai gia tri khong";
}

void Nhap(int a[], int& n)
{
    cout << "Nhap n : ";
    cin >> n;
    srand(time(NULL));
    for (int i = 0; i <= n - 1; i++)
        a[i] = rand() % (200 + 1) - 100;
}

void Xuat(int a[], int n)
{
    cout << n << endl;
    for (int i = 0; i <= n - 1; i++)
        cout << setw(10) << a[i];
}

int ktKhong(int a[], int n)
{
    int flag = 0;
    for (int i = 0; i <= n - 1; i++)
        if (a[i] == 0)
            flag = 1;
    return flag;
}