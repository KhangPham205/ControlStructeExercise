#include <iostream>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
void XoaViTri(float[], int&, int);
void XoaTrungX(float[], int&, float);

int main()
{
	float a[100];
	int n;

	Nhap(a, n);
	cout << "Mang ban dau: ";
	Xuat(a, n);

	float k;
	cout << "\nNhap gia tri can xoa: ";
	cin >> k;

	XoaTrungX(a, n, k);
	cout << "\nMang sau khi xoa: ";
	Xuat(a, n);

	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; ++i)
		a[i] = -100.0 + (rand() / (RAND_MAX / (100.0 - (-100.0))));
}

void Xuat(float a[], int n)
{
	for (int i = 0; i < n; ++i)
		cout << a[i] << " ";
}

void XoaViTri(float a[], int& n, int k)
{
	for (int i = k; i <= n - 2; i++)
		a[i] = a[i + 1];
	n--;
}

void XoaTrungX(float a[], int& n, float x)
{
	for (int i = 0; i < n; i--)
		if (a[i] == x)
			XoaViTri(a, n, i);
}