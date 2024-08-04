#include <iostream>
#include <iomanip>
using namespace std;

void TaoMaTran(int[][500], int&, int&);
void XuatMaTran(int[][500], int, int);
bool ktNguyenTo(int);
int NguyenToDau(int[][500], int, int);
int NguyenToLonNhat(int[][500], int, int);

int main()
{
	int a[500][500];
	int m, n;
	TaoMaTran(a, m, n);
	cout << "Ma tran duoc tao: " << endl;
	XuatMaTran(a, m, n);

	cout << "\nGia tri nguyen to lon nhat trong ma tran duoc tao: " << NguyenToLonNhat(a, m, n);
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

bool ktNguyenTo(int k)
{
	int dem = 0;
	for (int i = 1; i <= k; ++i)
		if (k % i == 0)
			dem++;
	return (dem == 2);
}

int NguyenToDau(int a[][500], int m, int n)
{
	for (int i = 0; i < m; ++i)
		for (int j = 0; j < n; ++j)
			if (ktNguyenTo(a[i][j]))
				return a[i][j];

	return -1;
}

int NguyenToLonNhat(int a[][500], int m, int n)
{
	int lc = NguyenToDau(a, m, n);
	for (int i = 0; i < m; ++i)
		for (int j = 0; j < n; ++j)
			if (ktNguyenTo(a[i][j]) && a[i][j] > lc)
				lc = a[i][j];

	return lc;
}

