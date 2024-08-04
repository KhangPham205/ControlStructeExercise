#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;

	int n;
	cout << "Nhap n: ";
	cin >> n;

	float s = 0;
	int m = 0;
	int dau = 1;
	int i = 1;
	while (i <= n)
	{
		m = m + i;
		s = s + (float)dau / m;
		dau = -dau;
		i++;
	}
	cout << "Tong la: " << s << endl;
	return 0;
}