#include <iostream>
#include <iomanip>
using namespace std;

void NhapTang(float[], int&);
void Xuat(float[], int);


int main()
{
    float b[500];
    int k;

    cout << "Mang:\n";
    NhapTang(b, k);
    cout << "Mang sau khi nhap tang:";
    Xuat(b, k);
    return 1;
}

void NhapTang(float a[], int& n)
{
    cout << "Nhap n : ";
    cin >> n;
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        a[i] = -100.0 + (rand() / (RAND_MAX / (100.0 - (-100.0))));
        int x = a[i];
        int j;
        for (j = i - 1; j >= 0 && a[j] > x; j--)
            a[j + 1] = a[j];
        a[j + 1] = x;

    }
}

void Xuat(float a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << setw(10) << setprecision(5) << a[i];
}