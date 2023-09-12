#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);

int LeDauTien(int[], int);
int LeNhoNhat(int[], int);
int TimGiaTri(int[], int);

int main()
{
	int b[500];
	int k;

	cout << "\nMang:\n";
	Nhap(b, k);
	cout << "Mang ban dau:";
	Xuat(b, k);

	int kq = TimGiaTri(b, k);
	if (kq != -1)
		cout << "\nSo thoa man la: " << kq;
	else
		cout << "Khong co gia tri nao thoa man";

	return 0;
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

int LeDauTien(int a[], int n)
{
	for (int i = 0; i < n; i++)
		if (a[i] % 2 != 0)
			return a[i];
	return 0;
}

int LeNhoNhat(int a[], int n)
{
	int lc = LeDauTien(a, n);
	if (lc == 0)
		return 0;
	for (int i = 0; i < n; i++)
		if (a[i] % 2 != 0 && a[i] < lc)
			lc = a[i];
	return lc;
}

int TimGiaTri(int a[], int n)
{
	int lc = LeNhoNhat(a, n);
	if (lc == 0)
		return -1;
	return lc - 1;
}