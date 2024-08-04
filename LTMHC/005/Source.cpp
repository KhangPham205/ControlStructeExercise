#include <iostream>
#include <iomanip>
using namespace std;

void TaoMaTran(long[][500], int&, int&);
void Xuat(long[][500], int, int);

int main()
{
	long a[100][500];
	int m, n;
	TaoMaTran(a, m, n);

	cout << "Ma tran duoc tao: " << endl;
	Xuat(a, m, n);
	return 0;
}

void TaoMaTran(long a[][500], int& m, int& n)
{
	cout << "Nhap so dong: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;

	for (int i = 0; i < m; ++i)
		for (int j = 0; j < n; ++j)
			a[i][j] = rand() * rand();
}

void Xuat(long a[][500], int m, int n)
{
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
			cout << setw(15) << a[i][j];
		cout << endl;
	}
}

