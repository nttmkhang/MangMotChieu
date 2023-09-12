#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
void Lietke(float[], int);


int main()
{
    float b[500];
    int k;

    Nhap(b, k);

    cout << "\nMang ban dau: ";
    Xuat(b, k);

    cout << "\n\nTat ca cac cap gia tri thuc (x,y,z): ";
    Lietke(b, k);

    cout << "\n\n\n\nKet thuc";
    return 1;
}

void Nhap(float a[], int& n)
{
    cout << "Nhap n:";
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

void Lietke(float a[], int n)
{
    for (int i = 0; i <= n - 1; i++)
        for (int j = 0; j <= n - 1; j++)
            for (int h = 0; h <= n - 1; h++)
                if (i != j && j != h && i != h)
                    if (a[i] == a[j] + a[h])
                    {
                        cout << "(" << a[i] << "," << a[j] << "," << a[h] << ")" << endl;
                    }
}