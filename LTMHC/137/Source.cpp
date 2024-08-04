#include <iostream>
#include <iomanip>
using namespace std;

void TaoMaTran(int[][500], int&, int&);
void XuatMaTran(int[][500], int, int);
void BienTang(int[][500], int, int);

int main()
{
	int a[500][500];
	int m, n;
	TaoMaTran(a, m, n);
	cout << "Ma tran duoc tao: " << endl;
	XuatMaTran(a, m, n);

	BienTang(a, m, n);
	cout << "\nMa tran sau sap xep: " << endl;
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
			cout << setw(10) << setprecision(5) << a[i][j];
		cout << endl;
	}
}

void BienTang(int a[][500], int m, int n)
{
	int b[500];
	int k = 0;
	int i, j;

	for (int j = 0; j < n - 1; ++j)
		b[k++] = a[0][j];
	for (int i = 0; i < m - 1; ++i)
		b[k++] = a[i][n - 1];
	for (int j = n - 1; j > 0; --j)
		b[k++] = a[m - 1][j];
	for (int i = m - 1; i > 0; --i)
		b[k++] = a[i][0];

	for (i = 0; i < k - 1; i++)
		for (j = i + 1; j < k; j++)
			if (b[i] > b[j])
				swap(b[i], b[j]);

	k = 0;
	for (int j = 0; j < n - 1; ++j)
		a[0][j] = b[k++];
	for (int i = 0; i < m - 1; ++i)
		a[i][n - 1] = b[k++];
	for (int j = n - 1; j > 0; --j)
		a[m - 1][j] = b[k++];
	for (int i = m - 1; i > 0; --i)
		a[i][0] = b[k++];
}

