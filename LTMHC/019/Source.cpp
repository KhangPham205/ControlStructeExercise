#include <iostream>
#include <iomanip>
using namespace std;

void TaoMaTran(int[][500], int&, int&);
void XuatMaTran(int[][500], int, int);
bool ktDoiXung(int);
void LietKe(int[][500], int, int, int);

int main()
{
	int a[500][500];
	int m, n;
	TaoMaTran(a, m, n);
	cout << "Ma tran duoc tao: " << endl;
	XuatMaTran(a, m, n);

	int c;
	cout << "\nNhap cot can duyet: ";
	cin >> c;
	cout << "\nCac so doi xung tren cot " << c << " trong ma tran duoc tao : " << endl;
	LietKe(a, m, n, c);
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
	int dn = 0;
	for (int t = abs(k); t > 0; t /= 10)
		dn = dn * 10 + t % 10;
	return (dn == abs(k));
}

void LietKe(int a[][500], int m, int n, int c)
{
	for (int i = 0; i < n; ++i)
		if (ktDoiXung(a[i][c]))
			cout << setw(10) << a[i][c];
}

