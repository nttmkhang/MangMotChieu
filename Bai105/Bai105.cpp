#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);

bool ktToanLe(int);
int ToanLeDauTien(int[], int);
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
	if (kq != 0)
		cout << "\nGia tri thoa dieu kien la: " << kq;
	else
		cout << "\nKhong co gia tri";

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

bool ktToanLe(int n)
{
	int t = n;
	while (t != 0)
	{
		if (t % 2 == 0)
			return false;
		t /= 10;
	}
	return true;
}

int ToanLeDauTien(int a[], int n)
{
	for (int i = 0; i < n; i++)
		if (ktToanLe(a[i]) != 0)
			return a[i];
	return 0;
}

int TimGiaTri(int a[], int n)
{
	int lc = ToanLeDauTien(a, n);
	if (lc == 0)
		return 0;
	for (int i = 0; i < n; i++)
		if (ktToanLe(a[i]) == 1 && a[i] > lc)
			lc = a[i];
	return lc;
}