#include <iostream>
#include <cmath>
#include <ctime>
#include <iomanip>
#include <cstdlib>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int TanSuat(int[], int, int);
void LietKe(int[], int);


int main()
{
	int b[500];
	int k;

	Nhap(b, k);
	
	cout << "\nMang ban dau la: ";
	Xuat(b, k);
	
	cout << "\n\nCac gia tri chi xuat hien 1 lan trong mang la: ";
	LietKe(b, k);
	
	cout << "\n\n\n\nKet thuc";
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Hay nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = -100.0 + (rand() / (RAND_MAX / (100.0 - (-100.0))));
}

void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(10) << setprecision(5) << a[i];
}

int TanSuat(int a[], int n, int x)
{
	int dem = 0;
	for (int i = 0; i <= n - 1; i++)
		if (a[i] == x)
			dem++;
	return dem;
}

void LietKe(int a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
	{
		int kq = TanSuat(a, n, a[i]);
		if (kq == 1)
			cout << setw(10) << a[i];
	}
}