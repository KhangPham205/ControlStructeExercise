#include <iostream>
#include <iomanip>
using namespace std;

void TaoMaTran(float[][500], int&, int&);
void XuatMaTran(float[][500], int, int);
float TichCot(float[][500], int, int, int);

int main()
{
	float a[500][500];
	int m, n;
	TaoMaTran(a, m, n);
	cout << "Ma tran duoc tao: " << endl;
	XuatMaTran(a, m, n);

	int c;
	cout << "\nNhap cot can duyet: ";
	cin >> c;

	cout << "\nTich cac so chan tren cot " << c << " thuoc doan [-1,0] trong ma tran : " << setprecision(5) << TichCot(a, m, n, c);
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

float TichCot(float a[][500], int m, int n, int c)
{
	float s = 1;
	bool flag = false;
	for (int i = 0; i < m; ++i)
		if (a[i][c] >= -1 && a[i][c] <= 0)
		{
			flag = true;
			s = s * a[i][c];
		}

	return flag ? s : -1;
}

