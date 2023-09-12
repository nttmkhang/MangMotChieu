#include <iostream>
#include <iomanip>
using namespace std;

int ktCSC(float[], int);
void Nhap(float[], int&);
void Xuat(float[], int);

int main()
{
	int n;
	float a[1000];
	Nhap(a, n);
	Xuat(a, n);
	int kq = ktCSC(a, n);

	if (kq == 0)
		cout << "\nKhong la CSC";
	else
		cout << "\nLa CSC";
}

int ktCSC(float a[], int n)
{
	if (n <= 1)
		return 0;
	int flag = 1;
	for (int i = 0; i <= n - 2; i++)
		if ((a[i] - a[i + 1]) != (a[0] - a[1]))
			flag = 0;
	return flag;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n : ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i <= n - 1; i++)
		a[i] = -100.0 + (rand() / (RAND_MAX / (100.0 - (-100.0))));
}

void Xuat(float a[], int n)
{
	cout << n << endl;
	for (int i = 0; i <= n - 1; i++)
		cout << setw(10) << a[i];
}