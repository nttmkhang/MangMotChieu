#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
void GanNhat(float[], int, float&, float&);

int main()
{
    float b[500];
    int k;
    float x = 0;
    float y = 0;
    cout << "Mang:\n";
    Nhap(b, k);
    cout << "Mang ban dau:";
    Xuat(b, k);
    cout << "Hai gia tri gan nhau nhat la:";
    GanNhat(b, k, x, y);

}

void Nhap(float a[], int& n)
{
    cout << "Nhap n: ";
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

void GanNhat(float a[], int n, float& x, float& y)
{
    x = a[0];
    y = a[1];
    for (int i = 0; i <= n - 2; i++)
        for (int j = i + 1; j <= n - 1; j++)
            if (abs(a[i] - a[j]) < abs(x - y))
            {
                x = a[i];
                y = a[j];
            }
}