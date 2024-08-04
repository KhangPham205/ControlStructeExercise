#include <iostream>
#include <iomanip>
using namespace std;

void TaoMaTran(float[][500], int&, int&);
void XuatMaTran(float[][500], int, int);
float TongDuong(float[][500], int, int);
int DemDuong(float[][500], int, int);
float TbcDuong(float[][500], int, int);

int main()
{
	float a[500][500];
	int m, n;
	TaoMaTran(a, m, n);
	cout << "Ma tran duoc tao: " << endl;
	XuatMaTran(a, m, n);
	
	if (DemDuong(a, m, n) > 0)
		cout << "\nTrung binh cong duong la: " << setprecision(5) << TbcDuong(a, m, n);
	else
		cout << "\nKhong co so thuc duong";
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
			a[i][j] = rand() / (RAND_MAX / 200.0) - 100.0;
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

float TongDuong(float a[][500], int m, int n)
{
	float s = 0;
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j)
			if (a[i][j] > 0)
				s = s + a[i][j];

	return (s > 0) ? s : -1;
}

int DemDuong(float a[][500], int m, int n)
{
	int dem = 0;
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j)
			if (a[i][j] > 0)
				dem++;

	return dem;
}

float TbcDuong(float a[][500], int m, int n)
{
	float s = TongDuong(a, m, n);
	int dem = DemDuong(a, m, n);
	return s / n;
}

