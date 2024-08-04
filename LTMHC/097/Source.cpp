#include <iostream>
#include <iomanip>
using namespace std;

void TaoMaTran(float[][500], int&, int&);
void XuatMaTran(float[][500], int, int);
float LonNhatDong(float[][500], int, int, int);
float NhoNhatDong(float[][500], int, int, int);
float LonNhatCot(float[][500], int, int, int);
float NhoNhatCot(float[][500], int, int, int);
bool ktYenNgua(float[][500], int, int, int, int);
int DemYenNgua(float[][500], int, int);


int main()
{
	float a[500][500];
	int m, n;
	TaoMaTran(a, m, n);
	cout << "Ma tran duoc tao: " << endl;
	XuatMaTran(a, m, n);

	cout << "\nSo luong yen ngua trong ma tran duoc tao: " << DemYenNgua(a, m, n);
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
			a[i][j] = rand() / (RAND_MAX / 200.0) - 101.0;
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

float LonNhatDong(float a[][500], int m, int n, int d)
{
	float lc = a[d][0];
	for (int j = 0; j < n; ++j)
		if (a[d][j] > lc)
			lc = a[d][j];
	return lc;
}

float NhoNhatDong(float a[][500], int m, int n, int d)
{
	float lc = a[d][0];
	for (int j = 0; j < n; ++j)
		if (a[d][j] < lc)
			lc = a[d][j];
	return lc;
}

float LonNhatCot(float a[][500], int m, int n, int c)
{
	float lc = a[0][c];
	for (int i = 0; i < m; ++i)
		if (a[i][c] > lc)
			lc = a[i][c];
	return lc;
}

float NhoNhatCot(float a[][500], int m, int n, int c)
{
	float lc = a[0][c];
	for (int i = 0; i < m; ++i)
		if (a[i][c] < lc)
			lc = a[i][c];
	return lc;
}

bool ktYenNgua(float a[][500], int m, int n, int i, int j)
{
	if (a[i][j] == LonNhatDong(a, m, n, i) && a[i][j] == NhoNhatCot(a, m, n, j))
		return true;
	return false;
}

int DemYenNgua(float a[][500], int m, int n)
{
	int dem = 0;
	for (int i = 0; i < m; ++i)
		for (int j = 0; j < n; ++j)
			if (ktYenNgua(a, m, n, i, j))
				dem++;
	return dem;
}
