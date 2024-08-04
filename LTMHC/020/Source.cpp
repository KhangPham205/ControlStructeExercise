#include <iostream>
#include <iomanip>
using namespace std;

void TaoMaTran(int[][500], int&, int&);
void XuatMaTran(int[][500], int, int);
bool ktDang5m(int);
void LietKe(int[][500], int, int, int);

int main()
{
	int a[500][500];
	int m, n;
	TaoMaTran(a, m, n);
	cout << "Ma tran duoc tao: " << endl;
	XuatMaTran(a, m, n);

	int c;
	cout << "Nhap cot can duyet: ";
	cin >> c;

	cout << "\nCac so dang 5^m trong cot " << c << " : " << endl;
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

bool ktDang5m(int k)
{
	int t = abs(k);
	if (t < 1)
		return false;
	bool flag = true;
	while (t > 1)
	{
		if (t % 5 != 0)
			flag = false;
		t = t / 5;
	}
	return flag;
}

void LietKe(int a[][500], int m, int n, int c)
{
	for (int i = 0; i < m; ++i)
		if (ktDang5m(a[i][c]))
			cout << setw(10) << a[i][c];
}

