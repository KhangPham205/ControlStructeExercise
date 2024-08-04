#include <iostream>
using namespace std;

float GiaTrix7(float);

int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;
	
	cout << "x^7 = " << GiaTrix7(x) << endl;
	return 0;
}

float GiaTrix7(float x)
{
	float x2 = x * x;
	float x3 = x2 * x;
	float x4 = x2 * x2;
	return x4 * x3;
}
