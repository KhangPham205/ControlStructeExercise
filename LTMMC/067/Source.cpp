#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&, int[], int&);
void Xuat(int[], int, int[], int);
int TanSuat(int[], int, int);
int DemGiaTri(int[], int, int[], int);

int main()
{
	int a[100];
	int n;

	int b[100];
	int m;

	Nhap(a, n, b, m);
	cout << "Mang ban dau: ";
	Xuat(a, n, b, m);

	cout << "\nSo luong gia tri chi xuat hien mot trong hai mang la: " << DemGiaTri(a, n, b, m);
	return 0;
}

void Nhap(int a[], int& n, int b[], int& m)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; ++i)
		a[i] = rand() % 100;

	cout << "Nhap m: ";
	cin >> m;
	for (int i = 0; i < n; ++i)
		b[i] = rand() % 100;
}

void Xuat(int a[], int n, int b[], int m)
{
	for (int i = 0; i < n; ++i)
		cout << a[i] << " ";
	cout << endl;
	for (int i = 0; i < m; ++i)
		cout << b[i] << " ";
}

int TanSuat(int a[], int n, int x)
{
	int dem = 0;
	for (int i = 1; i <= n - 1; i++)
		if (a[i] == x)
			dem++;
	return dem;
}

int DemGiaTri(int a[], int n, int b[], int m)
{
	int dem = 0;
	for (int i = 0; i <= n - 1; i++)
	{
		bool flag = true;
		for (int j = 0; j < i; ++j)
			if (a[i] == a[j])
				flag = false;
		if (flag == true && TanSuat(b, m, a[i]) == 0)
			dem++;
	}
	return dem;
}