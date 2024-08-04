#include <iostream>
using namespace std;

float Tong(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	
	cout << "Tong la: " << Tong(n) << endl;
	return 0;
}

float Tong(int nn)
{
	float s = 0;
	int m = 0;
	int i = 1;
	while (i <= nn)
	{
		m = m + i;
		s = s + (float)1 / m;
		i = i + 1;
	}
	return s;
}