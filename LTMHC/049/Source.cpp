#include <iostream>
#include <iomanip>
using namespace std;

void TaoMaTran(int[][500], int&, int&);
void XuatMaTran(int[][500], int, int);
bool ktDang5m(int);
int TongBien(int[][500], int, int);

int main()
{
	int a[500][500];
	int m, n;
	TaoMaTran(a, m, n);
	cout << "Ma tran duoc tao: " << endl;
	XuatMaTran(a, m, n);

	cout << "\nTong la: " << TongBien(a, m, n);
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
			a[i][j] = rand() / (RAND_MAX / 200.0) - 100.0;
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

bool ktDang5m(int k)
{
	if (k < 1)
		return false;
	for (int i = k; i > 1; i /= 5)
		if (i % 5 != k)
			return false;
	return true;
}

int TongBien(int a[][500], int m, int n)
{
	int s = 0;
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j)
			if ((i == 0 || i == (m - 1) || j == 0 || j == (n - 1)) && ktDang5m(a[i][j]))
				s = s + a[i][j];

	return s;
}


