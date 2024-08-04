#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int, string);

int main()
{
	int a[500];
	int k;
	Nhap(a, k);
	cout << "Mang ban dau: ";
	Xuat(a, k, "intdata09.outp");
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = rand() % (200 + 1) - 100;
}

void Xuat(int a[], int n, string filename)
{
	ofstream fo(filename);
	fo << n << endl;
	for (int i = 0; i < n; i++)
		fo << setw(5) << a[i];
}
