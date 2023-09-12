#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);

int TanSuat(int[], int, int);
int TimGiaTri(int[], int);
void LietKe(int[], int);

int main()
{
	int b[500];
	int k;

	cout << "\nMang:\n";
	Nhap(b, k);
	cout << "Mang ban dau:";
	Xuat(b, k);

	cout << "\nCac so xuat hien nhieu nhat: ";
	LietKe(b, k);

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

int TanSuat(int a[], int n, int x)
{
	int dem = 0;
	for (int i = 0; i <= n - 1; i++)
		if (a[i] == x)
			dem++;
	return dem;
}

int TimGiaTri(int a[], int n)
{
	int lc = a[0];
	for (int i = 0; i <= n - 1; i++)
		if (TanSuat(a, n, a[i]) > TanSuat(a, n, lc))
		lc = a[i];
	return lc;
}

void LietKe(int a[], int n)
{
	int lc = TimGiaTri(a, n);
	int ts = TanSuat(a, n, lc);
	for (int i = 0; i <= n - 1; i++)
	{
		int flag = 1;
		for (int j = 0; j <= i - 1; j++)
			if (a[j] == a[i])
				flag = 0;
		if (TanSuat(a, n, a[i]) == ts && flag)
				cout << setw(10) << a[i] ;
	}
}
