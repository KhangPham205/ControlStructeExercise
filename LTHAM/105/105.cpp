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
	int m = 0;
	int i = 1;
	while (e >= pow(10, -6))
	{
		m = m + i;
		e = (float)1 / m;
		s = s + e;
		i++;
	}
	return s;
}