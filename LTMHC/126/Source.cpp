#include <iostream>
#include <iomanip>
using namespace std;

void TaoMaTran(float[][500], int&, int&);
void XuatMaTran(float[][500], int, int);
void SapDongTang(float[][500], int, int, int);
void SapDongGiam(float[][500], int, int, int);
void SapXep(float[][500], int, int);
int main()
{
	float a[500][500];
	int m, n;
	TaoMaTran(a, m, n);
	cout << "Ma tran duoc tao: " << endl;
	XuatMaTran(a, m, n);

	SapXep(a, m, n);
	cout << "\nMa tran sau sap xep: " << endl;
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

void SapDongTang(float a[][500], int m, int n, int c)
{
	for (int i = 0; i < m - 1; ++i)
		for (int j = i + 1; j < m; ++j)
			if (a[i][c] > a[j][c])
				swap(a[i][c], a[j][c]);
}

void SapDongGiam(float a[][500], int m, int n, int d)
{
	for (int i = 0; i < n - 1; ++i)
		for (int j = i + 1; j < n; ++j)
			if (a[d][i] < a[d][j])
				swap(a[d][i], a[d][j]);
}

void SapXep(float a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
		if (i % 2 == 0)
			SapDongTang(a, m, n, i);
		else
			SapDongGiam(a, m, n, i);
}
