#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
bool ktChinhPhuong(int);
void LietKe(int[], int);

int main()
{
	int a[100];
	int n;

	Nhap(a, n);
	cout << "Mang ban dau: ";
	Xuat(a, n);
	cout << "\nCac vi tri so chinh phuong trong mang: ";
	LietKe(a, n);
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
		cout << setw(10) << a[i];
}

void LietKe(int a[], int n)
{
	for (int i = 0; i <= n - 1; ++i)
		if (ktChinhPhuong(a[i]))
			cout << setw(5) << i;
}

bool ktChinhPhuong(int n)
{
	for (int i = 0; (i * i) <= n; ++i)
		if (i * i == n)
			return true;
	return false;
}
