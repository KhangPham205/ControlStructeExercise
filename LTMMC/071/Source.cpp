#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int DemXuatHien(int[], int, int[], int);

int main()
{
	int a[100];
	int n;

	int b[100];
	int m;

	Nhap(a, n);
	cout << "Mang thu nhat: ";
	Xuat(a, n);
	cout << endl;
	Nhap(b, m);
	cout << "Mang thu hai: ";
	Xuat(b, m);

	cout << "\nSo lan xuat hien mang a trong mang b la: " << DemXuatHien(a, n, b, m);
	return 0;
}

void Nhap(int a[], int& n)
{
	cin >> n;
	for (int i = 0; i < n; ++i)
		a[i] = rand() % 100;
}

void Xuat(int a[], int n)
{
	for (int i = 0; i < n; ++i)
		cout << a[i] << " ";
}

int DemXuatHien(int a[], int n, int b[], int m)
{
	if (n > m)
		return 0;
	int dem = 0;
	for (int i = 0; i <= m - n; i++)
	{
		bool flag = true;
		for (int j = 0; j < n; ++j)
			if (a[j] != b[i + j])
				flag = false;
		if (flag == true)
			dem++;
	}

	return dem;
}