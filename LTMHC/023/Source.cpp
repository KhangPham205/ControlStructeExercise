#include <iostream>
#include <iomanip>
using namespace std;

void TaoMaTran(float[][500], int&, int&);
void XuatMaTran(float[][500], int, int);
bool ktCucTieu(float[][500], int, int, int, int);
void LietKe(float[][500], int, int);

int main()
{
	float a[500][500];
	int m, n;
	TaoMaTran(a, m, n);
	cout << "Ma tran duoc tao: " << endl;
	XuatMaTran(a, m, n);

	cout << "\nCac so cuc tri trong ma tran duoc tao: " << endl;
	LietKe(a, m, n);
	return 0;
}

void TaoMaTran(float a[][500], int& m, int& n)
{
	cout << "Nhap so dong: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;

	for (int i = 0; i < m; ++i)
		for (int j = 0; j < n; ++j)
			a[i][j] = rand() / (RAND_MAX / 200.0) - (100.0 + 1.0);
}

void XuatMaTran(float a[][500], int m, int n)
{
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
			cout << setw(10) << setprecision(5) << a[i][j];
		cout << endl;
	}
}

bool ktCucTieu(float a[][500], int i, int j, int m, int n)
{
	for (int di = -1; di <= 1; ++di)
		for (int dj = -1; dj <= 1; ++dj)
		{
			int row = i + di;
			int col = j + dj;

			if (row < 0 || row >= n || col < 0 || col >= m)
				continue;

			if (a[row][col] < a[i][j])
				return false;
		}

	return true;
}

void LietKe(float a[][500], int m, int n)
{
	for (int i = 0; i < m; ++i)
		for (int j = 0; j < n; ++j)
			if (ktCucTieu(a, i, j, m, n))
				cout << setw(10) << setprecision(5) << a[i][j];
}

