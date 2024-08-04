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
	float s = 1 - x;
	int m = 1;
	float t = x;
	int dau = 1;
	int i = 3;
	while (i <= 2 * n + 1)
	{
		m = m * (i - 1) * i;
		t = t * x * x;
		s = s + dau * t / m;
		dau = -dau;
		i += 2;
	}
	return s;
}