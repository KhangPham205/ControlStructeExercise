#include <iostream>
#include <iomanip>
using namespace std;

void TaoMaTran(int[][500], int&, int&);
void LietKe(int[][500], int, int);

int main()
{
	int a[500][500];
	int m, n;
	TaoMaTran(a, m, n);

	cout << "Ma tran duoc tao: " << endl;
	LietKe(a, m, n);
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
			cin >> a[i][j];
}

void LietKe(int a[][500], int m, int n)
{
	for (int i = 0; i < m; i+=2)
		for (int j = 0; j < n; ++j)
			if (a[i][j] % 2 != 0)
				cout << setw(10) << a[i][j];
}

