#include <iostream>
using namespace std;

void NhapGiam(float[], int&);
void Xuat(float[], int);

int main()
{
	float a[100];
	int n;

	NhapGiam(a, n);
	cout << "Mang sau khi nhap: ";
	Xuat(a, n);

	return 0;
}

void NhapGiam(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		float x;
		cout << "Nhap a[" << i << "]: ";
		cin >> x;
		int j = i - 1;
		while (j >= 0 && a[j] > x)
		{
			a[j + 1] = a[j];
			--j;
		}
		a[j + 1] = x;
	}
}

void Xuat(float a[], int n)
{
	for (int i = 0; i < n; ++i)
		cout << a[i] << " ";
}