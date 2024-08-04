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
	float s = 3;
	float e = 1;
	int dau = 1;
	int i = 2;
	while (e >= pow(10, -6))
	{
		e = (float)4 / (i * (i + 1) * (i + 2));
		s = s + dau * e;
		dau = -dau;
		i += 2;
	}
	return s;
}