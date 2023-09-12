#include <iostream>
#include <iomanip>
using namespace std;

int DemGiaTri(int[], int);
void Nhap(int[], int&);
void Xuat(int[], int);

int main()
{
	int n;
	int a[1000];
	Nhap(a, n);
	cout << "Mang A: ";
	Xuat(a, n);
	int kq = DemGiaTri(a, n);
	cout << "\nSo nguyen lon hon tat ca cac gia tri dung truoc no: " << kq;
}

int DemGiaTri(int a[], int n)
{
	int dem = 0;
	for (int i = 1; i < n; i++)
	{
		int flag = 1;
		for (int j = 0; j <= i - 1; j++)
			if (a[j] >= a[i])
				flag = 0;
		if (flag == 1)
			dem++;
	}
	return dem;
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