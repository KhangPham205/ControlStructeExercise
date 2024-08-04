#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int ktHoanVi(int[], int, int[], int);

int main()
{
	int a[100];
	int n;

	Nhap(a, n);
	cout << "Mang thu nhat: ";
	Xuat(a, n);

	cout << endl;

	int b[100];
	int m;

	Nhap(b, m);
	cout << "Mang thu hai: ";
	Xuat(b, m);

	if (ktHoanVi(a, n, b, m))
		cout << "\nThoa tinh chat";
	else
		cout << "\nKhong thoa";

	return 0;
}

void Nhap(int a[], int& n)
{
	cin >> n;
	for (int i = 0; i < n; ++i)
		a[i] = rand() % (100 + 1);
}

void Xuat(int a[], int n)
{
	for (int i = 0; i < n; ++i)
		cout << setw(10) << setprecision(4) << a[i];
}

int ktHoanVi(int a[], int n, int b[], int m)
{
	if (n != m)
		return 0;
	for (int i = 0, j = m - 1; i < j; i++, j--)
		if (a[i] != b[j])
			return 0;
	return 1;
}