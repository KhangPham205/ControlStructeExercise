#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int ChuSoDau(int);
void LietKe(int[], int);

int main()
{
	int a[100];
	int n;

	Nhap(a, n);
	cout << "Mang ban dau: ";
	Xuat(a, n);
	cout << "\nCac gia tri co chu so dau le trong mang: ";
	LietKe(a, n);
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; ++i)
		a[i] = rand() / (RAND_MAX / 100.0);
}

void Xuat(int a[], int n)
{
	for (int i = 0; i < n; ++i)
		cout << setw(10) << a[i];
}

int ChuSoDau(int n)
{
	int dt = abs(n);
	while (dt >= 10)
		dt /= 10;
	return dt;
}

void LietKe(int a[], int n)
{
	for (int i = 0; i <= n - 1; ++i)
		if (ChuSoDau(a[i]) % 2 != 0)
			cout << setw(10) << a[i];
}

