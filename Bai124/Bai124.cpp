#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
int ktChanLe(int[], int);


int main()
{
    int a[500];
    int n;

    cout << "Mang:\n";
    Nhap(a, n);
    cout << "Mang ban dau:";
    Xuat(a, n);
    if (ktChanLe(a, n) == 1)
        cout << "Mang co tinh chan le";
    else
        cout << "Mang khong co tinh chan le";
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

int ktChanLe(int a[], int n)
{
    int flag = 1;
    for (int i = 0; i <= n - 2; i++)
        if ((a[i] + a[i + 1]) % 2 == 0)
        flag = 0;
    return flag;
}