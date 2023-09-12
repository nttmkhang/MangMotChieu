#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
int ViTriLonNhat(int[], int);
int TimChuSo(int[], int);

int main()
{
    int a[500];
    int n;

    cout << "Mang:\n";
    Nhap(a, n);
    cout << "Mang ban dau:";
    Xuat(a, n);
    cout << "Chu so xuat hien nhieu nhat la:" << TimChuSo(a, n);
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

int ViTriLonNhat(int a[], int n)
{
    int lc = 0;
    for (int i = 0; i <= n - 1; i++)
        if (a[i] > a[lc])
            lc = i;
    return lc;
}

int TimChuSo(int a[], int n)
{
    int dem[10] = { 0,0,0,0,0,0,0,0,0,0 };
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
            dem[0]++;
        int t = abs(a[i]);
        while (t != 0)
        {
            int dv = t % 10;
            dem[dv]++;
            t = t / 10;
        }
    }
    return ViTriLonNhat(dem, 10);
    }
