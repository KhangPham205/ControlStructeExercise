#include <iostream>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int ktCon(int[], int, int, int);
int DemCon(int[], int);

int main()
{
	int a[100];
	int n;

	Nhap(a, n);
	cout << "Mang ban dau: ";
	Xuat(a, n);

	cout << "\nSo luong mang con thoa: " << DemCon(a, n);

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

int ktCon(int a[], int n, int vt, int l)
{
	bool flag = 1;
	for (int i = vt; i < vt + l - 1; ++i)
		if (a[i] < a[i + 1])
			flag = 0;
	return flag;
}

int DemCon(int a[], int n)
{
	int res = 0;
	for (int l = 2; l <= n; ++l)
		for (int i = 0; i <= n - l; ++i)
			res += ktCon(a, n, i, l);
	return res;
}