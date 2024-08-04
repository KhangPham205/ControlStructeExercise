#include <iostream>
#include <iomanip>
using namespace std;

void TaoMaTran(float[][500], int&, int&);
void XuatMaTran(float[][500], int, int);
void HoanViDong(float[][500], int, int, int, int);
float TongDong(float[][500], int, int, int);
void SapXep(float[][500], int, int);

int main()
{
	float a[500][500];
	int m, n;
	TaoMaTran(a, m, n);
	cout << "Ma tran duoc tao: " << endl;
	XuatMaTran(a, m, n);

	int d1, d2;
	cout << "\nNhap dong thu nhat: ";
	cin >> d1;
	cout << "\nNhap dong thu hai: ";
	cin >> d2;

	HoanViDong(a, m, n, d1, d2);
	cout << "\nMa tran sau hoan vi: " << endl;
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

void HoanViDong(float a[][500], int m, int n, int d1, int d2)
{
	for (int j = 0; j < n; ++j)
		swap(a[d1][j], a[d2][j]);
}

float TongDong(float a[][500], int m, int n, int d)
{
	float s = 0;
	for (int j = 0; j < n; j++)
		s += a[d][j];

	return s;
}

void SapXep(float a[][500], int m, int n)
{
	for (int i = 0; i < m - 1; i++)
		for (int j = i + 1; j < m; j++)
			if (TongDong(a, m, n, i) > TongDong(a, m, n, j))
				HoanViDong(a, m, n, i, j);
}

