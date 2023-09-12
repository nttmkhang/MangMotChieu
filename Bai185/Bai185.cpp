#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);

int ktCon(float[], int, int, int);
void DuongDaiNhat(float[], int, int&, int&);
void Xuat(float[], int, int);

int main()
{
    float b[500];
    int k;

    cout << "Mang:\n";
    Nhap(b, k);
    cout << "Mang ban dau:";
    Xuat(b, k);
    int vtd = -1, vtc = -1;
    DuongDaiNhat(b, k, vtd, vtc);
    cout << "\nMang duong dai nhat la: ";
    if (vtd == -1)
        cout << "Day so thuc toan am";
    else
        Xuat(b, vtd, vtc);
    return 0;
}

void Nhap(float a[], int& n)
{
    cout << "Nhap n: ";
    cin >> n;
    srand(time(NULL));
    for (int i = 0; i < n; i++)
        a[i] = -100.0 + (rand() / (RAND_MAX / (100.0 - (-100.0))));
}

void Xuat(float a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << setw(10) << setprecision(5) << a[i];
}

int ktCon(float a[], int n, int vt, int l)
{
    int flag = 1;
    for (int i = 0; i <= l - 1; i++)
        if (a[vt + i] <= 0)
            flag = 0;
    return flag;
}

void DuongDaiNhat(float a[], int n, int& vtd, int& vtc)
{
    for (int l = n; l >= 1; l--)
        for (int vt = 0; vt <= n - l; vt++)
            if (ktCon(a, n, vt, l) == 1)
            {
                vtd = vt;
                vtc = vt + l - 1;
                return;
            }
    vtd = vtc = -1;
}

void Xuat(float a[], int vtd, int vtc)
{
    for (int i = vtd; i <= vtc; i++)
        cout << setw(10) << setprecision(5) << a[i];
}