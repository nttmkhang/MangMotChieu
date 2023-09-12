#include <iostream>
#include <cmath>
#include <ctime>
#include <iomanip>
#include <cstdlib>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
int DemGiaTri(float[], int);


int main()
{
	float b[500];
	int k;
	
	Nhap(b, k);
	
	cout << "\nMang ban dau la: ";
	Xuat(b, k);
	
	int dem = DemGiaTri(b, k);
	cout << "\n\nSo luong cac phan tu ke nhau ma so dung sau cung dau so dung truoc va co tri tuyet doi lon hon la: " << dem;
	
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

int DemGiaTri(float a[], int n)
{
	int dem = 0;
	if (n <= 1)
		return 0;
	for (int i = 0; i <= n - 1; i++)
		if (a[i] * a[i - 1] > 0)
			if (abs(a[i]) > abs(a[i - 1]))
				dem++;
	return dem;
}