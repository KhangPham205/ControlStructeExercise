#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int ktGiamDan(int[], int);

int main()
{
	int a[100];
	int n;

	Nhap(a, n);
	cout << "Mang ban dau: ";
	Xuat(a, n);

	if (ktGiamDan(a, n) == 1)
		cout << "\nMang giam dan";
	else
		cout << "\nMang khong giam dan";

	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
		a[i] = rand() % (100 + 1);
}

void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(8) << a[i];
}

int ktGiamDan(int a[], int n)
{
	int flag = 1;
	int i = 0;
	while (i < n - 1)
	{
		if (a[i] < a[i + 1])
			flag = 0;
		i++;
	}
	return flag;
}