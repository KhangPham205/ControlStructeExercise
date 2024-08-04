#include <iostream>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void Tron(int[], int, int[], int, int[], int&);

int main()
{
	int a[100];
	int n;
	cout << "Nhap mang A\n";
	Nhap(a, n);
	cout << "Mang A ban dau: ";
	Xuat(a, n);

	int b[100];
	int m;
	cout << "\nNhap mang B";
	Nhap(b, m);
	cout << "\nMang B ban dau: ";
	Xuat(b, m);

	int c[200];
	int q;
	Tron(a, n, b, m, c, q);
	cout << "\nKet qua tron 2 mang A va B: ";
	Xuat(c, q);

	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	int largest = -101;
	for (int i = 0; i < n; ++i)
		while (1)
		{
			int tmp = rand() % (100 + 1);
			if (tmp >= largest)
			{
				a[i] = largest = tmp;
				break;
			}
		}
}

void Xuat(int a[], int n)
{
	for (int i = 0; i < n; ++i)
		cout << a[i] << " ";
}

void Tron(int a[], int n, int b[], int m, int c[], int& p)
{
	int i = n - 1;
	int j = m - 1;
	p = 0;
	while (i >= 0 && j >= 0)
	{
		if (a[i] > b[j])
			c[p++] = a[i--];
		else
			c[p++] = b[j--];
	}
	while (i >= 0)
		c[p++] = a[i--];
	while (j >= 0)
		c[p++] = b[j--];
}