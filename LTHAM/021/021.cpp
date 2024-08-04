#include <iostream>
using namespace std;

float Tinhx15(float);

int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;

	
	cout << "x^15 = " << Tinhx15(x) << endl;
	return 0;
}

float Tinhx15(float x)
{
	float x2 = x * x;
	float x3 = x2 * x;
	float x6 = x3 * x3;
	float x12 = x6 * x6;
	return x12 * x3;
}
