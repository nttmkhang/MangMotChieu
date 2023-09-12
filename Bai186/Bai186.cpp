#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);

int TongCon(int[], int, int, int);
void TimCon(int[], int, int, int&, int&);
void Xuat(int[], int, int);

int main()
{
	int b[500];
	int k;

	cout << "Mang:\n";
	Nhap(b, k);
	cout << "Mang ban dau:";
	Xuat(b, k);
	int M;
	cout << "\nNhap M: ";
	cin >> M;
	int vtd = -1, vtc = -1;
	TimCon(b, k, M, vtd, vtc);
	if (vtd == -1)
		cout << "Khong co mang con co tong cac phan tu bang " << M;
	else
	{
		cout << "Mang con tim duoc";
		Xuat(b, vtd, vtc);
	}
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

int TongCon(int a[], int n, int vt, int l)
{
	int s = 0;
	for (int i = 0; i <= l - 1; i++)
		s = s + a[vt + i];
	return s;
}

void TimCon(int a[], int n, int M, int& vtd, int& vtc)
{
	for (int l = 1; l <= n; l++)
		for (int vt = 0; vt <= n - l; vt++)
			if (TongCon(a, n, vt, l) == M)
			{
				vtd = vt;
				vtc = vt + l - 1;
				return;
			}
	vtd = vtc = -1;
}

void Xuat(int a[], int vtd, int vtc)
{
	for (int i = vtd; i <= vtc; i++)
		cout << setw(10) << setprecision(5) << a[i];
}