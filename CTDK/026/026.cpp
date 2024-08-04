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

	a = a + b;
	b = a - b;
	a = a - b;
	cout << "a = " << a << " b = " << b << endl;
	return 0;
}