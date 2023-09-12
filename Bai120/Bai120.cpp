#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
bool ktNguyenTo(int);
int ktTonTai(int[], int);

int main()
{
    int a[500];
    int n;

    cout << "Mang:\n";
    Nhap(a, n);
    cout << "Mang ban dau:";
    Xuat(a, n);
    if (ktTonTai(a, n) == 1)
        cout << "Mang ton tai so nguyen to";
    else
        cout << "Mang khong ton tai so nguyen to";
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

bool ktNguyenTo(int k)
{
    int dem = 0;
    for (int i = 1; i <= k; i++)
        if (k % i == 0)
            dem++;
    if (dem == 2)
        return true;
    return false;
}

int ktTonTai(int a[], int n)
{
    int flag = 0;
    for (int i = 0; i < n; i++)
        if (ktNguyenTo(a[i]) == true)
            flag = 1;
    return flag;
}