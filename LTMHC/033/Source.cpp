#include <iostream>
#include <iomanip>
using namespace std;

void TaoMaTran(int[][500], int&, int&);
void XuatMaTran(int[][500], int, int);
int TongDong(int[][500], int, int, int);

int main()
{
	int a[500][500];
	int m, n;
	TaoMaTran(a, m, n);
	cout << "Ma tran duoc tao: " << endl;
	XuatMaTran(a, m, n);

	int d;
	cout << "Nhap dong can duyet: ";
	cin >> d;

	cout << "\nTong cac so chan tren dong " << d << " : " << TongDong(a, m, n, d);
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
			a[i][j] = rand() % (100 + 1);
}

void XuatMaTran(int a[][500], int m, int n)
{
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
			cout << setw(8) << a[i][j];
		cout << endl;
	}
}

int TongDong(int a[][500], int m, int n, int d)
{
	int s = 0;
	for (int j = 0; j < n; ++j)
		if (a[d][j] % 2 == 0)
			s = s + a[d][j];

	return s;
}

