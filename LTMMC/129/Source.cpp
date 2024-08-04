#include <iostream>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int ktDangSong(int[], int);

int main()
{
	int a[100];
	int n;

	Nhap(a, n);
	cout << "Mang ban dau: ";
	Xuat(a, n);

	if (ktDangSong(a, n) == 1)
		cout << "\nDang song";
	else
		cout << "\nKhong phai dang song";

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

int ktDangSong(int a[], int n)
{
	if (n <= 1)
		return 0;
	if (n == 2)
		if (a[0] != a[1])
			return 1;
		else
			return 0;

	int flag = 1;
	int i = 1;
	while (i < n - 1)
	{
		if ((a[i] - a[i - 1]) * (a[i] - a[i + 1]) <= 0)
			flag = 0;
		i++;
	}
	return flag;
}