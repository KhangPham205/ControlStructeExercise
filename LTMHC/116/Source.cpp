#include <iostream>
#include <iomanip>
using namespace std;

void TaoMaTran(float[][500], int&, int&);
void XuatMaTran(float[][500], int, int);
bool ktCot(float[][500], int, int, int);
void LietKe(float[][500], int, int);

int main()
{
	float a[500][500];
	int m, n;
	TaoMaTran(a, m, n);
	cout << "Ma tran duoc tao: " << endl;
	XuatMaTran(a, m, n);

	cout << "\nCac cot tang dan: " << endl;
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
			a[i][j] = rand() / (RAND_MAX / 200.0) - 100.0;
}

void XuatMaTran(float a[][500], int m, int n)
{
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
			cout << setw(10) << a[i][j];
		cout << endl;
	}
}

bool ktCot(float a[][500], int m, int n, int c)
{
	for (int i = 0; i < m - 1; ++i)
		if (a[i][c] > a[i + 1][c])
			return false;

	return true;
}

void LietKe(float a[][500], int m, int n)
{
	for (int j = 0; j <n; j++)
		if (ktCot(a, m, n, j) == 1)
			cout << setw(8) << j;
}

