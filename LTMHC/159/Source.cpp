#include <iostream>
#include <iomanip>
using namespace std;

void TaoMaTran(float[][500], int&, int&);
void XuatMaTran(float[][500], int, int);
void DichPhaiDong(float[], int);
void DichPhaiBien(float[][500], int, int);

int main()
{
	float a[500][500];
	int m, n;
	TaoMaTran(a, m, n);
	cout << "Ma tran duoc tao: " << endl;
	XuatMaTran(a, m, n);

	DichPhaiBien(a, m, n);
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

void DichPhaiDong(float a[], int n)
{
	float temp = a[n - 1];
	for (int i = n - 1; i > 0; --i)
		a[i] = a[i - 1];
	a[0] = temp;
}

void DichPhaiBien(float a[][500], int m, int n)
{
	float b[500];
	int k;
	int i, j;
	k = 0;
	for (j = 0; j < n - 1; ++j)
		b[k++] = a[0][j];
	for (i = 0; i < m - 1; ++i)
		b[k++] = a[i][n - 1];
	for (j = n - 1; j > 0; --j)
		b[k++] = a[m - 1][j];
	for (i = m - 1; i > 0; --i)
		b[k++] = a[i][0];

	DichPhaiDong(b, k);
	k = 0;
	for (j = 0; j < n - 1; ++j)
		a[0][j] = b[k++];
	for (i = 0; i < m - 1; ++i)
		a[i][n - 1] = b[k++];
	for (j = n - 1; j > 0; --j)
		a[m - 1][j] = b[k++];
	for (i = m - 1; i > 0; --i)
		a[i][0] = b[k++];
}

