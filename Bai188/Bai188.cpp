#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);

void ConLonNhat(float[], int, int&, int&);
float TongCon(float[], int, int, int);


int main()
{
    float b[500];
    int k;

    cout << "Mang:\n";
    Nhap(b, k);
    cout << "Mang ban dau:";
    Xuat(b, k);
    int vtd = -1, vtc = -1;
    ConLonNhat(b, k, vtd, vtc);
    if (vtd == -1)
        cout << "\nMang toan am";
    else
        cout << "\nVTD = " << vtd << " VTC = " << vtc;
    return 1;
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
    float s = 0;
    for (int i = 0; i < l; i++)
        s = s + a[vt + i];
    return s;
}

void ConLonNhat(float a[], int n, int& vtd, int& vtc)
{
    vtd = vtc = 0;
    float sln = a[0];
    for (int l = 1; l <= n; l++)
        for (int vt = 0; vt <= n - l; vt++)
            if (TongCon(a, n, vt, l) > sln)
            {
                vtd = vt;
                vtc = vt + l - 1;
                sln = TongCon(a, n, vt, l);
            }
}