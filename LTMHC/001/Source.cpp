#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

void TaoMaTran(int[][500], int&, int&);
void Xuat(int[][500], int, int);
void Xuat(string, int[][500], int, int);

int main()
{
	int a[100][500];
	int m, n;
	TaoMaTran(a, m, n);

	cout << "Ma tran duoc tao: ";
	Xuat(a, m, n);

	string filename = "data01.inp";
	cout << "Ten file xuat ma tran: " << filename << endl;
	Xuat(filename, a, m, n);
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

void Xuat(int a[][500], int m, int n)
{
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
			cout << setw(8) << a[i][j];
		cout << endl;
	}
}

void Xuat(string filename, int a[][500], int m, int n)
{
	ofstream fo(filename);
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
			fo << setw(8) << a[i][j];
		fo << endl;
	}
}
