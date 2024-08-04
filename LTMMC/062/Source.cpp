#include <iostream>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
int DemCucDai(float[], int);
int DemCucTieu(float[], int);
int DemCucTri(float[], int);

int main()
{
	float a[100];
	int n;

	Nhap(a, n);
	cout << "Mang ban dau: ";
	Xuat(a, n);

	cout << "\nSo luong gia tri cuc dai la: " << DemCucDai(a, n);
	cout << "\nSo luong gia tri cuc tieu la: " << DemCucTieu(a, n);
	cout << "\nSo luong gia tri cuc tri la: " << DemCucTri(a, n);
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

int DemCucDai(float a[], int n)
{
	if (n <= 1)
		return 0;
	int dem = 0;
	if (a[0] > a[1])
		dem++;
	for (int i = 1; i <= n - 1; i++)
		if ((a[i] > a[i - 1]) && (a[i] > a[i + 1]))
			dem++;
	if (a[n - 1] > a[n - 2])
		dem++;
	return dem;
}

int DemCucTieu(float a[], int n)
{
	if (n <= 1)
		return 0;
	int dem = 0;
	if (a[0] < a[1])
		dem++;
	for (int i = 1; i <= n - 1; i++)
		if ((a[i] < a[i - 1]) && (a[i] < a[i + 1]))
			dem++;
	if (a[n - 1] < a[n - 2])
		dem++;
	return dem;
}

int DemCucTri(float a[], int n)
{
	return DemCucDai(a, n) + DemCucTieu(a, n);
}
