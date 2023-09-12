#include <iostream>
#include <cmath>
#include <ctime>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int DemGiaTri(int[], int);


int main()
{
    int b[500];
    int k;
    
    Nhap(b, k);
    
    cout << "\nMang ban dau: ";
    Xuat(b, k);
    
    int dem = DemGiaTri(b, k);
    cout << "\n\nSo gia tri duong chia het cho 7 trong mang: " << dem;
    
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
        cout << setw(10) << a[i];
}

int DemGiaTri(int a[], int n)
{
    int dem = 0;
    for (int i = 0; i < n; i++)
        if (a[i] % 7 == 0 && a[i] > 0)
            dem++;
    return dem;
}