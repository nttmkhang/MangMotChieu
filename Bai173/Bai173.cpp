#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void XuatCon(int[], int, int, int);

int main()
{
	int b[500];
	int k, l, vt;

	Nhap(b, k);
	cout << "Nhap do dai: ";
	cin >> l;
	cout << "Nhap vi tri ban dau: ";
	cin >> vt;

	cout << "\nMang ban dau: ";
	Xuat(b, k);

	cout << "\nMang con:\n";
	XuatCon(b, k, vt, l);

	cout << "\n\n\n\nKet thuc";
	return 1;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
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

void XuatCon(int a[], int n, int vt, int l)
{
	for (int i = 0; i <= l - 1; i++)
		cout << setw(8) << a[vt + i];
}