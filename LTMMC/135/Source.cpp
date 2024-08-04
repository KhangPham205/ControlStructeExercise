#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
void XayDung(float[], int, float[], int&);

int main()
{
	float a[100];
	int n;

	Nhap(a, n);
	cout << "Mang ban dau: ";
	Xuat(a, n);

	float b[100];
	int m = 0;
	XayDung(a, n, b, m);
	cout << "\nMang B: ";
	Xuat(b, m);

	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; ++i)
		a[i] = rand() / (RAND_MAX / 200.0) - 100.0;
}

void Xuat(float a[], int n)
{
	for (int i = 0; i < n; ++i)
		cout << setw(10) << setprecision(5) << a[i] << " ";
}

void XayDung(float a[], int n, float b[], int& k)
{
	if (n == 1)
	{
		k = 1;
		b[0] = 0;
		return;
	}

	k = n;
	b[0] = a[1];
	for (int i = 1; i < n - 1; i++)
		b[i] = a[i - 1] + a[i + 1];
	b[k - 1] = a[n - 2];
}