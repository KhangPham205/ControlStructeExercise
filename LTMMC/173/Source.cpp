#include <iostream>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void XuatCon(int[], int, int, int);

int main()
{
	int a[100];
	int n;

	Nhap(a, n);
	cout << "Mang ban dau: ";
	Xuat(a, n);

	int vt;
	cout << "\nNhap vi tri xuat phat: ";
	cin >> vt;
	int l;
	cout << "Do dai mang con: ";
	cin >> l;

	cout << "\nMang con: ";
	XuatCon(a, n, vt, l);

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

void XuatCon(int a[], int n, int vt, int l)
{
	for (int i = vt; i < vt + l; ++i)
		cout << a[i] << " ";
}