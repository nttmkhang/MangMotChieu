#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void HoanVi(int& x, int& y);
void SapGiam(int[], int n);
void Tron(int[], int, int[], int, int[], int&);



int main()
{
    int a[500];
    int b[500];
    int c[500];

    int l, k, p;

    cout << "Mang a:\n";
    Nhap(a, l);
    cout << "Mang a ban dau:\n";
    Xuat(a, l);

    cout << "\nMang b:\n";
    Nhap(b, k);
    cout << "Mang b ban dau:\n";
    Xuat(b, k);

    SapGiam(a, l);
    SapGiam(b, k);
    Tron(a, l, b, k, c, p);
    cout << "\nMang sau khi tron:\n";
    Xuat(c, p);
    return 1;
}

void Nhap(int a[], int& n)
{
    cout << "Nhap n:";
    cin >> n;
    srand(time(NULL));
    for (int i = 0; i < n; i++)
        a[i] = -100 + (rand() / (RAND_MAX / (100 - (-100))));
}

void Xuat(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << setw(10) << setprecision(5) << a[i];
}

void HoanVi(int& x, int& y)
{
    float temp = x;
    x = y;
    y = temp;
}

void SapGiam(int a[], int n)
{
    for (int i = 0; i <= n - 2; i++)
        for (int j = i + 1; j <= n - 1; j++)
            if (a[i] < a[j])
                HoanVi(a[i], a[j]);
}

void Tron(int a[], int n, int b[], int m, int c[], int& p)
{
    int i = 0;
    int j = 0;
    p = 0;
    while (!(i >= n && j >= m))
    {
        if ((i < n && j < m && a[i] < b[j]) || (j >= m))
            c[p++] = a[i++];
        else
            c[p++] = b[j++];
    }
}


