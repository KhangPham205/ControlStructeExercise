#include <iostream>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int ViTriLonNhat(int[], int);
int TimChuSo(int[], int);

int main()
{
	int a[100];
	int n;

	Nhap(a, n);
	cout << "Mang ban dau: ";
	Xuat(a, n);

	cout << "\nChu so xuat hien nhieu nhat la:" << TimChuSo(a, n);

	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; ++i)
		a[i] = rand() % (100 + 1);
}

void Xuat(int a[], int n)
{
	for (int i = 0; i < n; ++i)
		cout << a[i] << " ";
}

int ViTriLonNhat(int a[], int n)
{
	int lc = 0;
	for (int i = 0; i <= n - 1; i++)
		if (a[i] > a[lc])
			lc = i;
	return lc;
}

int TimChuSo(int a[], int n)
{
	int ChuSo[10] = { 0,0,0,0,0,0,0,0,0,0 };
	for (int i = 0; i < n; i++)
	{
		if (a[i] == 0)
			ChuSo[0]++;
		int t = abs(a[i]);
		while (t != 0)
		{
			int dv = t % 10;
			ChuSo[dv]++;
			t = t / 10;
		}
	}

	return ViTriLonNhat(ChuSo, 10);
}