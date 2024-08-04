#include <iostream>
#include <iomanip>
using namespace std;

void TaoMaTran(float[][500], int&, int&);
void XuatMaTran(float[][500], int, int);
void HoanVi(float&, float&);
void DaoCot(float[][500], int, int, int);
void DaoTrucNgang(float[][500], int, int);

int main()
{
	float a[500][500];
	int m, n;
	TaoMaTran(a, m, n);
	cout << "Ma tran duoc tao: " << endl;
	XuatMaTran(a, m, n);

	DaoTrucNgang(a, m, n);
	cout << "\nMa tran sau dao theo truc ngang: " << endl;
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
			cout << setw(10) << a[i][j];
		cout << endl;
	}
}

void HoanVi(float& x, float& y)
{
	float temp = x;
	x = y;
	y = temp;
}

void DaoCot(float a[][500], int m, int n, int c)
{
	for (int i = 0, j = m - 1; i < j; i++, j--)
		HoanVi(a[i][c], a[j][c]);
}

void DaoTrucNgang(float a[][500], int m, int n)
{
	for (int j = 0; j < n; j++)
		DaoCot(a, m, n, j);
}
