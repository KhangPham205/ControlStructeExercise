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

	float s = -1;
	int m = 1;
	float t = 1;
	int dau = 1;
	int i = 2;
	while (i <= 2 * n)
	{
		m = m * (i - 1) * i;
		t = t * x * x;
		s = s + dau * t / m;
		dau = -dau;
		i += 2;
	}
	cout << "Tong la: " << s << endl;
	return 0;
}