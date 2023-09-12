#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);

int ViTriDuongDau(float[], int);
float TongCon(float[], int, int, int);
int ktCon(float[], int, int, int);
void DuongLonNhat(float[], int, int&, int&);
void Xuat(float[], int, int);

int main()
{
    float b[500];
    int k;

    cout << "Mang:\n";
    Nhap(b, k);
    cout << "Mang ban dau:";
    Xuat(b, k);
    int vtd = -1, vtc = -1;
    DuongLonNhat(b, k, vtd, vtc);
    if (vtd == -1)
        cout << "Mang toan am";
    else
    {
        cout << "\nMang co tong lon nhat la: ";
        Xuat(b, vtd, vtc);
    }

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

float TongCon(float a[], int n, int vt, int l)
{
    int s = 0;
    for (int i = 0; i < l; i++)
        s = s + a[vt + i];
    return s;
}

int ktCon(float a[], int n, int vt, int l)
{
    int flag = 1;
    for (int i = 0; i <= l - 1; i++)
        if (a[vt + i] <= 0)
            flag = 0;
    return flag;
}

int ViTriDuongDau(float a[], int n)
{
    for (int i = 0; i < n; i++)
        if (a[i] > 0)
            return i;
    return -1;
}

void DuongLonNhat(float a[], int n,
    int& vtd, int& vtc)
{
    int vt = ViTriDuongDau(a, n);
    if (vt == -1)
    {
        vtd = vtc = -1;
        return;
    }
    int smax = a[vt];
    vtd = vtc = vt;
    for (int l = 1; l <= n; l++)
        for (int vt = 0; vt <= n - l; vt++)
            if (ktCon(a, n, vt, l) == 1 &&
                TongCon(a, n, vt, l) > smax)
            {
                vtd = vt;
                vtc = vt + l - 1;
                smax = TongCon(a, n, vt, l);
            }
}

void Xuat(float a[], int vtd, int vtc)
{
    for (int i = vtd; i <= vtc; i++)
        cout << setw(10) << setprecision(5) << a[i];
}