#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int TanSuat(int[], int, int);
void LietKe(int[], int, int[], int);

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

	cout << "\nCac phan tu xuat hien mot trong 2 mang trong mang la: ";
	LietKe(a, n, b, m);
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

int TanSuat(int a[], int n, int x)
{
	int dem = 0;
	for (int i = 1; i <= n - 1; i++)
		if (a[i] == x)
			dem++;
	return dem;
}

void LietKe(int a[], int n, int b[], int m)
{
	for (int i = 0; i < n; i++)
	{
		bool flag = true;
		for (int j = 0; j < i; ++j)
			if (a[i] == a[j])
				flag = false;
		if (flag == true && TanSuat(b, m, a[i]) == 0)
			cout << setw(8) << a[i];
	}

	for (int i = 0; i < m; i++)
	{
		bool flag = true;
		for (int j = 0; j < i; ++j)
			if (b[i] == b[j])
				flag = false;
		if (flag == true && TanSuat(a, n, b[i]) == 0)
			cout << setw(8) << a[i];
	}
}