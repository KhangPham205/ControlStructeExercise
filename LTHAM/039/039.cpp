#include <iostream>
#include <cmath>
using namespace std;

float Tich(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	
	cout << "Tich la: " << Tich(n) << endl;
	return 0;
}

float Tich(int nn)
{
	float s = 1;
	int i = 1;
	while (i <= nn)
	{
		s = s * (1 + (float)1 / (i * i));
		i++;
	}
	return s;
}
