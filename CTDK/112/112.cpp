#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float s = 4 - (float)2 / 4 - (float)1 / 5 - (float)1 / 6;
	int t = 1;
	float e = 1;
	int i = 1;
	while (e >= pow(10, -6))
	{
		t *= 16;
		e = ((float)4 / (8 * i + 1) - (float)2 / (8 * i + 4) - (float)1 / (8 * i + 5) - (float)1 / (8 * i + 6)) / pow(16, i);
		s += e;
		i += 1;
	}
	cout << "Gia tri cua thuat toan BaileyBorwein-Plouffe cho pi la: " << s;
	return 0;
}