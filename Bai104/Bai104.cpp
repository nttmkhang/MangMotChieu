#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);

int ViTriAmDau(float[], int);
int TimViTri(float[], int);

int main()
{
	float b[500];
	int k;

	cout << "Mang:\n";
	Nhap(b, k);
	cout << "Mang ban dau:";
	Xuat(b, k);

	int kq = TimViTri(b, k);
	if (kq != -1)
		cout << "\nAm lon nhat: " << kq;
	else
		cout << "\nMang khong co so am";

	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
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

int ViTriAmDau(float a[], int n)
{
	for (int i = 0; i < n; i++)
		if (a[i] < 0)
			return i;
	return -1;
}

int TimViTri(float a[], int n)
{
	int lc = ViTriAmDau(a, n);
	if (lc == -1)
		return -1;
	for (int i = 0; i < n; i++)
		if (a[i]<0 && a[i]>a[lc])
			lc = i;
	return lc;
}