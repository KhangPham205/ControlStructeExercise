#include <iostream>
#include <iomanip>
using namespace std;

void TaoMaTran(int[][500], int&, int&);
void XuatMaTran(int[][500], int, int);
int DemChuSo(int);
int DemCot(int[][500], int, int, int);
int DemLonNhat(int[][500], int, int);
void LietKe(int[][500], int, int);

int main()
{
	int a[500][500];
	int m, n;
	TaoMaTran(a, m, n);
	cout << "Ma tran duoc tao: " << endl;
	XuatMaTran(a, m, n);

	cout << "\nCac cot co nhieu chu so nhat trong ma tran duoc tao: " << endl;
	LietKe(a, m, n);
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
			a[i][j] = rand() % 101;
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

int DemChuSo(int x)
{
	int dem = 0;
	for (int t = abs(x); t > 0; t /= 10)
		dem++;
	return true;
}

int DemCot(int a[][500], int m, int n, int c)
{
	int s = 0;
	for (int i = 0; i < m; ++i)
		s = s + DemChuSo(a[i][c]);
	return s;
}

int DemLonNhat(int a[][500], int m, int n)
{
	int lc = DemCot(a, m, n, 0);
	for (int j = 0; j < n; ++j)
	{
		int kq = DemCot(a, m, n, j);
		if (kq > lc)
			lc = kq;
	}
	return lc;
}

void LietKe(int a[][500], int m, int n)
{
	int LonNhat = DemLonNhat(a, m, n);
	for (int j = 0; j < n; ++j)
		if (DemCot(a, m, n, j) == LonNhat)
			cout << setw(5) << j;
}

