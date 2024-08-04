#include <iostream>
#include <iomanip>
using namespace std;

void TaoMaTran(int[][500], int&, int&);
void XuatMaTran(int[][500], int, int);
void DichCot(int[][500], int, int, int, int);
void ThemCot(int[][500], int, int&, int);

int main()
{
	int a[500][500];
	int m, n;
	TaoMaTran(a, m, n);
	cout << "Ma tran duoc tao: " << endl;
	XuatMaTran(a, m, n);

	int c;
	cout << "Nhap cot can chen: ";
	cin >> c;

	ThemCot(a, m, n, c);
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

void DichCot(int a[][500], int m, int n, int c1, int c2)
{
	for (int i = 0; i < m; ++i)
		a[i][c1] = a[i][c2];
}

void ThemCot(int a[][500], int m, int& n, int c)
{
	for (int j = n; j > c; --j)
		DichCot(a, m, n, j, j - 1);
	for (int i = 0; i < m; ++i)
		a[i][c] = 0;
	n++;
}

