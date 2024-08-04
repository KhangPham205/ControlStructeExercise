#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
void LietKe(float[], int);

int main()
{
	float a[100];
	int n;
	srand(time(NULL));
	Nhap(a, n);
	cout << "Mang ban dau: ";
	Xuat(a, n);
	cout << "\nCac gia tri am trong mang: ";
	LietKe(a, n);
	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; ++i)
		a[i] = -20.0 + rand() / (RAND_MAX / 100.0);
}

void Xuat(float a[], int n)
{
	for (int i = 0; i < n; ++i)
		cout << setw(10) << a[i];
}

void LietKe(float a[], int n)
{
	for (int i = 0; i <= n - 1; ++i)
		if (a[i] < 0)
			cout << setw(10) << setprecision(5) << a[i];
}

