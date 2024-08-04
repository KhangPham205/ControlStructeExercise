#include <iostream>
#include <iomanip>
using namespace std;

void TaoMaTran(float[][500], int&, int&);
void XuatMaTran(float[][500], int, int);
float TongDong(float[][500], int, int, int);
float TongLonNhat(float[][500], int, int);

int main()
{
	float a[500][500];
	int m, n;
	TaoMaTran(a, m, n);
	cout << "Ma tran duoc tao: " << endl;
	XuatMaTran(a, m, n);

	cout << "\nTong dong lon nhat trong ma tran duoc tao: " << TongLonNhat(a, m, n);
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
			a[i][j] = rand() / (RAND_MAX / 200.0) - 101.0;
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

float TongDong(float a[][500], int m, int n, int d)
{
	int s = 0;
	for (int j = 0; j < n; ++j)
		s = s + a[d][j];
	return s;
}

float TongLonNhat(float a[][500], int m, int n)
{
	float lc = TongDong(a, m, n, 0);
	for (int i = 0; i < m; ++i)
	{
		float kq = TongDong(a, m, n, i);
		if (kq > lc)
			lc = kq;
	}
	return lc;
}

