#include <iostream>
using namespace std;

struct PhanSo
{
	int tu;
	int mau;
	PhanSo(int a = 0, int b = 1) : tu(a), mau(b) {}
	bool operator>(PhanSo b)
	{
		return tu * b.mau - mau * b.tu > 0;
	}
};

void InterchangeSort(PhanSo[], int);
void Nhap(PhanSo[], int&);
void Xuat(PhanSo[], int);

int main()
{
	PhanSo a[100];
	int n;
	Nhap(a, n);

	cout << "\nMang ban dau: ";
	Xuat(a, n);

	InterchangeSort(a, n);
	cout << "\nMang sau sap xep: ";
	Xuat(a, n);

	return 0;
}

void Nhap(PhanSo a[], int& n)
{
	cout << "\nNhap n: ";
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		a[i].tu = rand() % (100 + 1);
		while (1)
		{
			int t = rand() % (100 + 1);
			if (t != 0)
			{
				a[i].mau = t;
				break;
			}
		}
	}
}

void Xuat(PhanSo a[], int n)
{
	for (int i = 0; i < n; ++i)
		cout << a[i].tu << "/" << a[i].mau << "  ";
}

void InterchangeSort(PhanSo a[], int n)
{
	for (int i = 0; i < n - 1; ++i)
		for (int j = i + 1; j < n; ++j)
			if (a[i] > a[j])
				swap(a[i], a[j]);
}