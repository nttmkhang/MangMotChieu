#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
float TongGiaTri(float[], int);


int main()
{
    float b[500];
    int k;

    Nhap(b, k);

    cout << "\nMang ban dau:";
    Xuat(b, k);

    float kq = TongGiaTri(b, k);
    cout << "\n\nTong cac gia tri lon hon tri tuyet doi cua gia tri dung lien sau no: " << kq;

    cout << "\n\n\n\nKet thuc";
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
    for (int i = 0; i <= n - 1; i++)
        cout << setw(10) << setprecision(5) << a[i];
}

float TongGiaTri(float a[], int n)
{
    float s = 0;
    for (int i = 0; i <= n - 2; i++)
        if (a[i] > abs(a[i + 1]))
            s = s + a[i];
    return s;

}