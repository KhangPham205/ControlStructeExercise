#include <iostream>
#include <iomanip>
using namespace std;

void TaoMaTran(float[][500], int&, int&);
void XuatMaTran(float[][500], int, int);
void LayNguyen(float[][500], int, int);

int main()
{
	float a[500][500];
	int m, n;
	TaoMaTran(a, m, n);
	cout << "Ma tran duoc tao: " << endl;
	XuatMaTran(a, m, n);

	LayNguyen(a, m, n);
	cout << "\nMa tran sau bien doi: " << endl;
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

void LayNguyen(float a[][500], int m, int n)
{
	for (int i = 0; i < m; ++i)
		for (int j = 0; j < n; ++j)
			if (a[i][j] < 0)
				a[i][j] = int(a[i][j] - 0.5);
			else
				a[i][j] = int(a[i][j] + 0.5);
}

