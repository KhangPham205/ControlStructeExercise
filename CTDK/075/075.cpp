#include <iostream>
using namespace std;

int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;

	int n;
	cout << "Nhap n: ";
	cin >> n;

	float s = 1;
	float t = 1;
	int m = 1;
	int i = 2;
	while (i <= 2 * n)
	{
		t = t * x * x;
		m = m * (i - 1) * i;
		s = s + t / m;
		i = i + 2;
	}
	cout << "Tong la: " << s << endl;
	return 0;
}