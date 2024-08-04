#include <iostream>
#include <cmath>
using namespace std;

float Tong(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	
	cout << "S = " << Tong(n) << endl;
	return 0;
}

float Tong(int n)
{
	float s = 0;
	int i = 2;
	while (i <= n)
	{
		s = pow(s + i, (float)1 / i);
		i++;
	}
	return s;
}