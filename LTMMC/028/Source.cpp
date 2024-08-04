#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
float DuongDau(float[], int);
float DuongNhoNhat(float[], int);
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
		a[i] = -20.0 + rand() / (RAND_MAX / 200.0);
}

void Xuat(float a[], int n)
{
	for (int i = 0; i < n; ++i)
		cout << setw(10) << setprecision(5) << a[i];
}

float DuongDau(float a[], int n)
{
	for (int i = 0; i <= n - 1; ++i)
		if (a[i] > 0)
			return a[i];
	return -1;
}

float DuongNhoNhat(float a[], int n)
{
	float lc = DuongDau(a, n);
	if (lc == -1)
		return -1;
	for (int i = 0; i < n; ++i)
		if (a[i] > 0 && a[i] < lc)
			lc = a[i];
	return lc;
}

void LietKe(float a[], int n)
{
	float dd = DuongNhoNhat(a, n);
	if (dd == -1)
	{
		cout << "\nKhong co gia tri duong";
		return;
	}
	for (int i = 0; i <= n - 1; ++i)
		if (a[i] == dd)
			cout << i << ' ';
}

