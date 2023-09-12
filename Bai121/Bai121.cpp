#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
bool ktHoanThien(int);
int ktTinhChat(int[], int);

int main()
{
    int a[500];
    int n;

    cout << "Mang:\n";
    Nhap(a, n);
    cout << "Mang ban dau:";
    Xuat(a, n);
    if (ktTinhChat(a, n) == 1)
        cout << "Mang khong ton tai so hoan thien lon hon 256";
    else
        cout << "Mang ton tai so hoan thien lon hon 256";
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

bool ktHoanThien(int k)
{
    int s = 0;
    for (int i = 1; i < k; i++)
        if (k % i == 0)
            s = s + i;
    if (s == k)
        return true;
    return false;
}

int ktTinhChat(int a[], int n)
{
    int dem = 0;
    for (int i = 0; i < n; i++)
        if (ktHoanThien(a[i]) && a[i] > 256)
            dem++;
    if (dem == 0)
        return 1;
    return 0;
}