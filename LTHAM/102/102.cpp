#include <iostream>
#include <cmath>
using namespace std;

float Tong();

int main()
{
	cout << "S = " << Tong() << endl;
	return 0;
}

float Tong()
{
	float s = 0;
	float e = 1;
	int i = 2;
	while (e >= pow(10, -6))
	{
		e = (float)1 / i;
		s = s + e;
		i += 2;
	}
	return s;
}