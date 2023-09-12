#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);

void ThemBaoToan(float[], int, float);
void NhapGiam(float[], int&);

int main()
{
    float b[500];
    int k;

    cout << "Mang:\n";
    //Cach 1
    Nhap(b, k);
    cout << "Mang sau khi nhap cach 1:";
    Xuat(b, k);

    //Cach 2
    NhapGiam(b, k);
    cout << "Mang sau khi nhap cach 2:";
    Xuat(b, k);
    return 1;
}


void Nhap(float a[], int& n)
{
    cout << "Nhap n : ";
    cin >> n;
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        float x = -100.0 + (rand() / (RAND_MAX / (100.0 - (-100.0))));
        ThemBaoToan(a, i, x);
    }
}

void Xuat(float a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << setw(10) << setprecision(5) << a[i];
    cout << endl;
}

void ThemBaoToan(float a[], int n, float x)
{
    int i = n - 1;
    while (i >= 0 && a[i] < x)
    {
        a[i + 1] = a[i];
        i--;
    }
    a[i + 1] = x;
}

void NhapGiam(float a[], int& n)
{
    cout << "Nhap n : ";
    cin >> n;
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        float x = -100.0 + (rand() / (RAND_MAX / (100.0 - (-100.0))));
        int j = i - 1;
        for (; j >= 0 && a[j] < x; j--)
            a[j + 1] = a[j];
        a[j + 1] = x;
    }
}
