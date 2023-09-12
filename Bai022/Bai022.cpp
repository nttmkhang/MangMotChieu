#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void LietKe(int[], int);


int main()
{
    int b[500];
    int k;

    Nhap(b, k);

    cout << "\nMang ban dau:";
    Xuat(b, k);

    cout << "\n\nCac gia tri thoa dieu kien la: ";
    LietKe(b, k);

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

void LietKe(int a[], int n)
{
    for (int i = 1; i <= n - 2; i++)
        if (a[i]<abs(a[i + 1]) && a[i]>a[i - 1])
            cout << setw(10) << setprecision(5) << a[i];
}