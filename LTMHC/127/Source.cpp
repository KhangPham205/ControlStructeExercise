#include <iostream>
#include <iomanip>
using namespace std;

void TaoMaTran(float[][500], int&, int&);
void XuatMaTran(float[][500], int, int);
void SapCotTang(float[][500], int, int, int);
void SapCotGiam(float[][500], int, int, int);
void SapXep(float[][500], int, int);

int main()
{
	float a[500][500];
	int m, n;
	TaoMaTran(a, m, n);
	cout << "Ma tran duoc tao: " << endl;
	XuatMaTran(a, m, n);

	int c;
	cout << "\nNhap cot can duyet: ";
	cin >> c;

	SapCotGiam(a, m, n, c);
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

void SapCotTang(float a[][500], int m, int n, int c)
{
	for (int i = 0; i < m - 1; ++i)
		for (int j = i + 1; j < m; ++j)
			if (a[i][c] > a[j][c])
				swap(a[i][c], a[j][c]);
}

void SapCotGiam(float a[][500], int m, int n, int c)
{
	for (int i = 0; i < m - 1; ++i)
		for (int j = i + 1; j < m; ++j)
			if (a[i][c] < a[j][c])
				swap(a[i][c], a[j][c]);
}

void SapXep(float a[][500], int m, int n)
{
	for (int j = 0; j <= n - 1; j++)
		if (j % 2 == 0)
			SapCotGiam(a, m, n, j);
		else
			SapCotTang(a, m, n, j);
}

