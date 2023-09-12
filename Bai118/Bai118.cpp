#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
int ktTonTai(int[], int);

int main()
{
    int a[500];
    int n;

    cout << "Mang:\n";
    Nhap(a, n);
    cout << "Mang ban dau:";
    Xuat(a, n);
    if (ktTonTai(a,n) == 1)
        cout << "Mang ton tai gia tri khong lien tiep";
    else
        cout << "Mang khong ton tai gia tri khong lien tiep";
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

int ktTonTai(int a[], int n)
{
    int flag = 0;
    for (int i = 0; i <= n - 2; i++)
        if (a[i] == 0 && a[i + 1] == 0)
            flag = 1;
    return flag;
}