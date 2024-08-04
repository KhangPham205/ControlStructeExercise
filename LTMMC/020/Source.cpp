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

	Nhap(a, n);
	cout << "Mang ban dau: ";
	Xuat(a, n);
	cout << "\nCac vi tri la gia tri cuc tieu trong mang: ";
	LietKe(a, n);
	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; ++i)
		a[i] = rand() / (RAND_MAX / (200.0));
}

void Xuat(float a[], int n)
{
	for (int i = 0; i < n; ++i)
		cout << setw(10) << a[i];
}

void LietKe(float a[], int n)
{
	if (n == 1)
		return;
	if (a[0] < a[1])
		cout << a[0];

	for (int i = 1; i <= n - 2; ++i)
		if (a[i] < a[i - 1] && a[i] < a[i + 1])
			cout << a[i] << ' ';

	if (a[n - 1] < a[n - 2])
		cout << a[n - 1];
}

