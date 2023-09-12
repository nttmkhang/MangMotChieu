#include <iostream>
#include <iomanip>
using namespace std;

int ktBang(float[], int);
void Nhap(float[], int&);
void Xuat(float[], int);

int main()
{
	int n;
	float a[1000];
	Nhap(a, n);
	Xuat(a, n);
	int kq = ktBang(a, n);

	if (kq == 0)
		cout << "\nKhong bang";
	else
		cout << "\nBang";
}

int ktBang(float a[], int n)
{
	int flag = 1;
	for (int i = 0; i < n; i++)
		if (a[i] != a[0])
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