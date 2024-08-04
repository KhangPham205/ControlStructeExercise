#include <iostream>
using namespace std;

float Tinhx14(float);

int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;
	
	cout << "x^14 = " << Tinhx14(x) << endl;
	return 0;
}

float Tinhx14(float x)
{
	float x2 = x * x;
	float x4 = x2 * x2;
	float x8 = x4 * x4;
	float x12 = x8 * x4;
	return x12 * x2;
}
