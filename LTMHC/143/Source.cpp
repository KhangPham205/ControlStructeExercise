#include <iostream>
#include <iomanip>
using namespace std;

void TaoMaTran(int[][500], int&, int&);
void XuatMaTran(int[][500], int, int);
bool ktNguyenTo(int);
bool ktChinhPhuong(int);
bool ktDong(int[][500], int, int, int);
void DichDong(int[][500], int, int, int, int);
void XoaDong(int[][500], int&, int, int);

int main()
{
	int a[500][500];
	int m, n;
	TaoMaTran(a, m, n);
	cout << "Ma tran duoc tao: " << endl;
	XuatMaTran(a, m, n);

	int d;
	cout << "Nhap dong can xoa: ";
	cin >> d;

	XoaDong(a, m, n, d);
	cout << "\nMa tran sau xoa: " << endl;
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
			cout << setw(10) << a[i][j];
		cout << endl;
	}
}

bool ktNguyenTo(int k)
{
	if (k < 2)
		return false;
	for (int i = 2; i * i <= k; ++i)
		if (k % i == 0)
			return true;
	return false;
}

bool ktChinhPhuong(int k)
{
	for (int i = 1; i * i <= k; ++i)
		if (i * i == k)
			return true;
	return false;
}

bool ktDong(int a[][500], int m, int n, int d)
{
	bool flag1 = false;
	bool flag2 = false;
	for (int j = 0; j < n; ++j)
		if (ktNguyenTo(a[d][j]))
			flag1 = true;
		else if (ktChinhPhuong(a[d][j]))
			flag2 = true;
	return (flag1 && flag2);
}

void DichDong(int a[][500], int m, int n, int d1, int d2)
{
	for (int j = 0; j < n; ++j)
		a[d1][j] = a[d2][j];
}

void XoaDong(int a[][500], int& m, int n, int d)
{
	for (int i = d; i < m - 1; ++i)
		if (ktDong(a, m, n, i))
		{
			DichDong(a, m, n, i, i + 1);
			m--;
		}
}

