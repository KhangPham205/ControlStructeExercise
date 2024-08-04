#include <iostream>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
void TimGanNhat(float[], int, float&, float&);

int main()
{
	float a[100];
	int n;

	Nhap(a, n);
	cout << "Mang ban dau: ";
	Xuat(a, n);

	float x;
	float y;
	TimGanNhat(a, n, x, y);
	cout << "\nCap gia tri gan nhat la:" << x << " " << y;

	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; ++i)
		a[i] = rand() / (RAND_MAX / 200.0);
}

void Xuat(float a[], int n)
{
	for (int i = 0; i < n; ++i)
		cout << a[i] << " ";
}

void TimGanNhat(float a[], int n, float& x, float& y)
{
	x = a[0];
	y = a[1];
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n; j++)
			if (abs(a[i] - a[j]) < abs(x - y))
			{
				x = a[i];
				y = a[j];
			}
	}
}
