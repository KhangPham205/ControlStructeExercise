#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int, string);

int main()
{
	float a[500];
	int k;
	Nhap(a, k);
	cout << "Mang ban dau: ";
	Xuat(a, k, "intdata09.outp");
	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = -100.0 + (rand() / (RAND_MAX / (100.0 - (-100.0))));
}

void Xuat(float a[], int n, string filename)
{
	ofstream fo(filename);
	fo << n << endl;
	for (int i = 0; i < n; i++)
		fo << setw(5) << setprecision(5) << a[i];
}
