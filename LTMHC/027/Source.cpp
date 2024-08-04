#include <iostream>
#include <iomanip>
using namespace std;

void TaoMaTran(int[][500], int&, int&);
void XuatMaTran(int[][500], int, int);
bool ktNguyenTo(int);
int TongNguyenTo(int[][500], int, int);

int main()
{
	int a[500][500];
	int m, n;
	TaoMaTran(a, m, n);
	cout << "Ma tran duoc tao: " << endl;
	XuatMaTran(a, m, n);

	cout << "\nTong cac so nguyen to trong ma tran duoc tao: " << TongNguyenTo(a, m, n);
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
			a[i][j] = rand() % (100 + 1);
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

bool ktNguyenTo(int k)
{
	if (k < 2)
		return false;
	int dem = 0;
	for (int i = 1; i <= k; ++i)
		if (k % i == 0)
			dem++;
	return (dem == 2);
}

int TongNguyenTo(int a[][500], int m, int n)
{
	int s = 0;
	for (int i = 0; i < m; ++i)
		for (int j = 0; j < n; ++j)
			if (ktNguyenTo(a[i][j]))
				s += a[i][j];

	return s;
}
