#include <iostream>
#include <iomanip>
using namespace std;

void XayDung(float[], int, float[], int&);
void Nhap(float[], int&);
void Xuat(float[], int);

int main()
{
	int n, m;
	float a[1000], b[1000];
	Nhap(a, n);
	cout << "Mang A: ";
	Xuat(a, n);
	XayDung(a, n, b, m);
	cout << "\nMang B duoc tao tu mang A: ";
	Xuat(b, m);
}

void XayDung(float a[], int n, float b[], int& k)
{
	if (n == 1)
	{
		k = 1;
		b[0] = 0;
		return;
	}
	k = n;
	b[0] = a[1];
	for (int i = 1; i <= n - 2; i++)
		b[i] = a[i - 1] + a[i + 1];
	b[k - 1] = a[n - 2];
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n : ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i <= n - 1; i++)
		a[i] = -100.0 + (rand() / (RAND_MAX / (100.0 - (-100.0))));
}

void Xuat(float a[], int n)
{
	cout << n << endl;
	for (int i = 0; i <= n - 1; i++)
		cout << setw(10) << a[i];
}