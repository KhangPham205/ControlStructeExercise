#include <iostream>
using namespace std;

float GiaTrix32(float);

int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;

	cout << "x^32 = " << GiaTrix32(x) << endl;
	return 0;
}

float GiaTrix32(float x)
{
	float x2 = x * x;
	float x4 = x2 * x2;
	float x8 = x4 * x4;
	float x16 = x8 * x8;
	return x16 * x16;
}
