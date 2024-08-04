#include <iostream>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int ktTonTaiKhong(int[], int);

int main()
{
	int a[100];
	int n;

	Nhap(a, n);
	cout << "Mang ban dau: ";
	Xuat(a, n);

	if (ktTonTaiKhong(a, n) == 1)
		cout << "\nTon tai 0";
	else
		cout << "\nKhong ton tai 0";

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

int ktTonTaiKhong(int a[], int n)
{
	int flag = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == 0)
			flag = 1;
	}

	return flag;
}