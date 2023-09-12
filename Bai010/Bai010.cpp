// BaiTap001.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);

void Nhap(vector <int>&);
void Xuat(vector <int>);

void Nhap(int[], int&, string);
void Xuat(int[], int, string);

void Nhap(vector <int>&, string);
void Xuat(vector <int>, string);

bool KtToanLe(int);
void LietKe(int[], int);
void LietKe(vector <int>&);

int main()
{
    int b[500];
    int k;

    cout << "\nMang:\n";
    Nhap(b, k);
    cout << "Mang ban dau:";
    Xuat(b, k);
    LietKe(b, k);

    vector <int> c;
    cout << "\nVector:\n";
    Nhap(c);
    cout << "Vector ban dau:";
    Xuat(c);
    LietKe(c);

    int d[500];
    int l;
    Nhap(d, l, "intdata04.inp");
    cout << "\nMang tu file intdata04.inp:";
    Xuat(d, l);
    Xuat(d, l, "intdata04_01.inp");
    LietKe(d, l);

    vector <int> e;
    cout << "\nVector:\n";
    Nhap(e, "intdata04.inp");
    cout << "Vector tu file intdata04.inp:";
    Xuat(e);
    Xuat(e, "intdata04_02.inp");
    LietKe(e);

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

void Nhap(vector <int>& a)
{
    int n;
    cout << "Nhap n:";
    cin >> n;
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        int x = rand() % (200 + 1) - 100;
        a.push_back(x);
    }
}

void Xuat(vector <int>a)
{
    for (int i = 0; i < a.size(); i++)
        cout << setw(8) << a[i];
}

void Nhap(int a[], int& n, string filename)
{
    ifstream fi(filename);
    fi >> n;
    for (int i = 0; i <= n - 1; i++)
        fi >> a[i];
}

void Xuat(int a[], int n, string filename)
{
    ofstream fo(filename);
    fo << n << endl;
    for (int i = 0; i <= n - 1; i++)
        fo << setw(8) << a[i];
}

void Nhap(vector <int>& a, string filename)
{
    int n;
    ifstream fi(filename);
    fi >> n;
    for (int i = 0; i <= n - 1; i++)
    {
        int x;
        fi >> x;
        a.push_back(x);
    }
}
void Xuat(vector <int>a, string filename)
{
    ofstream fo(filename);
    fo << a.size() << endl;
    for (int i = 0; i < a.size(); i++)
        fo << setw(8) << a[i];
}

bool KtToanLe(int n)
{
    bool flag = true;
    int t = abs(n);
    while (t != 0)
    {
        int dv = t % 10;
        if (dv % 2 == 0)
            flag = false;
        t = t / 10;
    }
    return flag;
}

void LietKe(int a[], int n)
{
    cout << "\n\nCac so co toan chu so le trong mang: ";
    for (int i = 0; i < n; i++)
        if (KtToanLe(a[i]))
            cout << setw(10) << a[i];
}

void LietKe(vector <int>& a)
{
    cout << "\n\nCac so co toan chu so le trong vector: ";
    for (int i = 0; i < a.size(); i++)
        if (KtToanLe(a[i]))
            cout << setw(10) << a[i];
}