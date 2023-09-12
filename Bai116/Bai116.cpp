#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
void GanNhat(int[], int, int&, int&);
void LietKe(int[], int);


int main()
{
    int a[500];
    int n;

    cout << "Mang:\n";
    Nhap(a, n);
    cout << "Mang ban dau:";
    Xuat(a, n);
    cout << "Cac cap gia tri gan nhau nhat trong mang la:";
    LietKe(a, n);
}

void Nhap(int a[], int& n)
{
    cout << "Nhap n : ";
    cin >> n;
    srand(time(NULL));
    for (int i = 0; i <= n - 1; i++)
        a[i] = rand() % (200 + 1) - 100;
}

void Xuat(int a[], int n)
{
    cout << n << endl;
    for (int i = 0; i <= n - 1; i++)
        cout << setw(10) << a[i];
}

void GanNhat(int a[], int n, int& x, int& y)
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

void LietKe(int a[], int n)
{
    int x, y;
    GanNhat(a, n, x, y);
    for (int i = 0; i <= n - 1; i++)
        for (int j = 0; j <= n - 1; j++)
            if (i != j && abs(a[i] - a[j]) == abs(x - y))
                cout << "("<<a[i]<< ", "<<a[j]<<")";
}
