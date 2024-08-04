#include <iostream>
#include <iomanip>
using namespace std;

void TaoMaTran(int[][500], int&, int&);
void XuatMaTran(int[][500], int, int);
void DichDong(int[][500], int, int, int, int);
void ThemDong(int[][500], int&, int, int);

int main()
{
	int a[500][500];
	int m, n;
	TaoMaTran(a, m, n);
	cout << "Ma tran duoc tao: " << endl;
	XuatMaTran(a, m, n);

	int d;
	cout << "Nhap dong can chen: ";
	cin >> d;

	ThemDong(a, m, n, d);
	cout << "\nMa tran sau chen: " << endl;
	XuatMaTran(a, m, n);
	return 0;
}

void TaoMaTran(int a[][500], int& m, int& n)
{
	cout << "Nhap so dong: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;

	for (int i = 0; i < m; ++i)
		for (int j = 0; j < n; ++j)
			a[i][j] = rand() % 100;
}

void XuatMaTran(int a[][500], int m, int n)
{
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
			cout << setw(10) << a[i][j];
		cout << endl;
	}
}

void DichDong(int a[][500], int m, int n, int d1, int d2)
{
	for (int j = 0; j < n; ++j)
		a[d1][j] = a[d2][j];
}

void ThemDong(int a[][500], int& m, int n, int d)
{
	for (int i = m; i > d; --i)
		DichDong(a, m, n, i, i - 1);
	for (int j = 0; j < n; ++j)
		a[d][j] = 1;
	m++;
}

