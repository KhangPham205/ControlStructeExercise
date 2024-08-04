#include <iostream>
using namespace std;

float Tinhx12(float);

int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;
	
	cout << "x^12 = " << Tinhx12(x) << endl;
	return 0;
}

float Tinhx12(float x)
{
	float x2 = x * x;
	float x4 = x2 * x2;
	float x8 = x4 * x4;
	return x8 * x4;
}
