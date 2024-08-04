#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int DuongDau(int[], int, int, int);

int main()
{
	int a[100];
	int n;

	Nhap(a, n);
	cout << "Mang ban dau: ";
	Xuat(a, n);

	int x;
	cout << "\nNhap x: ";
	cin >> x;

	int y;
	cout << "Nhap y: ";
	cin >> y;

	cout << "\nGia tri duong dau tien trong mang: " << DuongDau(a, n, x, y);
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; ++i)
		a[i] = rand() % 100;
}

void Xuat(int a[], int n)
{
	for (int i = 0; i < n; ++i)
		cout << setw(5) << a[i];
}

int DuongDau(int a[], int n, int x, int y)
{
	for (int i = 0; i <= n - 1; ++i)
		if (a[i] > x && a[i] < y)
			return a[i];
	return x;
}

