#include <iostream>
#include <iomanip>
using namespace std;

void TaoMaTran(float[][100], int&, int&);
void XuatMaTran(float[][100], int, int);
float LonNhatDong(float[][100], int, int, int);
float LonNhatCot(float[][100], int, int, int);
void XayDung(float[][100], int, int, float[][100], int&, int&);

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

float LonNhatDong(float a[][100], int m, int n, int d)
{
	float lc = a[d][0];
	for (int j = 0; j < n; ++j)
		if (a[d][j] > lc)
			lc = a[d][j];

	return lc;
}

float LonNhatCot(float a[][100], int m, int n, int c)
{
	float lc = a[0][c];
	for (int i = 0; i < m; ++i)
		if (a[i][c] > lc)
			lc = a[i][c];

	return lc;
}

void XayDung(float a[][100], int m, int n, float b[][100], int& k, int& l)
{
	k = m;
	l = n;
	for (int i = 0; i < k; ++i)
		for (int j = 0; j < l; ++j)
			b[i][j] = max(LonNhatDong(a, m, n, i), LonNhatCot(a, m, n, j));
}
