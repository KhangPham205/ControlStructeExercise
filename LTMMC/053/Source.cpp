#include <iostream>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
int TanSuat(float[], int, float);

int main()
{
	float a[100];
	int n;

	Nhap(a, n);
	cout << "Mang ban dau: ";
	Xuat(a, n);

	float x;
	cout << "Nhap x: ";
	cin >> x;

	cout << "\nSo lan xuat hien gia tri" << x << " la: " << TanSuat(a, n, x);
	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; ++i)
		a[i] = -5.0 + rand() / (RAND_MAX / 200.0);
}

void Xuat(float a[], int n)
{
	for (int i = 0; i < n; ++i)
		cout << a[i] << " ";
}

int TanSuat(float a[], int n, float x)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (a[i] == x)
			dem++;
	return dem;
}