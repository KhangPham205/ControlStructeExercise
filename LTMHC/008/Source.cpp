#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

void TaoMaTran(string, float[][500], int&, int&);
void Xuat(float[][500], int, int);

int main()
{
	float a[500][500];
	int m, n;

	string filename = "floatdata06.inp";
	cout << "Ten file du lieu ma tran: " << filename << endl;
	TaoMaTran(filename, a, m, n);

	cout << "Ma tran duoc tao: " << endl;
	Xuat(a, m, n);
	return 0;
}

void TaoMaTran(string filename, float a[][500], int& m, int& n)
{
	ifstream fi(filename);
	fi >> m;
	fi >> n;

	for (int i = 0; i < m; ++i)
		for (int j = 0; j < n; ++j)
			fi >> a[i][j];
}

void Xuat(float a[][500], int m, int n)
{
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
			cout << setw(10) << setprecision(5) << a[i][j];
		cout << endl;
	}
}

