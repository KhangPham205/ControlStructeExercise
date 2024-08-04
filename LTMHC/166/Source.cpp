#include <iostream>
#include <iomanip>
using namespace std;

void TaoMaTran(float[][500], int&, int&);
void XuatMaTran(float[][500], int, int);
bool ktCon(float[][500], int, int, int, int);
void ConDau(float[][500], int, int);

int main()
{
	float a[500][500];
	int m, n;
	TaoMaTran(a, m, n);
	cout << "Ma tran duoc tao: " << endl;
	XuatMaTran(a, m, n);

	cout << "\nMa tran 3x3 toan duong dau tien: " << endl;
	ConDau(a, m, n);
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
			cout << setw(10) << a[i][j];
		cout << endl;
	}
}

bool ktCon(float a[][500], int m, int n, int vtd, int vtc)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if (a[vtd + i][vtc + j] <= 0)
				return false;
	return true;
}

void ConDau(float a[][500], int m, int n)
{
	for (int i = 0; i < m - 2; i++)
		for (int j = 0; j < n - 2; j++)
			if (ktCon(a, m, n, i, j) == true)
			{
				for (int k = 0; k < 3; k++)
				{
					for (int l = 0; l < 3; l++)
						cout << a[i + k][j + l] << ' ';
					cout << endl;
				}
				return;
			}

	cout << "Khong TT";
}

