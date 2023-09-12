#include <iostream>
#include <iomanip>
using namespace std;

int ktSong(int[], int);
void Nhap(int[], int&);
void Xuat(int[], int);

int main()
{
	int n;
	int a[1000];
	Nhap(a, n);
	Xuat(a, n);
	int kq = ktSong(a, n);

	if (kq == 0)
		cout << "\nKhong dang song";
	else
		cout << "\La dang song";
}

int ktSong(int a[], int n)
{
	if (n <= 1)
		return 0;
	if (n == 2)
		if (a[0] == a[1])
			return 0;
		else
			return 1;
	int flag = 1;
	for (int i = 1; i <= n - 2; i++)
		if ((a[i] - a[i - 1]) * (a[i] - a[i + 1]) <= 0)
			flag = 0;
	return flag;
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