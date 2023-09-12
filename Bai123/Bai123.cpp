#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
int ktDoiXung(int[], int);

int main()
{
    int a[500];
    int n;

    cout << "Mang:\n";
    Nhap(a, n);
    cout << "Mang ban dau:";
    Xuat(a, n);
    if (ktDoiXung(a, n) == 1)
        cout << "Mang doi xung";
    else
        cout << "Mang khong doi xung";
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

int ktDoiXung(int a[], int n)
{
    int flag = 1;
    int d = 0;
    int c = n - 1;
    while (d < c)
    {
        if (a[d] != a[c])
            flag = 0;
        d++;
        c--;
    }
    return flag;
}