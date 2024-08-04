#include <iostream>
#include <iomanip>
using namespace std;

void TaoMaTran(float[][100], int&, int&);
void XuatMaTran(float[][100], int, int);
void HoanViCot(float[][100], int, int, int, int);

int main()
{
	float a[100][100];
	int m, n;
	TaoMaTran(a, m, n);
	cout << "Ma tran duoc tao: " << endl;
	XuatMaTran(a, m, n);

	int c1, c2;
	cout << "\nNhap cot thu nhat: ";
	cin >> c1;
	cout << "\nNhap cot thu hai: ";
	cin >> c2;

	HoanViCot(a, m, n, c1, c2);
	cout << "\nMa tran sau hoan vi: " << endl;
	XuatMaTran(a, m, n);
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

void HoanViCot(float a[][100], int m, int n, int c1, int c2)
{
	for (int i = 0; i < m; ++i)
		swap(a[i][c1], a[i][c2]);
}

