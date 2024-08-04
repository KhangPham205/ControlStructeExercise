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
	int i = 1;
	while (i <= n)
	{
		t = sin(t);
		s = s + t;
		i++;
	}
	cout << "Tong la: " << s << endl;
	return 0;
}