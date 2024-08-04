#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int ChuSoDau(int);
int TimGiaTri(int[], int);

int main()
{
	int a[100];
	int n;

	Nhap(a, n);
	cout << "Mang thu nhat: ";
	Xuat(a, n);

	cout << "\nChu so dau co so dau le trong mang: " << TimGiaTri(a, n);
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; ++i)
		a[i] = rand() % 100;
}

void Xuat(int a[], int n)
{
	for (int i = 0; i < n; ++i)
		cout << a[i] << " ";
}

int ChuSoDau(int n)
{
	int t = abs(n);
	while (t >= 10)
		t /= 10;
	return t;
}

int TimGiaTri(int a[], int n)
{
	for (int i = n - 1; i >= 0; i--)
		if (ChuSoDau(a[i]) % 2 != 0)
			return a[i];
	return -1;
}