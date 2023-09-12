#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int ktCon(int[], int, int[], int);

int main()
{
	int a[500], b[500];
	int m, n;

	Nhap(a, m);
	Nhap(b, n);

	cout << "\nMang a ban dau: ";
	Xuat(a, m);
	cout << "\nMang b ban dau: ";
	Xuat(b, n);

	if (ktCon(a, n, b, m))
		cout << "Mang b chua mang a";
	else
		cout << "\nMang b khong chua mang a";

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

int ktCon(int a[], int n, int b[], int m)
{
	if (n > m)
		return 0;
	int flag = 0;
	for (int vt = 0; vt <= m - n; vt++)
	{
		int co = 1;
		for (int i = 0; i < n; i++)
			if (a[i] != b[vt + i])
				co = 0;
		if (co == 1)
			flag = 1;
	}
	return flag;
}