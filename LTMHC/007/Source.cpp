#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

void TaoMaTran(string, int[][500], int&, int&);
void Xuat(int[][500], int, int);

int main()
{
	int a[500][500];
	int m, n;

	string filename = "intmatrandata01.inp";
	cout << "Ten file du lieu ma tran: " << filename << endl;
	TaoMaTran(filename, a, m, n);

	cout << "Ma tran duoc tao: " << endl;
	Xuat(a, m, n);
	return 0;
}

void TaoMaTran(string filename, int a[][500], int& m, int& n)
{
	ifstream fi(filename);
	fi >> m;
	fi >> n;

	for (int i = 0; i < m; ++i)
		for (int j = 0; j < n; ++j)
			fi >> a[i][j];
}

void Xuat(int a[][500], int m, int n)
{
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
			cout << setw(10) << a[i][j];
		cout << endl;
	}
}

