#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void HoanVi(int&, int&);
bool ktHoanThien(int);
void HoanThienGiam(int[], int);



int main()
{
	int b[500];
	int k;

	Nhap(b, k);
	cout << "Mang ban dau:\n";
	Xuat(b, k);

	HoanThienGiam(b, k);
	cout << "\nMang sau khi sap xep:\n";
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

void HoanVi(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}

bool ktHoanThien(int k)
{
	int s = 0;
	for (int i = 1; i < k; i++)
		if (k % i == 0)
			s = s + i;
	if (s == k)
		return true;
	return false;
}

void HoanThienGiam(int a[], int n)
{
	for (int i = 0; i <= n - 2; i++)
		for (int j = i + 1; j <= n - 1; j++)
			if (ktHoanThien(a[i]) &&
				ktHoanThien(a[j]) && a[i] < a[j])
				HoanVi(a[i], a[j]);
}

