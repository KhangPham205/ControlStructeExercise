#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
float DauTien(float[], int);

int main()
{
	float a[100];
	int n;

	Nhap(a, n);
	cout << "Mang ban dau: ";
	Xuat(a, n);
	cout << "\nGia tri dau tien > 2023 trong mang: " << DauTien(a, n);
	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; ++i)
		a[i] = -20.0 + rand() / (RAND_MAX / 200.0);
}

void Xuat(float a[], int n)
{
	for (int i = 0; i < n; ++i)
		cout << setw(10) << setprecision(5) << a[i];
}

float DauTien(float a[], int n)
{
	for (int i = 0; i <= n - 1; ++i)
		if (a[i] > 2023)
			return a[i];
	return 0;
}

