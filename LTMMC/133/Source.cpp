#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
void XayDungMang(float[], int, float[], int&);

int main()
{
	float a[100];
	int n;

	float b[100];
	int m;

	Nhap(a, n);
	cout << "Mang A ban dau: ";
	Xuat(a, n);

	XayDungMang(a, n, b, m);
	cout << "\nMang chua gia tri am: ";
	Xuat(b, m);
	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; ++i)
		a[i] = rand() / (RAND_MAX / 200.0) - 100.0;
}

void Xuat(float a[], int n)
{
	for (int i = 0; i < n; ++i)
		cout << a[i] << " ";
}

void XayDungMang(float a[], int n, float b[], int& m)
{
	m = 0;
	for (int i = 0; i < n; i++)
		if (a[i] < 0)
			b[m++] = a[i];
}