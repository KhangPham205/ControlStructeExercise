#include <iostream>
#include <iomanip>
using namespace std;

void TaoMaTran(int[][500], int&, int&);
void XuatMaTran(int[][500], int, int);
bool ktChinhPhuong(int);
int TongChinhPhuong(int[][500], int, int, int);

int main()
{
	int a[500][500];
	int m, n;
	TaoMaTran(a, m, n);
	cout << "Ma tran duoc tao: " << endl;
	XuatMaTran(a, m, n);

	int c;
	cout << "\nNhap cot can duyet: ";
	cin >> c;

	cout << "\Tong cac so chinh phuong tren cot" << c << " trong ma tran duoc tao : " << TongChinhPhuong(a, m, n, c);
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

bool ktChinhPhuong(int k)
{
	for (int i = 1; i * i <= k; ++i)
		if (i * i == k)
			return true;
	return false;
}

int TongChinhPhuong(int a[][500], int m, int n, int c)
{
	int s = 0;
	for (int i = 0; i < m; ++i)
		if (ktChinhPhuong(a[i][c]))
			s += a[i][c];

	return s;
}

