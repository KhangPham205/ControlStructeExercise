#include <iostream>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int ucln(int, int);
int TimUCLN(int[], int);

int main()
{
	int a[100];
	int n;

	Nhap(a, n);
	cout << "Mang ban dau: ";
	Xuat(a, n);

	cout << "\nUCLN cua mang la: " << TimUCLN(a, n);

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

int ucln(int a, int b)
{
	a = abs(a);
	b = abs(b);
	while (a * b != 0)
	{
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}
	return (a + b);
}

int TimUCLN(int a[], int n)
{
	int lc = a[0];
	for (int i = 0; i < n; i++)
		lc = ucln(lc, a[i]);
	return lc;
}