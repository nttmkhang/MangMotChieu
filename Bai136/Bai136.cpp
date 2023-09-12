#include <iostream>
#include <iomanip>
using namespace std;

void XayDung(int[], int, int[], int&);
void Nhap(int[], int&);
void Xuat(int[], int);

int main()
{
	int n, m;
	int a[1000], b[1000];
	Nhap(a, n);
	cout << "Mang A: ";
	Xuat(a, n);
	XayDung(a, n, b, m);
	cout << "\nMang B có tinh chan le: ";
	Xuat(b, m);
}

void XayDung(int a[], int n, int b[], int& k)
{
	k = 0;
	b[k++] = a[0];
	for (int i = 1; i <= n - 1; i++)
	{
		if (a[i] % 2 == 0 && b[k - 1] % 2 == 0)
			b[k++] = 1;
		else
			if (a[i] % 2 != 0 && b[k - 1] % 2 != 0)
				b[k++] = 0;
		b[k++] = a[i];
	}
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