#include <iostream>
using namespace std;

int main()
{
	int a;
	cout << "Nhap a: ";
	cin >> a;

	int b;
	cout << "Nhap b: ";
	cin >> b;

	int c;
	cout << "Nhap c: ";
	cin >> c;

	if (a > b)
	{
		int temp = a;
		a = b;
		b = temp;
	}

	if (a > c)
	{
		int temp = a;
		a = c;
		c = temp;
	}

	if (b > c)
	{
		int temp = b;
		b = c;
		c = temp;
	}
	cout << "a = " << a << " b = " << b << " c = " << c << endl;
	return 0;
}