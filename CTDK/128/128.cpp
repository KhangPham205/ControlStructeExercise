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

	if (a > b)
	{
		int temp = a;
		a = b;
		b = temp;
	}
	cout << "a = " << a << " b = " << b << endl;
	return 0;
}