#include <iostream>
#include <iomanip>
using namespace std;

void TaoMaTran(float[][500], int&, int&);
void XuatMaTran(float[][500], int, int);
float Tong(float[][500], int, int, float, float);

int main()
{
	float a[500][500];
	int m, n;
	TaoMaTran(a, m, n);
	cout << "Ma tran duoc tao: " << endl;
	XuatMaTran(a, m, n);

	float x;
	cout << "\nNhap x: ";
	cin >> x;

	float y;
	cout << "\nNhap y: ";
	cin >> y;

	cout << "\nTong cac so trong doan [" << x << "," << y << "] thuoc ma tran duoc tao : " << Tong(a, m, n, x, y);
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
			a[i][j] = rand() / (RAND_MAX / 200.0) - (100.0 + 1.0);
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

float Tong(float a[][500], int m, int n, float x, float y)
{
	float s = 0;
	for (int i = 0; i < m; ++i)
		for (int j = 0; j < n; ++j)
			if (a[i][j] >= x && a[i][j] <= y)
				s = s + a[i][j];

	return s;
}

