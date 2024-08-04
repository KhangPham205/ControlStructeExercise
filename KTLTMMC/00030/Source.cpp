#include <iostream>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
bool ktDoiXung(int);
void XayDung(int[], int, int[], int&);

int main()
{
	int a[100];
	int n;
	int b[100];
	int k;
	Nhap(a, n);
	XayDung(a, n, b, k);
	Xuat(b, k);
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

bool KiemTra(int a[], int n)
{
	for (int i = 0; i < n; ++i)
		if (a[i] % 2 == 0 && a[i] < 2004)
			return true;
	return false;
}

bool ktDoiXung(int nn)
{
	int k = abs(nn);
	int dn = 0;
	for (int t = k; t != 0; t = t / 10)
	{
		int dv = t % 10;
		dn = dn * 10 + dv;
	}

	if (dn == k)
		return true;
	return false;
}

void XayDung(int a[], int n, int b[], int& k)
{
	k = 0;
	for (int i = 0; i < n; ++i)
		if (ktDoiXung(a[i]))
		{
			b[k] = a[i];
			k++;
		}
}