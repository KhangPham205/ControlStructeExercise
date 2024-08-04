#include <iostream>
#include <iomanip>
using namespace std;

void TaoMaTran(int[][500], int&, int&);
void XuatMaTran(int[][500], int, int);
void SapXepZicZac(int[][500], int, int);

int main()
{
	int a[500][500];
	int m, n;
	TaoMaTran(a, m, n);
	cout << "Ma tran duoc tao: " << endl;
	XuatMaTran(a, m, n);

	SapXepZicZac(a, m, n);
	cout << "\nMa tran sau sap xep: " << endl;
	XuatMaTran(a, m, n);
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
			a[i][j] = rand() % 100 - 50;
}

void XuatMaTran(int a[][500], int m, int n)
{
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
			cout << setw(10) << setprecision(5) << a[i][j];
		cout << endl;
	}
}

void SapXepZicZac(int a[][500], int m, int n)
{
	int left = 0, right = n - 1, top = 0;
	int k = 0;
	int value = 1;
	int b[500];
	while (top < m) {
		for (int i = left; i <= right; ++i)
			b[k++] = a[top][i];
		top++;
		for (int i = right; i >= left; --i)
			b[k++] = a[top][i];
		top++;
	}

	for (int i = 0; i < k - 1; i++)
		for (int j = i + 1; j < k; j++)
			if (b[i] < b[j])
				swap(b[i], b[j]);

	left = 0, right = n - 1, top = 0;
	k = 0;
	while (top < m) {
		for (int i = left; i <= right; ++i)
			a[top][i] = b[k++];
		top++;
		for (int i = right; i >= left; --i)
			a[top][i] = b[k++];
		top++;;
	}
}

