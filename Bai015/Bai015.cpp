#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>
using namespace std;

void Nhap(float[], int&,int&,int&);
void Xuat(float[], int);

void Nhap(vector <float>&, int&, int&);
void Xuat(vector <float>);

void Nhap(float[], int&, string);
void Xuat(float[], int, string);

void Nhap(vector <float>&, string);
void Xuat(vector <float>, string);

void LietKe(float[], int, int, int);
void LietKe(vector <float>&, int, int);

int main()
{
    float b[500];
    int k;
    int x;
    int y;

    cout << "\nMang:\n";
    Nhap(b, k, x, y);
    cout << "Mang ban dau:";
    Xuat(b, k);
    LietKe(b, k, x, y);

    vector <float> c;
    cout << "\nVector:\n";
    Nhap(c, x, y);
    cout << "Vector ban dau:";
    Xuat(c);
    LietKe(c, x, y);

    float d[500];
    int l;
    Nhap(d, l, "floatdata04.inp");
    cout << "\nMang tu file floatdata04.inp:";
    Xuat(d, l);
    Xuat(d, l, "floatdata04_01.inp");
    LietKe(d, l, x, y);

    vector <float> e;
    cout << "\nVector:\n";
    Nhap(e, "floatdata04.inp");
    cout << "Vector tu file floatdata04.inp:";
    Xuat(e);
    Xuat(e, "floatdata04_02.inp");
    LietKe(e, x, y);

    cout << "\n\n\n\nKet thuc";
    return 1;
}

void Nhap(float a[], int& n,int& xx,int&yy)
{
    cout << "Nhap n:";
    cin >> n;
    cout << "\nHay nhap x: ";
    cin >> xx;
    cout << "Hay nhap y: ";
    cin >> yy;

    srand(time(NULL));
    for (int i = 0; i < n; i++)
        a[i] = -100.0 + (rand() / (RAND_MAX / (100.0 - (-100.0))));
}

void Xuat(float a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << setw(10) << setprecision(5) << a[i];
}

void Nhap(vector <float>& a,int& xx,int& yy)
{
    int n;
    cout << "Nhap n:";
    cin >> n;
    cout << "\nHay nhap x: ";
    cin >> xx;
    cout << "\nHay nhap y: ";
    cin >> yy;
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

void LietKe(float a[], int n, int xx, int yy)
{
    cout << "\n\nCac gia tri thuc trong mang mot chieu thuoc doan [" << xx << "," << yy << "]";
    for (int i = 0; i < n; i++)
        if (a[i] >= xx && a[i] <= yy)
            cout << setw(8) << setprecision(5) << a[i];
}

void LietKe(vector <float>& a,int xx,int yy)
{
    cout << "\n\nCac gia tri thuc trong vector mot chieu thuoc doan [" << xx << "," << yy << "]";
    for (int i = 0; i < a.size(); i++)
        if (a[i] >= xx && a[i] <= yy)
            cout << setw(8) << setprecision(5) << a[i];
}