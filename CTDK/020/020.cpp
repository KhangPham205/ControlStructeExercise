#include <iostream>
using namespace std;

int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;

	float x2 = x * x;
	float x4 = x2 * x2;
	float x8 = x4 * x4;
	float x12 = x8 * x4;
	float x14 = x12 * x2;
	cout << "x^14 = " << x14 << endl;
	return 0;
}