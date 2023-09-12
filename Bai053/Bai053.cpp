#include <iostream>
#include <cmath>
#include <ctime>
#include <iomanip>
using namespace std;

void Nhap(float[], int&, float&);
void Xuat(float[], int);
int DemX(float[], int, float);


int main()
{
    float b[500];
    int k;
    
    float x;
    Nhap(b, k, x);
    
    cout << "\nMang ban dau: ";
    Xuat(b, k);
    
    float kq = DemX(b, k, x);
    cout << "\n\nSo lan xuat hien cua x trong mang la: " << kq;
    
    cout << "\n\n\n\nKet thuc";
    return 0;
}

void Nhap(float a[], int& n, float& x)
{
    cout << "Hay nhap n: ";
    cin >> n;
    cout << "Hay nhap x: ";
    cin >> x;
    srand(time(NULL));
    for (int i = 0; i <= n - 1; i++)
        a[i] = -100.0 + (rand() / (RAND_MAX / (100.0 - (-100.0))));
}

void Xuat(float a[], int n)
{
    for (int i = 0; i <= n - 1; i++)
        cout << setw(10) << setprecision(5) << a[i];
}

int DemX(float a[], int n, float x)
{
    int dem = 0;
    for (int i = 0; i < n; i++)
        if (a[i] == x)
            dem++;
    return dem;
}