#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
int ktCon(float[][100], int, int, float[][100], int, int);

int main()
{
	float a[100][100];
	int m, n;
	Nhap(a, m, n);
	cout << "\nMa tran A ban dau\n";
	Xuat(a, m, n);

	float b[100][100];
	int k, l;
	Nhap(b, k, l);
	cout << "\nMa tran B ban dau\n";
	Xuat(b, k, l);

	cout << "\nSo lan xuat hien cua ma tran A trong ma tran B: " << ktCon(a, m, n, b, k, l);

	return 0;
}

void Nhap(float a[][100], int& m, int& n)
{
	cout << "\nNhap m: ";
	cin >> m;
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < m; ++i)
		for (int j = 0; j < n; ++j)
			a[i][j] = -100.0 + (rand() / (RAND_MAX / (100.0 - (-100.0))));
}

void Xuat(float a[][100], int m, int n)
{
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
			cout << setw(8) << setprecision(3) << a[i][j];
		cout << endl;
	}
}

int ktCon(float a[][100], int m, int n, float b[][100], int k, int l)
{
	if (m > k || n > l)
		return -2;
	int flag = 0;
	int dem = 0;
	for (int vtd = 0; vtd <= k - m; ++vtd)
		for (int vtc = 0; vtc <= l - n; ++vtc)
		{
			int co = 1;
			for (int i = 0; i < m; ++i)
				for (int j = 0; j < n; ++j)
					if (a[i][j] != b[vtd + i][vtc + j])
						co = 0;
			if (co == 1)
				flag = 1;
		}
	return flag;
}