#include <iostream>
using namespace std;

int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;

	float x2 = x * x;
	float x3 = x2 * x;
	float x4 = x2 * x2;
	float x7 = x4 * x3;
	cout << "x^7 = " << x7 << endl;
	return 0;
}