#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void LietKe(int[], int, int, int);


int main()
{
    int b[500];
    int k;

    Nhap(b, k);

    cout << "\nMang ban dau:";
    Xuat(b, k);

    int x, y;

    cout << "\n\nNhap x: ";
    cin >> x;

    cout << "\nNhap y: ";
    cin >> y;

    LietKe(b, k, x, y);

    cout << "\n\n\n\nKet thuc";
    return 1;
}

void Nhap(int a[], int& n)
{
    cout << "Nhap n:";
    cin >> n;
    srand(time(NULL));
    for (int i = 0; i < n; i++)
        a[i] = rand() % (200 + 1) - 100;
}

void Xuat(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << setw(8) << a[i];
}

void LietKe(int a[], int n, int xx, int yy)
{
    cout << "\n\nCac gia tri chan trong mang mot chieu thuoc doan [" << xx << "," << yy << "]";
    for (int i = 0; i < n; i++)
        if (a[i] >= xx && a[i] <= yy)
            if (a[i] % 2 == 0)
                cout << setw(10) << setprecision(5) << a[i];
}