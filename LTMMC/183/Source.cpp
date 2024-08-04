#include <iostream>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int ktCon(int[], int, int[], int);

int main()
{
	cout << "Nhap mang A\n";
	int a[100];
	int n;
	Nhap(a, n);
	cout << "Mang A ban dau: ";
	Xuat(a, n);

	cout << "\nNhap mang B\n";
	int b[100];
	int m;
	Nhap(b, m);
	cout << "Mang B ban dau: ";
	Xuat(b, m);

	if (ktCon(a, n, b, m))
		cout << "\nMang A nam trong mang B";
	else
		cout << "\nMang A khong nam trong mang B";

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

int ktCon(int a[], int n, int b[], int m)
{
	if (n > m)
		return 0;
	for (int vt = 0; vt <= m - n; vt++)
	{
		int co = 1;
		for (int i = 0; i < n; i++)
			if (a[i] != b[vt + i])
				co = 0;
		if (co == 1)
			return 1;
	}
	return 0;
}