#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&, string);
void Xuat(float[], int);

int main()
{
	float a[500];
	int k;
	Nhap(a, k, "intdata01.inp");
	cout << "Mang ban dau: ";
	Xuat(a, k);
	return 0;
}

void Nhap(float a[], int& n, string filename)
{
	ifstream fi(filename);
	fi >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		fi >> a[i];
	}
}

void Xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(10) << setprecision(3) << a[i] << ' ';
}
