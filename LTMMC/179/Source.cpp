#include <iostream>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int ktCon(int[], int, int, int);
void LietKe(int[], int);

int main()
{
	int a[100];
	int n;

	Nhap(a, n);
	cout << "Mang ban dau: ";
	Xuat(a, n);

	cout << "\nMang con tang\n";
	LietKe(a, n);

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

void XuatConNho(int a[], int n, int l)
{
	for (int i = 0; i <= n - l; ++i)
	{
		if (ktCon(a, n, i, l) == 1)
		{
			for (int j = i; j < i + l; ++j)
				cout << a[j] << " ";
			cout << endl;
		}
	}
}

int ktCon(int a[], int n, int vt, int l)
{
	bool flag = 1;
	for (int i = vt; i < vt + l - 1; ++i)
		if (a[i] < 0 || a[i] > a[i + 1])
			flag = 0;
	return flag;
}

void LietKe(int a[], int n)
{
	for (int l = 2; l <= n; ++l)
		XuatConNho(a, n, l);
}