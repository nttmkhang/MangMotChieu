#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);

void ChanVeDau(int[], int);
void LeVeCuoi(int[], int);
void ChanDauLeCuoi(int[], int);

int main()
{
	int b[500];
	int k;

	cout << "Mang:\n";
	Nhap(b, k);
	cout << "Mang ban dau:";
	Xuat(b, k);
	ChanDauLeCuoi(b, k);
	cout << "\nMang sau khi dua chan len dau, le ve cuoi va 0 nam giua: ";
	Xuat(b, k);
	return 1;
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
	for (int i = 0; i <= n - 1; i++)
		cout << setw(10) << a[i];
}

void ChanVeDau(int a[], int n)
{
	int vt = 0;
	for (int i = 0; i < n; i++)
		if (a[i] % 2 == 0 && a[i] != 0)
		{
			int temp = a[i];
			a[i] = a[vt];
			a[vt] = temp;
			vt++;
		}
}

void LeVeCuoi(int a[], int n)
{
	int vt = n - 1;
	for (int i = n - 1; i >= 0; i--)
		if (a[i] % 2 != 0)
		{
			int temp = a[i];
			a[i] = a[vt];
			a[vt] = temp;
			vt--;
		}
}

void ChanDauLeCuoi(int a[], int n)
{
	ChanVeDau(a, n);
	LeVeCuoi(a, n);
}
