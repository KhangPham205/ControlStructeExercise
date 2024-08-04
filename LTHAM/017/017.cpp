#include <iostream>
using namespace std;

float Tinhx11(float);

int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;
	
	cout << "x^11 = " << Tinhx11(x) << endl;
	return 0;
}

float Tinhx11(float x)
{
	float x2 = x * x;
	float x4 = x2 * x2;
	float x8 = x4 * x4;
	float x10 = x8 * x2;
	return x10 * x;
}
