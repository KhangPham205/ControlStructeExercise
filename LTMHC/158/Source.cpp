#include <iostream>
#include <iomanip>
using namespace std;

void TaoMaTran(float[][500], int&, int&);
void XuatMaTran(float[][500], int, int);
void DichPhaiDong(float[][500], int, int, int);
void DichPhai(float[][500], int, int);

int main()
{
	float a[500][500];
	int m, n;
	TaoMaTran(a, m, n);
	cout << "Ma tran duoc tao: " << endl;
	XuatMaTran(a, m, n);

	DichPhai(a, m, n);
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

void DichPhaiDong(float a[][500], int m, int n, int d)
{
	float temp = a[d][0];
	for (int j = 0; j < n - 1; ++j)
		a[d][j] = a[d][j - 1];
	a[d][n - 1] = temp;
}

void DichPhai(float a[][500], int m, int n)
{
	for (int j = 0; j < n; ++j)
		DichPhaiDong(a, m, n, j);
}

