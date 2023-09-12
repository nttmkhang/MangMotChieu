#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);

void XoaViTri(int[], int&, int);
bool ktNguyenTo(int);
void XoaNguyenTo(int[], int&);

int main()
{
	int b[500];
	int k;

	cout << "Mang:\n";
	Nhap(b, k);
	cout << "Mang ban dau:";
	Xuat(b, k);

	XoaNguyenTo(b, k);
	cout << "\nMang sau khi xoa so nguyen to: ";
	Xuat(b, k);
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

void XoaViTri(int a[], int& n, int k)
{
	for (int i = k; i <= n - 2; i++)
		a[i] = a[i + 1];
	n--;
}

void XoaNguyenTo(int a[], int& n)
{
	for (int i = n - 1; i >= 0; i--)
		if (ktNguyenTo(a[i]))
			XoaViTri(a, n, i);
}