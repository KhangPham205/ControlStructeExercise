#include <iostream>
#include <iomanip>
using namespace std;\

void TaoMaTran(int[][500], int&, int&);
void XuatMaTran(int[][500], int, int);
bool ktHoanThien(int);
void LietKe(int[][500], int, int, int);

int main()
{
	int a[500][500];
	int m, n;
	TaoMaTran(a, m, n);
	cout << "Ma tran duoc tao: " << endl;
	XuatMaTran(a, m, n);

	int d;
	cout << "\nNhap dong can duyet: ";
	cin >> d;
	cout << "\nCac so hoan thien tren dong " << d << " trong ma tran duoc tao : " << endl;
	LietKe(a, m, n, d);
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

bool ktHoanThien(int k)
{
	if (k < 3)
		return false;
	int s = 0;
	for (int i = 1; i < k; ++i)
		s = s + i;
	return (s == k);
}

void LietKe(int a[][500], int m, int n, int d)
{
	for (int j = 0; j < n; ++j)
		if (ktHoanThien(a[d][j]))
			cout << setw(10) << a[d][j];
}

