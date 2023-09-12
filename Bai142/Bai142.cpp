#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
void HoanVi(float&, float&);
void DuongTang(float[], int);


int main()
{
    float b[500];
    int k;

    Nhap(b, k);
    cout << "Mang ban dau:\n";
    Xuat(b, k);

    DuongTang(b, k);
    cout << "\nMang sau khi sap tang:\n";
    Xuat(b, k);
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

void DuongTang(float a[], int n)
{
    for (int i = 0; i <= n - 2; i++)
        for (int j = i + 1; j <= n - 1; j++)
            if (a[i] > 0 && a[j] > 0 && a[i] > a[j])
                HoanVi(a[i], a[j]);
}

