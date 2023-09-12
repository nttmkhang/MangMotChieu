#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);

bool ktNguyenTo(int);
int LonNhat(int[], int);
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
	cout << "\nSo nguyen to thoa man: " << kq;

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

int LonNhat(int a[], int n)
{
	int lc = a[0];
	for (int i = 0; i < n; i++)
		if (a[i] > lc)
			lc = a[i];
	return lc;
}

int TimGiaTri(int a[], int n)
{
	int lc = LonNhat(a, n) + 1;
	while (ktNguyenTo(lc) == 0)
		lc++;
	return lc;
}