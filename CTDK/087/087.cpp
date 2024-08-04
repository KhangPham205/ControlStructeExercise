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
	cout << "Tong la: " << s << endl;
	return 0;
}