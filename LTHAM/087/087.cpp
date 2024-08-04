#include <iostream>
#include <cmath>
using namespace std;

float Tong(float, int);

int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;

	int n;
	cout << "Nhap n: ";
	cin >> n;

	
	cout << "Tong la: " << Tong(x, n) << endl;
	return 0;
}

float Tong(float x, int n)
{
	float s = 0;
	float t = x;
	int dau = 1;
	int i = 0;
	while (i <= n)
	{
		s = s + dau * t;
		t = t * x * x;
		dau = -dau;
		i++;
	}
	return s;
}