#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);

bool ktNguyenTo(int);
int NguyenToDau(int[], int);
int TimGiaTri(int[], int);

int main()
{

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

bool ktNguyenTo(int k)
{
	int dem = 0;
	for (int i = 1; i <= k; i++)
		if (k % i == 0)
			dem++;
	if (dem == 2)
		return true;
	return false;
}
