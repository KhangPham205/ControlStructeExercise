#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

void TaoMaTran(float[][500], int&, int&);
void Xuat(float[][500], int, int);
void Xuat(string, float[][500], int, int);

int main()
{
	float a[100][500];
	int m, n;
	TaoMaTran(a, m, n);

	cout << "Ma tran duoc tao: ";
	Xuat(a, m, n);

	string filename = "data06.inp";
	cout << "Ten file xuat ma tran: " << filename << endl;
	Xuat(filename, a, m, n);
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
			a[i][j] = rand() / (RAND_MAX / 200.0) - (100.0 + 1);
}

void Xuat(float a[][500], int m, int n)
{
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
			cout << setw(10) << setprecision(3) << a[i][j];
		cout << endl;
	}
}

void Xuat(string filename, float a[][500], int m, int n)
{
	ofstream fo(filename);
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
			fo << setw(10) << setprecision(3) << a[i][j];
		fo << endl;
	}
}
