#include <iostream>
#include <iomanip>
using namespace std;

void TaoMaTran(int[][500], int&, int&);
void XuatMaTran(int[][500], int, int);
int TichLe(int[][500], int, int);

int main()
{
	int a[500][500];
	int m, n;
	TaoMaTran(a, m, n);
	cout << "Ma tran duoc tao: " << endl;
	XuatMaTran(a, m, n);

	cout << "\Tich cac so le tren dong so chan: " << TichLe(a, m, n);
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
			a[i][j] = rand() % (100 + 1) - 50;
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

int TichLe(int a[][500], int m, int n)
{
	int s = 1;
	bool flag = false;
	for (int i = 0; i < m; i += 2)
		for (int j = 0; j < n; ++j)
			if (a[i][j] % 2 != 0)
			{
				flag = true;
				s = s * a[i][j];
			}

	if (flag == false)
	{
		cout << "\nKhong tim duoc ";
		return 0;
	}
	return s;
}

