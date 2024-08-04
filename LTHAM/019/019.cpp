#include <iostream>
using namespace std;

float Tinhx13(float);

int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;

	cout << "x^13 = " << Tinhx13(x) << endl;
	return 0;
}

float Tinhx13(float x)
{
	float x2 = x * x;
	float x4 = x2 * x2;
	float x8 = x4 * x4;
	float x12 = x8 * x4;
	return x12 * x;
}
