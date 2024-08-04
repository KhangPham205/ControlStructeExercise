#include <iostream>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
bool ktDoiXung(int);
void XoaViTri(int[], int&, int);
void XoaDoiXung(int[], int&);

int main()
{
	int a[100];
	int n;

	Nhap(a, n);
	cout << "Mang ban dau: ";
	Xuat(a, n);

	XoaDoiXung(a, n);
	cout << "Mang luc sau: ";
	Xuat(a, n);
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; ++i)
		a[i] = rand() % (3000 + 1);
}

void Xuat(int a[], int n)
{
	for (int i = 0; i < n; ++i)
		cout << a[i] << ' ';
}

bool ktDoiXung(int nn)
{
	int k = abs(nn);
	int dn = 0;
	for (int t = k; t != 0; t = t / 10)
	{
		int dv = t % 10;
		dn = dn * 10 + dv;
	}

	if (dn == k)
		return true;
	return false;
}

void XoaViTri(int a[], int& n, int vt)
{
	for (int i = vt; i <= n - 2; ++i)
		a[i] = a[i + 1];
	n--;
}

void XoaDoiXung(int a[], int& n)
{
	for (int i = n - 1; i >= 0; i--)
		if (ktDoiXung(a[i]))
			XoaViTri(a, n, i);
}
