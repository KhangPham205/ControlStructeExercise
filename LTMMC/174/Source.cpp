#include <iostream>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void XuatCon(int[], int, int);

int main()
{
	int a[100];
	int n;

	Nhap(a, n);
	cout << "Mang ban dau: ";
	Xuat(a, n);

	int l;
	cout << "\nDo dai mang con: ";
	cin >> l;

	cout << "\nMang con\n";
	XuatCon(a, n, l);

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

void XuatCon(int a[], int n, int l)
{
	for (int i = 0; i <= n - l; ++i)
	{
		for (int j = i; j < i + l; ++j)
			cout << a[j] << " ";
		cout << endl;
	}
}