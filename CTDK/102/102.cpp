#include <iostream>
#include <cmath>
using namespace std;

int main()
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
	cout << "S = " << s << endl;
	return 0;
}