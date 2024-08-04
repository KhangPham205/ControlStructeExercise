#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int DemPhanBiet(int[], int);

int main()
{
	int a[100];
	int n;

	Nhap(a, n);
	cout << "Mang ban dau: ";
	Xuat(a, n);

	cout << "\nCac phan tu phan biet la: " << DemPhanBiet(a, n);
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

int DemPhanBiet(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i <= n - 1; i++)
	{
		bool flag = true;
		for (int j = 0; j < i; ++j)
			if (a[i] == a[j])
				flag = false;
		if (flag == true)
			dem++;
	}
	return dem;
}