#include <iostream>
#include <iomanip>
using namespace std;

void TaoMaTran(int[][500], int&, int&);
void XuatMaTran(int[][500], int, int);
bool ktGiam(int[][500], int, int);

int main()
{
	int a[500][500];
	int m, n;
	TaoMaTran(a, m, n);
	cout << "Ma tran duoc tao: " << endl;
	XuatMaTran(a, m, n);

	if (ktGiam(a, m, n))
		cout << "\Ma tran giam" << endl;
	else
		cout << "\nKhong phai ma tran giam" << endl;
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
			a[i][j] = rand() % 101 - 10;
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

bool ktGiam(int a[][500], int m, int n)
{
	int prev = a[0][0];
	for (int i = 0; i < m; ++i)
		for (int j = 0; j < n; ++j)
		{
			if (a[i][j] > prev)
				return false;
			prev = a[i][j];
		}
		
	return true;
}
