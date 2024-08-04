#include <iostream>
#include <iomanip>
using namespace std;

void TaoMaTran(float[][500], int&, int&);
void XuatMaTran(float[][500], int, int);
void Xoay90(float[][500], int, int);

int main()
{
	float a[500][500];
	int m, n;
	TaoMaTran(a, m, n);
	cout << "Ma tran duoc tao: " << endl;
	XuatMaTran(a, m, n);

	Xoay90(a, m, n);
	cout << "\nMa tran sau xoay 90: " << endl;
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

void Xoay90(float a[][500], int m, int n)
{
	float b[500][500];
	int k = n;
	int l = m;

	for (int i = 0; i < k; i++)
		for (int j = 0; j < k; j++)
			b[i][j] = a[j][n - 1 - i];

	m = k;
	n = l;
	for (int i = 0; i < k; i++)
		for (int j = 0; j < k; j++)
			a[i][j] = b[i][j];
}

