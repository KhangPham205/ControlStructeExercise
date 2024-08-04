#include <iostream>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int TanSuat(int[], int, int);
int ktThuoc(int[], int, int[], int);

int main()
{
	int a[100];
	int n;
	cout << "Nhap mang A\n";
	Nhap(a, n);
	cout << "Mang A ban dau: ";
	Xuat(a, n);

	int b[100];
	int m;
	cout << "\nNhap mang B\n";
	Nhap(b, m);
	cout << "Mang B ban dau: ";
	Xuat(b, m);

	if (ktThuoc(a, n, b, m) == 1)
		cout << "\nMang A nam trong mang B";
	else
		cout << "\nMang A khong nam trong mang B";

	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; ++i)
		a[i] = rand() % (100 + 1);
}

void Xuat(int a[], int n)
{
	for (int i = 0; i < n; ++i)
		cout << a[i] << " ";
}

int TanSuat(int a[], int n, int x)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (a[i] == x)
			dem++;
	return dem;
}

int ktThuoc(int a[], int n, int b[], int m)
{
	int flag = 1;
	for (int i = 0; i < n; i++)
		if (TanSuat(b, m, a[i]) == 0)
			flag = 0;
	return flag;
}