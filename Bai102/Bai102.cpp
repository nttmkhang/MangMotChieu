#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

void Nhap(vector <float>&);
void Xuat(vector <float>);

int main()
{
    vector <float> c;
    cout << "\nVector:\n";
    Nhap(c);
    cout << "Vector ban dau:";
    Xuat(c);
	return 0;
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