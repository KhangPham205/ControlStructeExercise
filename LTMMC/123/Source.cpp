#include <iostream>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int ktDoiXung(int[], int);

int main()
{
	int a[100];
	int n;

	Nhap(a, n);
	cout << "Mang ban dau: ";
	Xuat(a, n);

	if (ktDoiXung(a, n) == 1)
		cout << "\nMang doi xung";
	else
		cout << "\nKhong mang doi xung";

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

int ktDoiXung(int a[], int n)
{
	int flag = 1;
	int start = 0;
	int end = n - 1;
	while (start < end)
	{
		if (a[start] != a[end])
			flag = 0;
		start++;
		end--;
	}
	return flag;
}