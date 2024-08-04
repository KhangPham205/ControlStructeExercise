#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&, string);
void Xuat(int[], int);

int main()
{
	int a[500];
	int k;
	Nhap(a, k, "intdata01.inp");
	cout << "Mang ban dau: ";
	Xuat(a, k);
	return 0;
}

void Nhap(int a[], int& n, string filename)
{
	ifstream fi(filename);
	fi >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		fi >> a[i];
	}
}

void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(10) << a[i] << ' ';
}
