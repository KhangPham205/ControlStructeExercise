#include <iostream>
#include <iomanip>
using namespace std;

void TaoMaTran(float[][100], int&, int&);
void XuatMaTran(float[][100], int, int);
void XayDung(float[][100], int, int, float[][100], int&, int&);
int DemLanCan(float[][100], int, int, int, int);

int main()
{
	float a[100][100];
	int m, n;
	TaoMaTran(a, m, n);
	cout << "Ma tran duoc tao: " << endl;
	XuatMaTran(a, m, n);

	float b[10][100];
	int k;
	int l;
	XayDung(a, m, n, b, k, l);
	cout << "\nMa tran duoc xay dung: " << endl;
	XuatMaTran(b, k, l);
	return 0;
}

void TaoMaTran(float a[][100], int& m, int& n)
{
	cout << "Nhap so dong: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;

	for (int i = 0; i < m; ++i)
		for (int j = 0; j < n; ++j)
			a[i][j] = rand() / (RAND_MAX / 200.0) - 100.0;
}

void XuatMaTran(float a[][100], int m, int n)
{
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
			cout << setw(10) << setprecision(5) << a[i][j];
		cout << endl;
	}
}

void XayDung(float a[][100], int m, int n, float b[][100], int& k, int& l)
{
	k = m;
	l = n;
	for (int i = 0; i < k; ++i)
		for (int j = 0; j < l; ++j)
			b[i][j] = DemLanCan(a, m, n, i, j);
}

int DemLanCan(float a[][100], int m, int n, int i, int j)
{
	int dem = 0;
	for (int di = -1; di<=1;++di)
		for (int dj = -1; dj <= 1; ++dj)
		{
			if (di == 0 && dj == 0)
				continue;
			int row = i + di;
			int col = j + dj;

			if (row < 0 || row > m - 1 || col < 0 || col > n - 1)
				continue;

			if (a[row][col] > 0)
				dem++;
		}

	return dem;
}
