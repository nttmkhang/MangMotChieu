#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);

void NguyenHoa(float[], int);

int main()
{
    float b[500];
    int k;

    cout << "Mang:\n";
    Nhap(b, k);
    cout << "Mang ban dau:";
    Xuat(b, k);
    NguyenHoa(b, k);
    cout << "\nMang sau khi nguyen hoa:";
    Xuat(b, k);
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

void NguyenHoa(float a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
            a[i] = int(a[i] + 0.5);
        else
            a[i] = int(a[i] - 0.5);
    }
}