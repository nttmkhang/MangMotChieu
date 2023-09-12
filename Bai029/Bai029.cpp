#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int ChanDau(int[], int);
int ChanLonNhat(int[], int);
void LietKe(int[], int);


int main()
{
    int b[500];
    int k;

    Nhap(b, k);

    cout << "\nMang ban dau: ";
    Xuat(b, k);

    cout << "\n\nCac vi tri cua so chan lon nhat trong mang: ";
    LietKe(b, k);

    cout << "\n\n\n\nKet thuc";
    return 0;
}

void Nhap(int a[], int& n)
{
    cout << "Hay nhap n: ";
    cin >> n;
    srand(time(NULL));
    for (int i = 0; i <= n - 1; i++)
        a[i] = -100.0 + (rand() / (RAND_MAX / (100.0 - (-100.0))));
}

void Xuat(int a[], int n)
{
    for (int i = 0; i <= n - 1; i++)
        cout << setw(10) << setprecision(5) << a[i];
}

int ChanDau(int a[], int n)
{
    for (int i = 0; i <= n - 1; i++)
        if (a[i] % 2 == 0)
            return a[i];
    return -1;
}

int ChanLonNhat(int a[], int n)
{
    int lc = ChanDau(a, n);
    if (lc == -1)
        return -1;
    for (int i = 0; i <= n - 1; i++)
        if (a[i] % 2 == 0 && a[i] > lc)
            lc = a[i];
    return lc;
}

void LietKe(int a[], int n)
{
    int dd = ChanLonNhat(a, n);
    if (dd == -1)
    {
        cout << "\n\nKhong co gia tri chan";
        return;
    }
    for (int i = 0; i <= n - 1; i++)
        if (a[i] == dd)
            cout << i;

}