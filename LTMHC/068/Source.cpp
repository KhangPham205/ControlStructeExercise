#include <iostream>
#include <iomanip>
using namespace std;

void TaoMaTran(int[][500], int&, int&);
void XuatMaTran(int[][500], int, int);
int DemChuSo(int);
int DemChuSo(int[][500], int, int, int);

int main()
{
	int a[500][500];
	int m, n;
	TaoMaTran(a, m, n);
	cout << "Ma tran duoc tao: " << endl;
	XuatMaTran(a, m, n);

	int c;
	cout << "Nhap cot: ";
	cin >> c;

	cout << "\nSo luong chu so trong ma tran duoc tao: " << DemChuSo(a, m, n, c);
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
			a[i][j] = rand() % (1000 + 1);
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

int DemChuSo(int k)
{
	int dem = 0;
	for (int t = abs(k); t > 0; t /= 10)
		dem++;
	return dem;
}

int DemChuSo(int a[][500], int m, int n, int c)
{
	int dem = 0;
	for (int i = 0; i < m; ++i)
		for (int j = 0; j < n; j++)
			dem += DemChuSo(a[i][j]);
		
	return dem;
}
