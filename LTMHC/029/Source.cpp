#include <iostream>
#include <iomanip>
using namespace std;

void TaoMaTran(int[][500], int&, int&);
void XuatMaTran(int[][500], int, int);
bool ktDang3m(int);
int Tong3m(int[][500], int, int);

int main()
{
	int a[500][500];
	int m, n;
	TaoMaTran(a, m, n);
	cout << "Ma tran duoc tao: " << endl;
	XuatMaTran(a, m, n);

	cout << "\nTong cac so dang 3^m trong ma tran: " << Tong3m(a, m, n);
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

bool ktDang3m(int k)
{
	int t = abs(k);
	if (t < 1)
		return false;
	bool flag = true;
	while (t > 1)
	{
		if (t % 3 != 0)
			flag = false;
		t = t / 3;
	}
	return flag;
}

int Tong3m(int a[][500], int m, int n)
{
	int s = 0;
	for (int i = 0; i < m; ++i)
		for (int j = 0; j < n; ++j)
			if (ktDang3m(a[i][j]))
				s = s + a[i][j];

	return s;
}

