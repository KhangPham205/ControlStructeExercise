#include <iostream>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void ThemViTri(int[], int&, int, int);

int main()
{
	int a[100];
	int n;

	Nhap(a, n);
	cout << "Mang ban dau: ";
	Xuat(a, n);

	int vt;
	cout << "Nhap vi tri: ";
	cin >> vt;

	int x;
	cout << "Nhap gia tri them vao: ";
	cin >> x;
	ThemViTri(a, n, x, vt);
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

void ThemViTri(int a[], int& n, int x, int vt)
{
	for (int i = n - 1; i >= vt; --i)
		a[i + 1] = a[i];
	a[vt] = x;
	n++;
}
