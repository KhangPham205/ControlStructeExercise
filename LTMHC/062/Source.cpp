#include <iostream>
#include <iomanip>
using namespace std;

void TaoMaTran(int[][500], int&, int&);
void XuatMaTran(int[][500], int, int);
bool ktToanLe(int);
int DemToanLe(int[][500], int, int, int);

int main()
{
	int a[500][500];
	int m, n;
	TaoMaTran(a, m, n);
	cout << "Ma tran duoc tao: " << endl;
	XuatMaTran(a, m, n);

	float d;
	cout << "Nhap dong: ";
	cin >> d;

	cout << "\nSo luong so toan le tren dong " << d << " : " << endl;
	cout << DemToanLe(a, m, n, d);
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

bool ktToanLe(int k)
{
	for (int t = k; t > 0; t /= 10)
		if ((t % 10) % 2 == 0)
			return false;;
	return true;
}

int DemToanLe(int a[][500], int m, int n, int d)
{
	int dem = 0;
	for (int j = 0; j < n; ++j)
		if (ktToanLe(a[d][j]))
			dem++;
	return dem;
}

