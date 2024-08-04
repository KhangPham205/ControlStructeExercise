#include <iostream>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int ktCapSoCong(int[], int);

int main()
{
	int a[100];
	int n;

	Nhap(a, n);
	cout << "Mang ban dau: ";
	Xuat(a, n);

	if (ktCapSoCong(a, n) == 1)
		cout << "\nLap duoc csc";
	else
		cout << "\nKhong lap duoc csc";

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

int ktCapSoCong(int a[], int n)
{
	if (n <= 1)
		return 0;
	int flag = 1;
	int i = 0;
	while (i < n - 1)
	{
		if ((a[i] - a[i + 1]) != (a[0] - a[1]))
			flag = 0;
		i++;
	}
	return flag;
}