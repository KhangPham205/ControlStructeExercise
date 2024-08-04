#include <iostream>
#include <iomanip>
using namespace std;

void TaoMaTran(int[][500], int&, int&);
void XuatMaTran(int[][500], int, int);
int TanSuat(int[][500], int, int, float);
float TimGiaTri(int[][500], int, int);

int main()
{
	int a[500][500];
	int m, n;
	TaoMaTran(a, m, n);
	cout << "Ma tran duoc tao: " << endl;
	XuatMaTran(a, m, n);

	cout << "\nGia tri xuat hien nhieu nhat trong ma tran duoc tao: " << TimGiaTri(a, m, n);
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
			a[i][j] = rand() % 101;
}

void XuatMaTran(int a[][500], int m, int n)
{
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
			cout << setw(10) << setprecision(5) << a[i][j];
		cout << endl;
	}
}

int TanSuat(int a[][500], int m, int n, float x)
{
	int dem = 0;
	for (int i = 0; i < m; ++i)
		for (int j = 0; j < n; ++j)
			if (a[i][j] == x)
				dem++;
	return dem;
}

float TimGiaTri(int a[][500], int m, int n)
{
	int lc = a[0][0];
	for (int i = 0; i < m; ++i)
		for (int j = 0; j < n; ++j)
			if (TanSuat(a, m, n, lc) < TanSuat(a, m, n, a[i][j]))
				lc = a[i][j];
	return lc;
}

