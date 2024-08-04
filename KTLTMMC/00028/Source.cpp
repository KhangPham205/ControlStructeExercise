#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
float LonNhat(float[], int);

int main()
{
	float a[100];
	int k;
	Nhap(a, k);
	cout << "So thuc lon nhat: " << setw(10) << LonNhat(a, k) << endl;
	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; ++i)
		a[i] = rand() / (RAND_MAX / 200.0);
}

float LonNhat(float a[], int n)
{
	float lc = a[0];
	for (int i = 0; i < n; ++i)
		if (a[i] > lc)
			lc = a[i];
	return lc;
}
