#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
float TongAm(float[], int);

int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	cout << "Tong so am: " << setprecision(5) << TongAm(a, n) << endl;
	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
		a[i] = -100.0 + rand() / (RAND_MAX / (200.0));
}

float TongAm(float a[], int n)
{
	float s = 0;
	for (int i = 0; i < n; i++)
		if (a[i] < 0)
			s = s + a[i];
	return s;
}

