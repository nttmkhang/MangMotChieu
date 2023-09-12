#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);

void XoaViTri(int[], int&, int);
void XoaTrung(int[], int&);


int main()
{
    int b[500];
    int k;

    cout << "Mang:\n";
    Nhap(b, k);
    cout << "Mang ban dau:";
    Xuat(b, k);

    XoaTrung(b, k);
    cout << "\nMang sau khi xoa trung x: ";
    Xuat(b, k);

    return 1;
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
    for (int i = 0; i <= n - 1; i++)
        cout << setw(10) << a[i];
}

void XoaViTri(int a[], int& n, int k)
{
    for (int i = k; i <= n - 2; i++)
        a[i] = a[i + 1];
    n--;
}

void XoaTrung(int a[], int& n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        int flag = 0;
        for (int j = 0; j <= i - 1; j++)
            if (a[j] == a[i])
                flag = 1;
        if (flag == 1)
            XoaViTri(a, n, i);
    }
}
