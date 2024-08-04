#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
bool ktHoanThien(int);
int ViTriCuoi(int[], int);

int main()
{
	int a[100];
	int n;

	Nhap(a, n);
	cout << "Mang thu nhat: ";
	Xuat(a, n);

	cout << "\nVi tri hoan thien cuoi trong mang: " << ViTriCuoi(a, n);
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

bool ktHoanThien(int k)
{
	int s = 0;
	for (int i = 1; i < k; i++)
		if (k % i == 0)
			s += i;
	if (s == k)
		return true;
	return false;
}

int ViTriCuoi(int a[], int n)
{
	for (int i = n - 1; i >= 0; i++)
		if (ktHoanThien(a[i]))
			return i;
	return -1;
}