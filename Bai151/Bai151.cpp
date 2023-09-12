#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);

void DuaVeDau(int[], int);

int main()
{
    int b[500];
    int k;

    cout << "Mang:\n";
    Nhap(b, k);
    cout << "Mang ban dau:";
    Xuat(b, k);
	DuaVeDau(b, k);
	cout << "\nMang sau khi dua so chia het cho 3 ve dau mang: ";
	Xuat(b, k);
    return 1;
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
	for (int i = 0; i <= n - 1; i++)
		cout << setw(10) << a[i];
}

void DuaVeDau(int a[], int n)
{
	int vt = 0;
	for (int i = 0; i < n; i++)
		if (a[i] % 3 == 0)
		{
			int temp = a[i];
			a[i] = a[vt];
			a[vt] = temp;
			vt++;
		}
}