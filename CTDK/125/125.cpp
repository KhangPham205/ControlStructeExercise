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

	if (a < 0)
		a = -a;
	if (b < 0)
		b = -b;
	cout << "a = " << a << " b = " << b << endl;
	return 0;
}