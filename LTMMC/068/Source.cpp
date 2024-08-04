#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int TanSuat(int[], int, int);
void LietKe(int[], int);

int main()
{
	int a[100];
	int n;

	Nhap(a, n);
	cout << "Mang ban dau: ";
	Xuat(a, n);

	cout << "\nTan suat cua cac phan tu trong mang la: ";
	LietKe(a, n);
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; ++i)
		a[i] = rand() % 100;
}

void Xuat(int a[], int n)
{
	for (int i = 0; i < n; ++i)
		cout << a[i] << " ";
}

int TanSuat(int a[], int n, int x)
{
	int dem = 0;
	for (int i = 1; i <= n - 1; i++)
		if (a[i] == x)
			dem++;
	return dem;
}

void LietKe(int a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
	{
		bool flag = true;
		for (int j = 0; j < i; ++j)
			if (a[i] == a[j])
				flag = false;
		if (flag == true)
		{
			int dem = TanSuat(a, n, a[i]);
			cout << "\nGia tri " << a[i];
			cout << "(" << dem << ")";
		}
	}
}