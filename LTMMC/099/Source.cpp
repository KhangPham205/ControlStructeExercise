#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
int ViTriDau(float[], int);
int TimViTri(float[], int);

int main()
{
	float a[100];
	int n;

	Nhap(a, n);
	cout << "Mang ban dau: ";
	Xuat(a, n);

	cout << "\nVi tri gia tri duong nho nhat trong mang: " << TimViTri(a, n);
	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; ++i)
		a[i] = -100.0 + rand() / (RAND_MAX / 200.0);
}

void Xuat(float a[], int n)
{
	for (int i = 0; i < n; ++i)
		cout << setw(10) << a[i];
}

int ViTriDau(float a[], int n)
{
	for (int i = 0; i < n; ++i)
		if (a[i] > 0)
			return i;
	return -1;
}

int TimViTri(float a[], int n)
{
	int lc = ViTriDau(a, n);
	if (lc == -1)
		return 0;
	for (int i = 0; i < n; i++)
		if (a[i] > 0 && a[i] < lc)
			lc = i;
	return lc;
}