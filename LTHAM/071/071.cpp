#include <iostream>
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

float Tong(float xx, int nn)
{
	float s = 0;
	float t = xx;
	int i = 1;
	while (i <= nn)
	{
		t = t * xx * xx;
		s = s + t;
		i = i + 1;
	}
	return s;
}