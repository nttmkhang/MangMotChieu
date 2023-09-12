#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);

void Nhap(vector <float>&);
void Xuat(vector <float>);

void Nhap(float[], int&, string);
void Xuat(float[], int, string);

void Nhap(vector <float>&, string);
void Xuat(vector <float>, string);

int main()
{
    float b[500];
    int k;

    cout << "\nMang:\n";
    Nhap(b, k);
    cout << "Mang ban dau:";
    Xuat(b, k);

    vector <float> c;
    cout << "\nVector:\n";
    Nhap(c);
    cout << "Vector ban dau:";
    Xuat(c);

    float d[500];
    int l;
    Nhap(d, l, "floatdata04.inp");
    cout << "\nMang tu file floatdata04.inp:";
    Xuat(d, l);
    Xuat(d, l, "floatdata04_01.inp");

    vector <float> e;
    cout << "\nVector:\n";
    Nhap(e, "floatdata04.inp");
    cout << "Vector tu file floatdata04.inp:";
    Xuat(e);
    Xuat(e, "floatdata04_02.inp");

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

void Nhap(vector <float>& a)
{
    int n;
    cout << "Nhap n:";
    cin >> n;
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        float x = -100.0 + (rand() / (RAND_MAX / (100.0 - (-100.0))));
        a.push_back(x);
    }
}

void Xuat(vector <float>a)
{
    for (int i = 0; i < a.size(); i++)
        cout << setw(10) << setprecision(5) << a[i];
}

void Nhap(float a[], int& n, string filename)
{
    ifstream fi(filename);
    fi >> n;
    for (int i = 0; i <= n - 1; i++)
        fi >> a[i];
}

void Xuat(float a[], int n, string filename)
{
    ofstream fo(filename);
    fo << n << endl;
    for (int i = 0; i <= n - 1; i++)
        fo << setw(8) << a[i];
}

void Nhap(vector <float>& a, string filename)
{
    int n;
    ifstream fi(filename);
    fi >> n;
    for (int i = 0; i <= n - 1; i++)
    {
        float x;
        fi >> x;
        a.push_back(x);
    }
}

void Xuat(vector <float>a, string filename)
{
    ofstream fo(filename);
    fo << a.size() << endl;
    for (int i = 0; i < a.size(); i++)
        fo << setw(10) << setprecision(5) << a[i];
}
