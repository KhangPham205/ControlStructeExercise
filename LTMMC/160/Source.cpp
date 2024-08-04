#include <iostream>
using namespace std;

void Nhap(float[], int&, int&);
void Xuat(float[], int);
void XoaViTri(float[], int&, int);

int main()
{
	float a[100];
	int n, k;

	Nhap(a, n, k);
	cout << "Mang ban dau: ";
	Xuat(a, n);

	XoaViTri(a, n, k);
	cout << "\nMang sau khi xoa: ";
	Xuat(a, n);

	return 0;
}

void Nhap(float a[], int& n, int& k)
{
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap vi tri can xoa: ";
	cin >> k;
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