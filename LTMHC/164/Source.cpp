#include <iostream>
#include <iomanip>
using namespace std;

void TaoMaTran(float[][500], int&, int&);
void XuatMaTran(float[][500], int, int);
void HoanVi(float&, float&);
void DaoDong(float[][500], int, int, int);
void DaoTrucDoc(float[][500], int, int);

int main()
{
	float a[500][500];
	int m, n;
	TaoMaTran(a, m, n);
	cout << "Ma tran duoc tao: " << endl;
	XuatMaTran(a, m, n);

	DaoTrucDoc(a, m, n);
	cout << "\nMa tran sau dao theo truc doc: " << endl;
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

void DaoDong(float a[][500], int m, int n, int d)
{
	for (int i = 0, j = n - 1; i < j; i++, j--)
		HoanVi(a[d][i], a[d][j]);
}

void DaoTrucDoc(float a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
		DaoDong(a, m, n, i);
}
