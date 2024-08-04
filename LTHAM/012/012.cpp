#include <iostream>
using namespace std;

float GiaTrix6(float);

int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;
	
	cout << "x^6 = " << GiaTrix6(x) << endl;
	return 0;
}

float GiaTrix6(float x)
{
	float x2 = x * x;
	float x4 = x2 * x2;
	return x4 * x2;
}
