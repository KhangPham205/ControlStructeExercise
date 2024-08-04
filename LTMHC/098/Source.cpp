#include <iostream>
#include <iomanip>
using namespace std;

void TaoMaTran(float[][500], int&, int&);
void XuatMaTran(float[][500], int, int);
float LonNhatDong(float[][500], int, int, int);
float NhoNhatDong(float[][500], int, int, int);
float LonNhatCot(float[][500], int, int, int);
float NhoNhatCot(float[][500], int, int, int);
float LonNhatCheo1(float[][500], int, int, int, int);
float LonNhatCheo2(float[][500], int, int, int, int);
bool ktHoangHau(float[][500], int, int, int, int);
int DemHoangHau(float[][500], int, int);


int main()
{
	float a[500][500];
	int m, n;
	TaoMaTran(a, m, n);
	cout << "Ma tran duoc tao: " << endl;
	XuatMaTran(a, m, n);

	cout << "\nSo luong hoang hau trong ma tran duoc tao: " << DemHoangHau(a, m, n);
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
			a[i][j] = rand() / (RAND_MAX / 200.0) - 101.0;
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

float LonNhatDong(float a[][500], int m, int n, int d)
{
	float lc = a[d][0];
	for (int j = 0; j < n; ++j)
		if (a[d][j] > lc)
			lc = a[d][j];
	return lc;
}

float NhoNhatDong(float a[][500], int m, int n, int d)
{
	float lc = a[d][0];
	for (int j = 0; j < n; ++j)
		if (a[d][j] < lc)
			lc = a[d][j];
	return lc;
}

float LonNhatCot(float a[][500], int m, int n, int c)
{
	float lc = a[0][c];
	for (int i = 0; i < m; ++i)
		if (a[i][c] > lc)
			lc = a[i][c];
	return lc;
}

float NhoNhatCot(float a[][500], int m, int n, int c)
{
	float lc = a[0][c];
	for (int i = 0; i < m; ++i)
		if (a[i][c] < lc)
			lc = a[i][c];
	return lc;
}

float LonNhatCheo1(float a[][500], int m, int n, int row, int col)
{
	int start_row = max(0, row - col);
	int start_col = max(0, col - row);
	int end_row = min(m, row + n - col);
	int end_col = min(n, col + m - row);

	float lc = a[row][col];
	for (int i = start_row, j = start_col; i < end_row, j < end_col; ++i, ++j)
		if (a[i][j] > lc)
			lc = a[i][j];
	return lc;
}

float LonNhatCheo2(float a[][500], int m, int n, int row, int col)
{
	int	start_row = max(0, col - row);
	int	start_col = max(0, row - col);
	int	end_row = max(m, row + (n - col));
	int	end_col = max(n, col + (n - row));

	float lc = a[row][col];
	for (int i = start_row, j = start_col; i < end_row, j < end_col; ++i, ++j)
		if (a[i][j] > lc)
			lc = a[i][j];
	return lc;
}

bool ktHoangHau(float a[][500], int m, int n, int i, int j)
{
	if (a[i][j] == LonNhatDong(a, m, n, i) && 
		a[i][j] == LonNhatCot(a, m, n, j) &&
		a[i][j] == LonNhatCheo1(a, m, n, i, j) &&
		a[i][j] == LonNhatCheo2(a, m, n, i, j))
		return true;
	return false;
}

int DemHoangHau(float a[][500], int m, int n)
{
	int dem = 0;
	for (int i = 0; i < m; ++i)
		for (int j = 0; j < n; ++j)
			if (ktHoangHau(a, m, n, i, j))
				dem++;
	return dem;
}
