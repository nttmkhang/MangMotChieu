#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
void HoanVi(float&, float&);
void SapTang(float[], int);
int ktHoanVi(float[], int, float[], int);



int main()
{
    float a[500];
    float b[500];
    int l,k;

    cout << "Mang a:\n";
    Nhap(a, l);
    cout << "Mang a ban dau:\n";
    Xuat(a, l);

    cout << "\nMang b:\n";
    Nhap(b, k);
    cout << "Mang b ban dau:\n";
    Xuat(b, k);

    if (ktHoanVi(a, l, b, k) == 0) {
        cout << "\nMang b khong phai la hoan vi cua mang a";
    }
    else {
        cout << "\nMang b la hoan vi cua mang a";
    }
    return 1;
}

void Nhap(float a[], int& n)
{
    cout << "Nhap n:";
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

void HoanVi(float& x, float& y)
{
    float temp = x;
    x = y;
    y = temp;
}

void SapTang(float a[], int n)
{
    for (int i = 0; i <= n - 2; i++)
        for (int j = i + 1; j <= n - 1; j++)
            if (a[i] > a[j])
                HoanVi(a[i], a[j]);
}

int ktHoanVi(float a[], int n, float b[], int m)
{
    if (m != n)
        return 0;
    SapTang(a, n);
    SapTang(b, m);
    int flag = 1;
    for (int i = 0; i < n; i++)
        if (a[i] != b[i])
            flag = 0;
    return flag;
}

