#include <iostream>
#include <iomanip>
using namespace std;

int TanSuat(int[], int, int);
int ktThuoc(int[], int, int[], int);
void Nhap(int[], int&);
void Xuat(int[], int);

int main()
{
	int n, m;
	int a[1000], b[1000];
	Nhap(a, n);
	Nhap(b, m);
	cout << "Mang A: ";
	Xuat(a, n);
	cout << "\nMang B: ";
	Xuat(b, m);
	int kq = ktThuoc(a, n, b, m);

	if (kq == 0)
		cout << "\nMang A khong thuoc mang B";
	else
		cout << "\nMang A thuoc mang B";
}

int TanSuat(int a[], int n, int x)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (a[i] == x)
			dem++;
	return dem;
}

int ktThuoc(int a[], int n, int b[], int m)
{
	int flag = 1;
	for (int i = 0; i < n; i++)
		if (TanSuat(b, m, a[i]) == 0)
			flag = 0;
	return flag;
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