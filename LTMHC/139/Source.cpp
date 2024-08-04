#include <iostream>
#include <iomanip>
using namespace std;

void TaoMaTran(int[][500], int&, int&);
void XuatMaTran(int[][500], int, int);
void SapXepXoanOc(int[][500], int, int);

int main()
{
	int a[500][500];
	int m, n;
	TaoMaTran(a, m, n);
	cout << "Ma tran duoc tao: " << endl;
	XuatMaTran(a, m, n);

	SapXepXoanOc(a, m, n);
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

void SapXepXoanOc(int a[][500], int m, int n)
{
	int left = 0, right = n - 1, top = 0, bottom = m - 1;
	int k = 0;
	int value = 1;
	int b[500];
	while (left <= right && top <= bottom) {
		for (int i = left; i <= right; ++i)
			b[k++] = a[top][i];

		for (int i = top + 1; i <= bottom; ++i)
			b[k++] =  a[i][right];

		if (top < bottom)
			for (int i = right - 1; i >= left; --i)
				b[k++] = a[bottom][i];

		if (left < right)
			for (int i = bottom - 1; i > top; --i)
				b[k++] = a[i][left];

		left++;
		right--;
		top++;
		bottom--;
	}

	for (int i = 0; i < k - 1; i++)
		for ( int j = i + 1; j < k; j++)
			if (b[i] > b[j])
				swap(b[i], b[j]);

	left = 0, right = n - 1, top = 0, bottom = m - 1;
	k = 0;
	while (left <= right && top <= bottom) {
		for (int i = left; i <= right; ++i)
			a[top][i] = b[k++];

		for (int i = top + 1; i <= bottom; ++i)
			a[i][right] = b[k++];

		if (top < bottom)
			for (int i = right - 1; i >= left; --i)
				a[bottom][i] = b[k++];

		if (left < right)
			for (int i = bottom - 1; i > top; --i)
				a[i][left] = b[k++];

		left++;
		right--;
		top++;
		bottom--;
	}
}

