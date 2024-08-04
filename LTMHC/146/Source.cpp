#include <iostream>
#include <iomanip>
using namespace std;

void TaoMaTran(float[][500], int&, int&);
void XuatMaTran(float[][500], int, int);
bool ktCot(float[][500], int, int, int);
void DichCot(float[][500], int, int, int, int);
void XoaCot(float[][500], int, int&, int);

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

	XoaCot(a, m, n, d);
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

bool ktCot(float a[][500], int m, int n, int c)
{
	for (int i = 0; i < m; ++i)
		if (a[i][c] > 0)
			return false;
	return true;
}

void DichCot(float a[][500], int m, int n, int c1, int c2)
{
	for (int i = 0; i < m; ++i)
		a[i][c1] = a[i][c2];
}

void XoaCot(float a[][500], int m, int& n, int c)
{
	for (int j = c; j < n - 1; ++j)
		if (ktCot(a, m, n, j))
		{
			DichCot(a, m, n, j, j + 1);
			n--;
		}
}

