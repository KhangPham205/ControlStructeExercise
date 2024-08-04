#include <iostream>
#include <set>
#include <iomanip>
using namespace std;

void TaoMaTran(float[][500], int&, int&);
void XuatMaTran(float[][500], int, int);
int DemPhanBiet(float[][500], int, int);

int main()
{
	float a[500][500];
	int m, n;
	TaoMaTran(a, m, n);
	cout << "Ma tran duoc tao: " << endl;
	XuatMaTran(a, m, n);

	cout << "\nSo luong gia tri phan biet trong ma tran duoc tao: " << DemPhanBiet(a, m, n);
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

int DemPhanBiet(float a[][500], int m, int n)
{
	int dem = 0;
	set<float> gtPhanBiet;
	for (int i = 0; i < m; ++i)
		for (int j = 0; j < n; ++j)
			gtPhanBiet.insert(a[i][j]);

	return gtPhanBiet.size();
}

