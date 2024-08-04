#include <iostream>
using namespace std;

float Tinhx9(float);

int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;
	
	cout << "x^9 = " << Tinhx9(x) << endl;
	return 0;
}

float Tinhx9(float x)
{
	float x2 = x * x;
	float x4 = x2 * x2;
	float x8 = x4 * x4;
	return x8 * x;
}
