#include <iostream>
#include <cmath>
#include <ctime>
#include <iomanip>
#include <cstdlib>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
int DemPhanBiet(float[], int);


int main()
{
	float b[500];
	int k;
	
	Nhap(b, k);
	
	cout << "\nMang ban dau la: ";
	Xuat(b, k);
	
	int dem = DemPhanBiet(b, k);
	cout << "\n\nSo luong gia tri phan biet trong mang la: " << dem;
	
	cout << "\n\n\n\nKet thuc";
	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Hay nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = -100.0 + (rand() / (RAND_MAX / (100.0 - (-100.0))));
}

void Xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(10) << setprecision(5) << a[i];
}

int DemPhanBiet(float a[], int n)
{
	int dem = 0;
	for (int i = 0; i <= n - 1; i++)
	{
		bool flag = true;
		for (int j = 0; j < i; j++)
			if (a[i] == a[j])
				flag = false;
		if (flag == true)
			dem++;
	}
	return dem;
}