#include <iostream>
#include <iomanip>
using namespace std;

void TaoMaTran(float[][500], int&, int&);
void XuatMaTran(float[][500], int, int);
void DichDong(float[][500], int, int, int, int);
void XoaDong(float[][500], int&, int, int);

int main()
{
	float a[500][500];
	int m, n;
	TaoMaTran(a, m, n);
	cout << "Ma tran duoc tao: " << endl;
	XuatMaTran(a, m, n);

	int d;
	cout << "Nhap dong can xoa: ";
	cin >> d;

	XoaDong(a, m, n, d);
	cout << "\nMa tran sau xoa: " << endl;
	XuatMaTran(a, m, n);
	return 0;
}

void TaoMaTran(float a[][500], int& m, int& n)
{
	cout << "Nhap so dong: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;

	for (int i = 0; i < m; ++i)
		for (int j = 0; j < n; ++j)
			a[i][j] = rand() / (RAND_MAX / 200.0) - 100.0;
}

void XuatMaTran(float a[][500], int m, int n)
{
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
			cout << setw(10) << setprecision(5) << a[i][j];
		cout << endl;
	}
}

void DichDong(float a[][500], int m, int n, int d1, int d2)
{
	for (int j = 0; j < n; ++j)
		a[d1][j] = a[d2][j];
}

void XoaDong(float a[][500], int& m, int n, int d)
{
	for (int i = d; i < m - 1; ++i)
		DichDong(a, m, n, i, i + 1);
	m--;
}
