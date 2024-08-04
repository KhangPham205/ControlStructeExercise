#include <iostream>
#include <iomanip>
using namespace std;

void TaoMaTran(int[][500], int&, int&);
void XuatMaTran(int[][500], int, int);
bool ktHoanThien(int);
int DemDong(int[][500], int, int, int);
int DemLonNhat(int[][500], int, int);
void LietKe(int[][500], int, int);

int main()
{
	int a[500][500];
	int m, n;
	TaoMaTran(a, m, n);
	cout << "Ma tran duoc tao: " << endl;
	XuatMaTran(a, m, n);

	cout << "\nCac dong co nhieu so hoan thien nhat trong ma tran duoc tao: " << endl;
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
			cout << setw(10) << setprecision(5) << a[i][j];
		cout << endl;
	}
}

bool ktHoanThien(int x)
{
	if (x < 1)
		return false;

	int s = 0;
	for (int i = 1; i < x; ++i)
		s = s + i;
	return (s == x);
}

int DemDong(int a[][500], int m, int n, int d)
{
	int dem = 0;
	for (int j = 0; j < n; ++j)
		if (ktHoanThien(a[d][j]))
			dem++;
	return dem;
}

int DemLonNhat(int a[][500], int m, int n)
{
	int lc = DemDong(a, m, n, 0);
	for (int j = 0; j < n; ++j)
	{
		int kq = DemDong(a, m, n, j);
		if (kq > lc)
			lc = kq;
	}
	return lc;
}

void LietKe(int a[][500], int m, int n)
{
	int LonNhat = DemLonNhat(a, m, n);
	for (int i = 0; i < m; ++i)
		if (DemDong(a, m, n, i) == LonNhat)
			cout << setw(5) << i;
}

