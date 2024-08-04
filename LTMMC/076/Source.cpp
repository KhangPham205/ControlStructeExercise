#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
float GanNhat(float[], int, float);

int main()
{
	float a[100];
	int n;

	Nhap(a, n);
	cout << "Mang thu nhat: ";
	Xuat(a, n);

	float x;
	cout << "\nNhap x: ";
	cin >> x;
	cout << "\nGia tri gan " << setprecision(5) << x << " nhat trong mang so thuc : " << GanNhat(a, n, x);
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
		cout << setw(10) << setprecision(4) << a[i];
}

float GanNhat(float a[], int n, float x)
{
	float lc = a[0];
	for (int i = 0; i < n; i++)
		if (abs(a[i] - x) < abs(lc - x))
			lc = a[i];
	return lc;
}