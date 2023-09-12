#include <iostream>
#include <cmath>
#include <ctime>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
bool KtDoiXung(int);
float TongDoiXung(int[], int);


int main()
{
    int b[500];
    int k;

    Nhap(b, k);
    
    cout << "\nMang ban dau: ";
    Xuat(b, k);

    float kq = TongDoiXung(b, k);
    cout << "\n\nTong cac gia tri doi xung trong mang : " << kq;

    cout << "\n\n\n\nKet thuc";
    return 1;
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
        cout << setw(10) << setprecision(5) << a[i];
}

bool KtDoiXung(int n)
{
    int t = abs(n);
    int dn = 0;
    while (t != 0)
    {
        dn = dn * 10 + t % 10;
        t /= 10;
    }
    if (dn == abs(n))
        return true;
    return false;
}

float TongDoiXung(int a[], int n)
{
    int s = 0;
    for (int i = 0; i <= n - 1; i++)
        if (KtDoiXung(a[i]) == true)
            s = s + a[i];
    return s;
}