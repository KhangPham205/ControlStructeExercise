#include <iostream>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
void ThemBaoToan(float[], int&, float);

int main()
{
	float a[100];
	int n;

	Nhap(a, n);
	cout << "Mang ban dau: ";
	Xuat(a, n);

	float x;
	cout << "\nNhap gia tri muon them: ";
	cin >> x;

	ThemBaoToan(a, n, x);

	cout << "\nMang sau khi them: ";
	Xuat(a, n);

	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	float largest = -101;
	for (int i = 0; i < n; ++i)
		while (1)
		{
			float t = -100.0 + (rand() / (RAND_MAX / (100.0 - (-100.0))));
			if (t >= largest)
			{
				a[i] = largest = t;
				break;
			}
		}
}

void Xuat(float a[], int n)
{
	for (int i = 0; i < n; ++i)
		cout << a[i] << " ";
}

void ThemBaoToan(float a[], int& n, float x)
{
	int j = n - 1;
	while (j >= 0 && a[j] > x)
	{
		a[j + 1] = a[j];
		--j;
	}
	a[j + 1] = x;
	++n;
}