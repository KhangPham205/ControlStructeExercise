#include <iostream>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
void MotVeDau(float[], int);

int main()
{
	float a[100];
	int n;

	Nhap(a, n);
	cout << "Mang ban dau: ";
	Xuat(a, n);

	MotVeDau(a, n);

	cout << "\nMang sau bien doi: ";
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

void MotVeDau(float a[], int n)
{
	int vt = 0;
	for (int i = 0; i < n; i++)
		if (a[i] == 1)
		{
			float temp = a[i];
			a[i] = a[vt];
			a[vt++] = temp;
		}
}