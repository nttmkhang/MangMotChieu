#include <iostream>
#include <iomanip>
using namespace std;

bool ktNguyenTo(int);
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
	cout << "\nMang B chua cac so nguyen to: ";
	Xuat(b, m);
}

bool ktNguyenTo(int k)
{
	int dem = 0;
	for (int i = 1; i <= k; i++)
		if (k % i == 0)
			dem++;
	if (dem == 2)
		return true;
	return false;
}

void XayDung(int a[], int n, int b[], int& k)
{
	k = 0;
	for (int i = 0; i < n; i++)
		if (ktNguyenTo(a[i]))
		{
			b[k] = a[i];
			k++;
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