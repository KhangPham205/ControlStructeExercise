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
	float t = 1;
	int i = 0;
	while (i <= n)
	{
		t = t * (x + i);
		s = s + 1 / t;
		i++;
	}
	cout << "Tong la: " << s << endl;
	return 0;
}