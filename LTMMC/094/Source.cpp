#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
bool ktNguyenTo(int);
int NguyenToCuoi(int[], int);

int main()
{
	int a[100];
	int n;

	Nhap(a, n);
	cout << "Mang thu nhat: ";
	Xuat(a, n);

	cout << "\nGia tri nguyen to cuoi trong mang: " << NguyenToCuoi(a, n);
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
		cout << a[i] << " ";
}

bool ktNguyenTo(int k)
{
	int dem = 0;
	for (int i = 1; i <= k; i++)
		if (k % i == 0)
			dem++;
	if (dem == 2)
		return true;
	return false;
}

int NguyenToCuoi(int a[], int n)
{
	for (int i = n - 1; i >= 0; i--)
		if (ktNguyenTo(a[i]))
			return a[i];
	return -1;
}