#include <iostream>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int InterchangeSort1(int[], int);
int InterchangeSort2(int[], int);
int InterchangeSort3(int[], int);
int InterchangeSort4(int[], int);
int InterchangeSort5(int[], int);
int InterchangeSort6(int[], int);
void demHoanVi(int[], int);
void Copy(int[], int, int[]);

int main()
{
	int a[100];
	int n;

	Nhap(a, n);
	cout << "Mang ban dau: ";
	Xuat(a, n);

	demHoanVi(a, n);

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

int InterchangeSort1(int a[], int n)
{
	int soHoanVi = 0;
	for (int i = 0; i <= n - 2; i++)
		for (int j = i + 1; j <= n - 1; j++)
			if (a[i] > a[j])
			{
				++soHoanVi;
				swap(a[i], a[j]);
			}
	return soHoanVi;
}

int InterchangeSort2(int a[], int n)
{
	int soHoanVi = 0;
	for (int i = 0; i <= n - 2; i++)
		for (int j = n - 1; j >= i + 1; j--)
			if (a[i] > a[j])
			{
				++soHoanVi;
				swap(a[i], a[j]);
			}
	return soHoanVi;
}

int InterchangeSort3(int a[], int n)
{
	int soHoanVi = 0;
	for (int i = n - 1; i >= 1; i--)
		for (int j = 0; j <= i - 1; j++)
			if (a[i] < a[j])
			{
				++soHoanVi;
				swap(a[i], a[j]);
			}
	return soHoanVi;
}

int InterchangeSort4(int a[], int n)
{
	int soHoanVi = 0;
	for (int i = n - 1; i >= 1; i--)
		for (int j = i - 1; j >= 0; j--)
			if (a[i] < a[j])
			{
				++soHoanVi;
				swap(a[i], a[j]);
			}
	return soHoanVi;
}

int InterchangeSort5(int a[], int n)
{
	int soHoanVi = 0;
	for (int i = 0; i <= n - 2; i++)
		for (int j = n - 1; j >= i + 1; j--)
			if (a[i] > a[j])
			{
				++soHoanVi;
				swap(a[i], a[j]);
			}
	return soHoanVi;
}

int InterchangeSort6(int a[], int n)
{
	if (n <= 1)
		return 0;
	int soHoanVi = 0;
	for (int i = 0; i <= n - 2; i++)
		if (a[i] > a[n - 1])
		{
			++soHoanVi;
			swap(a[i], a[n - 1]);
		}
	return soHoanVi + InterchangeSort6(a, n - 1);
}

void Copy(int a[], int n, int b[])
{
	for (int i = 0; i < n; ++i)
		b[i] = a[i];
}

void demHoanVi(int a[], int n)
{
	int b[100] = { 0 };
	Copy(a, n, b);
	cout << "\nSo hoan vi phien ban 01: " << InterchangeSort1(b, n);
	Copy(a, n, b);
	cout << "\nSo hoan vi phien ban 02: " << InterchangeSort2(b, n);
	Copy(a, n, b);
	cout << "\nSo hoan vi phien ban 03: " << InterchangeSort3(b, n);
	Copy(a, n, b);
	cout << "\nSo hoan vi phien ban 04: " << InterchangeSort4(b, n);
	Copy(a, n, b);
	cout << "\nSo hoan vi phien ban 05: " << InterchangeSort5(b, n);
	Copy(a, n, b);
	cout << "\nSo hoan vi phien ban 06: " << InterchangeSort6(b, n);
}