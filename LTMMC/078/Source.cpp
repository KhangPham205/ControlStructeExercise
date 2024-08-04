#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
float TimX(float[], int);

int main()
{
	float a[100];
	int n;

	Nhap(a, n);
	cout << "Mang thu nhat: ";
	Xuat(a, n);

	cout << "\nGia tri x can tim: " << TimX(a, n);
	cout << "\n[" << -1 * TimX(a, n) << "," << TimX(a, n) << "]";
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

float TimX(float a[], int n)
{
	float lc = a[0];
	for (int i = 0; i < n; i++)
		if (abs(a[i]) > lc)
			lc = abs(a[i]);
	return lc;
}