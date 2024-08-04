#include <iostream>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void XayDungMang(int[], int, int[], int&);

int main()
{
	int a[100];
	int n;

	int b[100];
	int m;

	Nhap(a, n);
	cout << "Mang A ban dau: ";
	Xuat(a, n);

	XayDungMang(a, n, b, m);
	cout << "\nMang chua gia tri le: ";
	Xuat(b, m);
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; ++i)
		a[i] = rand() % (100 + 1);
}

void Xuat(int a[], int n)
{
	for (int i = 0; i < n; ++i)
		cout << a[i] << " ";
}

void XayDungMang(int a[], int n, int b[], int& m)
{
	m = 0;
	for (int i = 0; i < n; i++)
		if (a[i] % 2 != 0)
		{
			b[m] = a[i];
			++m;
		}
}