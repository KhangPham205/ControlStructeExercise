#include <iostream>
#include <iomanip>
using namespace std;

void TaoMaTran(float[][500], int&, int&);
void XuatMaTran(float[][500], int, int);
bool ktDong(float[][500], int, int, int);
void LietKe(float[][500], int, int);

int main()
{
	float a[500][500];
	int m, n;
	TaoMaTran(a, m, n);
	cout << "Ma tran duoc tao: " << endl;
	XuatMaTran(a, m, n);

	cout << "\nCac dong co so am, so duong va so 0: " << endl;
	LietKe(a, m, n);
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

bool ktDong(float a[][500], int m, int n, int d)
{
	int Loai[3] = { 0,0,0 };
	for (int j = 0; j < n; ++j)
		if (a[d][j] < 0)
			Loai[0]++;
		else if (a[d][j] == 0)
			Loai[1]++;
		else
			Loai[2]++;

	return (Loai[0] && Loai[1] && Loai[2]);
}

void LietKe(float a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
		if (ktDong(a, m, n, i) == 1)
			cout << setw(8) << i;
}

