#include <iostream>
#include <cmath>
#include <ctime>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
float TrungBinh(float[], int);


int main()
{
    float b[500];
    int k;
    
    Nhap(b, k);
    
    cout << "\nMang ban dau: ";
    Xuat(b, k);
    
    float kq = TrungBinh(b, k);
    cout << "\n\nKhoang cach trung binh giua cac cap gia tri trong mang: " << kq;

    cout << "\n\n\n\nKet thuc";
    return 0;
}

void Nhap(float a[], int& n)
{
    cout << "Hay nhap n: ";
    cin >> n;
    srand(time(NULL));
    for (int i = 0; i <= n - 1; i++)
        a[i] = -100.0 + (rand() / (RAND_MAX / (100.0 - (-100.0))));
}

void Xuat(float a[], int n)
{
    for (int i = 0; i <= n - 1; i++)
        cout << setw(10) << setprecision(5) << a[i];
}

float TrungBinh(float a[], int n)
{
    float s = 0;
    int dem = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (i != j)
            {
                s = s + abs(a[i] - a[j]);
                dem++;
            }
    if (dem == 0)
        return 0;
    return (float)s / dem;
}