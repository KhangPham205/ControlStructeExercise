#include <iostream>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
int DemGiaTri(float[], int);

int main()
{
	float a[100];
	int n;

	Nhap(a, n);
	cout << "Mang ban dau: ";
	Xuat(a, n);

	cout << "\nSo luong phan tu trai dau ke nhau la: " << DemGiaTri(a, n);
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

int DemGiaTri(float a[], int n)
{
	if (n <= 1)
		return 0;
	int dem = 0;
	if (a[0] * a[1] < 0)
		dem++;
	for (int i = 1; i <= n - 2; i++)
		if ((a[i] * a[i - 1] < 0) || (a[i] * a[i + 1] < 0))
			dem++;
	if (a[n - 1] * a[n - 2] < 0)
		dem++;
	return dem;
}