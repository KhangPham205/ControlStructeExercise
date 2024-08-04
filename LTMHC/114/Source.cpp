#include <iostream>
#include <iomanip>
using namespace std;

void TaoMaTran(int[][500], int&, int&);
void XuatMaTran(int[][500], int, int);
bool ktHoanThien(int);
bool ktCot(int[][500], int, int, int);
void LietKe(int[][500], int, int);

int main()
{
	int a[500][500];
	int m, n;
	TaoMaTran(a, m, n);
	cout << "Ma tran duoc tao: " << endl;
	XuatMaTran(a, m, n);

	cout << "\nCac cot co so chinh phuong: " << endl;
	LietKe(a, m, n);
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
			a[i][j] = rand() % 101 - 10;
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

bool ktHoanThien(int k)
{
	int s = 0;
	for (int i = 1; i < k; ++i)
		s += i;
	return (s == k);
}

bool ktCot(int a[][500], int m, int n, int c)
{
	for (int i = 0; i < m; ++i)
		if (ktHoanThien(a[i][c]))
			return true;

	return false;
}

void LietKe(int a[][500], int m, int n)
{
	for (int j = 0; j < n; j++)
		if (ktCot(a, m, n, j) == 1)
			cout << setw(8) << j;
}
