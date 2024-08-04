#include <iostream>
#include <iomanip>
using namespace std;

void TaoMaTran(float[][100], int&, int&);
void XuatMaTran(float[][100], int, int);
void XayDung(float[][100], int, int, float[][100], int&, int&);

int main()
{
	float a[100][100];
	int m, n;
	TaoMaTran(a, m, n);
	cout << "Ma tran duoc tao: " << endl;
	XuatMaTran(a, m, n);

	float b[100][100];
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
			b[i][j] = abs(a[i][j]);
}
