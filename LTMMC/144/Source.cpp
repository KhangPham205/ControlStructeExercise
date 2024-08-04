#include <iostream>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void HoanVi(int&, int&);
void ChanTang(int[], int);
void LeTang(int[], int);
void ChanTangLeTang(int[], int);


int main()
{
	int a[100];
	int n;

	Nhap(a, n);
	cout << "Mang ban dau: ";
	Xuat(a, n);

	ChanTangLeTang(a, n);

	cout << "\nMang sau sap xep: ";
	Xuat(a, n);

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

void HoanVi(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}

void ChanTang(int a[], int n)
{
	for (int i = 0; i <= n - 2; i++)
		for (int j = i + 1; j <= n - 1; j++)
			if (!(a[i] % 2) && !(a[j] % 2) && a[i] > a[j])
				HoanVi(a[i], a[j]);
}

void LeTang(int a[], int n)
{
	for (int i = 0; i <= n - 2; i++)
		for (int j = i + 1; j <= n - 1; j++)
			if (a[i] % 2 && a[j] % 2 && a[i] > a[j])
				HoanVi(a[i], a[j]);
}

void ChanTangLeTang(int a[], int n)
{
	ChanTang(a, n);
	LeTang(a, n);
}