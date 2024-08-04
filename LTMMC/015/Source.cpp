#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void LietKe(float[], int, int, int);

int main()
{
	float a[100];
	int n;

	int x = 30;
	int y = 50;
	Nhap(a, n);
	cout << "\nCac gia tri trong mang thuoc khoang (" << x << "," << y << "): ";
	LietKe(a, n, x, y);
	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; ++i)
		a[i] = 10.0 + rand() / (RAND_MAX / (200.0));
}

void LietKe(float a[], int n, int x, int y)
{
	for (int i = 0; i <= n - 1; ++i)
		if (a[i] >= x && a[i] <= y)
			cout << setw(5) << setprecision(5) << a[i] << " ";
}

