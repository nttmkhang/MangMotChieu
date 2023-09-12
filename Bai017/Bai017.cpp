#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void LietKe(int[], int);


int main()
{
    int b[500];
    int k;

    Nhap(b, k);

    cout << "\nMang ban dau:";
    Xuat(b, k);

    LietKe(b, k);

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

void LietKe(int a[], int n)
{
    cout << "\n\nPhan tu chan: ";
    for (int i = 0; i < n; i++)
        if (a[i] % 2 == 0)
        {
            cout << setw(10) << setprecision(5) << a[i];
        }

    cout << "\n\nPhan tu le: ";
    for (int i = 0; i < n; i++)
        if (a[i] % 2 != 0)
            cout << setw(10) << setprecision(5) << a[i];

}