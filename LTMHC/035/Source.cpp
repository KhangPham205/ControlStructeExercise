#include <iostream>
#include <iomanip>
using namespace std;

void TaoMaTran(int[][500], int&, int&);
void XuatMaTran(int[][500], int, int);
bool ktDoiXung(int);
int TongDong(int[][500], int, int, int);

int main()
{
	int a[500][500];
	int m, n;
	TaoMaTran(a, m, n);
	cout << "Ma tran duoc tao: " << endl;
	XuatMaTran(a, m, n);

	int d;
	cout << "\nNhap dong: ";
	cin >> d;

	cout << "\nTong cac so nguyen to tren dong " << d << " thuoc ma tran duoc tao : " << TongDong(a, m, n, d);
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

bool ktDoiXung(int k)
{
	if (k < 0)
		return false;
	int dn = 0;
	for (int t = k; t > 0; t /= 10)
		dn = dn * 10 + t % 10;
	return (dn == k);
}

int TongDong(int a[][500], int m, int n, int d)
{
	int s = 0;
	for (int j = 0; j < n; ++j)
		if (ktDoiXung(a[d][j]))
			s += a[d][j];

	return s;
}

