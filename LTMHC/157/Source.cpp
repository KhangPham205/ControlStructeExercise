#include <iostream>
#include <iomanip>
using namespace std;

void TaoMaTran(float[][500], int&, int&);
void XuatMaTran(float[][500], int, int);
void DichTraiDong(float[][500], int, int, int);
void DichTrai(float[][500], int, int);

int main()
{
	float a[500][500];
	int m, n;
	TaoMaTran(a, m, n);
	cout << "Ma tran duoc tao: " << endl;
	XuatMaTran(a, m, n);

	DichTrai(a, m, n);
	cout << "\nMa tran sau dich xuong: " << endl;
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

void DichTraiDong(float a[][500], int m, int n, int d)
{
	float temp = a[d][n - 1];
	for (int j = n - 1; j > 0; --j)
		a[d][j] = a[d][j - 1];
	a[d][0] = temp;
}

void DichTrai(float a[][500], int m, int n)
{
	for (int j = 0; j < n; ++j)
		DichTraiDong(a, m, n, j);
}

