#include <iostream>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void LietKe(int[], int);

int main()
{
	int a[100];
	int n;

	Nhap(a, n);
	cout << "Mang ban dau: ";
	Xuat(a, n);

	cout << "\nCac gia tri thoa dieu kien: ";
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

void LietKe(int a[], int n)
{
	if (n <= 1)
	{
		return;
	}
	if (a[0] % 2 == 0 && a[1] % 2 == 0)
		cout << a[0];
	for (int i = 1; i <= n - 2; i++)
		if (a[i] % 2 == 0)
			if (a[i - 1] % 2 == 0 || a[i + 1] % 2 == 0)
				cout << a[i] << " ";
	if (a[n - 1] % 2 == 0 && a[n - 2] % 2 == 0)
		cout << a[n - 1] << " ";
}