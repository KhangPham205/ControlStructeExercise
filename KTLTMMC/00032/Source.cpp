#include <iostream>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void XayDung(int[], int&, int);

int main()
{
	int a[100];
	int n;
	
	Nhap(a, n);
	cout << "Mang ban dau: ";
	Xuat(a, n);
	int vt;
	cout << "\nNhap vi tri: ";
	cin >> vt;
	XayDung(a, n, vt);
	cout << "Mang luc sau: ";
	Xuat(a, n);
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; ++i)
		a[i] = rand() % (3000 + 1);
}

void Xuat(int a[], int n)
{
	for (int i = 0; i < n; ++i)
		cout << a[i] << ' ';
}

void XayDung(int a[], int& n, int vt)
{
	for (int i = vt; i <= n - 2; ++i)
		a[i] = a[i + 1];
	n--;
}