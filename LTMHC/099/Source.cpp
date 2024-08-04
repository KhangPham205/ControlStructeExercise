#include <iostream>
#include <iomanip>
using namespace std;

void TaoMaTran(int[][500], int&, int&);
void XuatMaTran(int[][500], int, int);
int ViTriLonNhat(int[], int);
int TimChuSo(int[][500], int, int);

int main()
{
	int a[500][500];
	int m, n;
	TaoMaTran(a, m, n);
	cout << "Ma tran duoc tao: " << endl;
	XuatMaTran(a, m, n);

	cout << "\nChu so xuat hien nhieu nhat trong ma tran duoc tao: " << TimChuSo(a, m, n);
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
			cout << setw(10) << a[i][j];
		cout << endl;
	}
}

int ViTriLonNhat(int a[], int n)
{
	int lc = 0;
	for (int i = 0; i < n; ++i)
		if (a[i] > lc)
			lc = i;
	return lc;
}

int TimChuSo(int a[][500], int m, int n)
{
	int ChuSo[10] = { 0,0,0,0,0,0,0,0,0,0 };
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] == 0)
				ChuSo[0]++;
			int t = abs(a[i][j]);
			while (t != 0)
			{
				int dv = t % 10;
				ChuSo[dv]++;
				t = t / 10;
			}
		}
	return ViTriLonNhat(ChuSo, 10);

}

